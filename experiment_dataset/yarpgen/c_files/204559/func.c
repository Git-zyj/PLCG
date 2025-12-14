/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204559
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */long long int) max((((/* implicit */int) (unsigned short)52786)), (-64114719)));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) ((unsigned short) (unsigned short)1535))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) var_2)) - (60229))))))))));
    var_19 ^= ((/* implicit */unsigned short) var_9);
    var_20 = ((/* implicit */_Bool) min((min((((/* implicit */int) var_15)), (max((((/* implicit */int) (_Bool)1)), (64114713))))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) 64114707))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))) : (max((-64114719), (((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (var_14)));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                        var_23 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0]))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) arr_8 [i_3]))))) ? (((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) (short)-20869)) : (((/* implicit */int) arr_8 [i_0])))) : ((-(((/* implicit */int) arr_8 [i_0])))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 1) 
        {
            var_25 = ((/* implicit */unsigned char) ((unsigned long long int) -1446456321));
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 64114719))));
            var_27 = var_13;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 1) 
            {
                var_28 |= ((/* implicit */long long int) var_15);
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (arr_3 [i_7])));
                            arr_29 [i_4] [i_7] [i_6] [i_8] = var_0;
                        }
                    } 
                } 
            }
            for (long long int i_10 = 2; i_10 < 15; i_10 += 1) 
            {
                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_16 [i_4] [i_4]) - (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_6]))))))))));
                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned char)254)))))))));
                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_4] [i_4] [i_6] [(unsigned short)15])) ? (((/* implicit */int) ((unsigned char) arr_18 [i_4] [i_6] [i_10]))) : (((/* implicit */int) var_1))));
            }
            for (int i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_33 = ((/* implicit */_Bool) arr_32 [i_4] [i_6] [i_11] [(short)2]);
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    var_34 = ((/* implicit */unsigned short) var_15);
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    var_36 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [2LL] [2LL] [i_11] [i_11] [i_6] [i_12])) ? (((/* implicit */int) arr_20 [i_11])) : (((/* implicit */int) arr_37 [i_4] [(unsigned short)1] [(_Bool)0] [(unsigned short)1]))))) - (arr_0 [i_12])));
                    arr_39 [(unsigned char)0] [i_6] [i_11] [i_12] = ((/* implicit */long long int) arr_5 [i_4] [(unsigned short)6] [i_11]);
                }
                for (long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    arr_43 [i_13] [i_13] [i_11] [i_13] [i_11] = ((/* implicit */_Bool) arr_18 [i_4] [i_4] [(_Bool)1]);
                    var_37 = arr_23 [i_4] [i_6];
                    var_38 -= ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_4 [i_11])));
                    var_39 = ((/* implicit */short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_35 [i_6]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6])))));
                    var_40 = ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_26 [i_4] [i_6] [i_4] [(short)11] [i_11] [(short)11] [i_13]) - (2866929088852372147LL)))))));
                }
            }
            for (int i_14 = 2; i_14 < 13; i_14 += 4) 
            {
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((unsigned int) var_12)) % (((/* implicit */unsigned int) ((64114718) / (((/* implicit */int) var_6))))))))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 2; i_15 < 15; i_15 += 2) 
                {
                    for (int i_16 = 4; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) 1735052206978990774LL);
                            var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_16 [i_15] [i_16 - 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_6])))))))));
                        }
                    } 
                } 
            }
            arr_50 [i_6] = ((/* implicit */unsigned int) var_3);
        }
        var_44 = ((/* implicit */unsigned int) max((((short) (_Bool)1)), (((/* implicit */short) arr_24 [i_4]))));
        var_45 = ((/* implicit */short) 783572426U);
    }
    for (unsigned short i_17 = 1; i_17 < 8; i_17 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_18 = 0; i_18 < 10; i_18 += 1) 
        {
            var_46 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (-7616053115510577166LL)))));
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 10; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1515794355)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52756))))))))) ? ((~(0LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)18841)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_21 = 1; i_21 < 7; i_21 += 1) 
                        {
                            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)52755)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10875)))));
                            var_49 = var_10;
                            var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) ((long long int) -64114719)))));
                            arr_63 [i_17 + 1] [8U] [i_20] [i_20] [i_21] |= ((/* implicit */_Bool) ((unsigned short) (+(arr_10 [i_17] [i_18] [i_19] [i_20]))));
                            var_51 ^= ((/* implicit */unsigned char) (+(arr_53 [i_17 - 1] [i_17 + 2])));
                        }
                        /* vectorizable */
                        for (long long int i_22 = 1; i_22 < 9; i_22 += 1) 
                        {
                            arr_68 [i_17] [i_22] [i_22] [i_20] [i_22] = ((/* implicit */_Bool) (-(((((/* implicit */int) var_4)) / (((/* implicit */int) (unsigned short)3040))))));
                            arr_69 [i_22] [i_22] = ((/* implicit */unsigned short) ((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))));
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [(_Bool)1] [(unsigned short)7] [i_19])) ? (((/* implicit */int) ((3384117593809603365LL) != (((/* implicit */long long int) ((/* implicit */int) (short)10875)))))) : (((((/* implicit */_Bool) arr_58 [i_18] [i_19] [i_20] [i_22 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))));
                        }
                        for (unsigned long long int i_23 = 2; i_23 < 9; i_23 += 4) 
                        {
                            var_53 += ((/* implicit */_Bool) ((-2162729369763531699LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-25801)))));
                            var_54 = ((/* implicit */short) (!((_Bool)0)));
                        }
                    }
                } 
            } 
            var_55 += ((/* implicit */long long int) arr_46 [i_17] [i_18]);
        }
        for (int i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            arr_76 [i_17] [0ULL] = ((/* implicit */unsigned long long int) max((max((((/* implicit */short) arr_7 [i_17] [i_17])), (arr_62 [(unsigned short)7] [(_Bool)1] [i_17 + 1] [i_17 - 1] [i_17]))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_17 + 2] [i_17 - 1] [i_17 - 1])))))));
            var_56 += ((/* implicit */_Bool) arr_30 [i_17] [i_17] [(unsigned short)7] [i_17]);
            var_57 = ((/* implicit */long long int) arr_61 [i_24]);
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_79 [i_17 + 1] [i_17 + 1] [i_17 + 1] = ((((/* implicit */int) (short)-9476)) & ((~((-(((/* implicit */int) (short)13680)))))));
            var_58 = ((/* implicit */_Bool) min((var_58), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)10868)), (var_2)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))) * (((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
        }
        /* vectorizable */
        for (long long int i_26 = 0; i_26 < 10; i_26 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_27 = 4; i_27 < 9; i_27 += 4) 
            {
                arr_86 [i_17 - 1] [i_17 + 1] [i_17 + 1] = ((/* implicit */unsigned short) (short)4);
                var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) (unsigned short)12780))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_29 = 1; i_29 < 9; i_29 += 4) 
                {
                    var_60 &= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) 4294967295U))) - (((int) (unsigned short)46118))));
                    /* LoopSeq 1 */
                    for (short i_30 = 0; i_30 < 10; i_30 += 4) 
                    {
                        var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) (-(((long long int) arr_35 [i_30])))))));
                        var_62 = ((short) arr_7 [i_30] [i_29 + 1]);
                    }
                }
                var_63 = ((/* implicit */int) min((var_63), (((((/* implicit */_Bool) arr_70 [i_26] [i_28])) ? (arr_81 [i_17 + 1]) : (((/* implicit */int) (_Bool)1))))));
            }
        }
        arr_97 [(_Bool)1] [i_17 + 1] = max((-3400079154196011064LL), (((/* implicit */long long int) 667748926U)));
        var_64 = ((/* implicit */unsigned int) (-(((((((/* implicit */_Bool) (unsigned short)58560)) && (((/* implicit */_Bool) arr_87 [i_17])))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (long long int i_31 = 3; i_31 < 8; i_31 += 1) 
        {
            var_65 = ((/* implicit */_Bool) var_14);
            var_66 -= ((/* implicit */long long int) arr_95 [(unsigned short)9] [i_31 + 2] [i_31 + 2] [i_31 - 1] [i_31 - 2] [i_31 - 2]);
            arr_101 [1LL] [(unsigned char)7] [1LL] = ((/* implicit */unsigned short) arr_14 [i_17 + 2]);
            arr_102 [i_17 + 2] [i_31 + 2] = ((/* implicit */_Bool) min((-64114719), (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 3 */
            for (unsigned short i_32 = 0; i_32 < 10; i_32 += 4) 
            {
                var_67 |= ((/* implicit */_Bool) max((arr_94 [i_17] [i_31] [i_32] [i_31] [(_Bool)1] [i_32]), (((/* implicit */unsigned short) min((arr_95 [i_32] [(unsigned short)6] [(unsigned short)6] [6ULL] [i_17 - 1] [i_32]), (arr_3 [i_17 - 1]))))));
                arr_105 [i_17] [i_17] [8] [i_32] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) arr_99 [i_17 + 2])));
            }
            for (unsigned short i_33 = 0; i_33 < 10; i_33 += 4) 
            {
                var_68 -= ((/* implicit */long long int) arr_7 [(unsigned char)0] [(short)16]);
                var_69 = ((/* implicit */int) var_10);
                var_70 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)-291))));
            }
            for (unsigned short i_34 = 0; i_34 < 10; i_34 += 4) 
            {
                var_71 = ((/* implicit */long long int) max((var_71), (((((/* implicit */_Bool) min((arr_67 [i_17] [i_17] [i_31 + 1] [i_31 + 1] [i_34]), (((/* implicit */long long int) arr_48 [(_Bool)1] [i_34] [(_Bool)1] [i_34] [i_31]))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_90 [i_17] [i_31 - 2] [i_31] [i_34])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_3))))), (min((2686048588775650522LL), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_99 [i_17])) ? ((+(-1659903492))) : (((((/* implicit */_Bool) arr_107 [1LL] [i_31] [i_34] [i_17])) ? (((/* implicit */int) arr_57 [i_17] [i_17])) : (((/* implicit */int) arr_45 [6LL] [i_31] [i_34])))))))))));
                /* LoopNest 2 */
                for (int i_35 = 0; i_35 < 10; i_35 += 1) 
                {
                    for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
                    {
                        {
                            var_72 = ((_Bool) var_13);
                            var_73 = ((/* implicit */int) arr_62 [i_17] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_36]);
                            var_74 = ((/* implicit */int) min((var_74), (((/* implicit */int) (+(arr_117 [i_17] [(_Bool)1] [i_17 + 1] [i_17] [i_17] [(_Bool)1]))))));
                            var_75 = ((/* implicit */long long int) min((var_12), (((/* implicit */unsigned short) var_10))));
                            var_76 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_72 [i_17 + 1])), (max((arr_25 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned int) ((short) var_6)))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_37 = 2; i_37 < 9; i_37 += 4) 
                {
                    var_77 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                    var_78 = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_108 [i_17] [i_31]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49221)) != (((/* implicit */int) (short)2198))))))));
                }
                for (short i_38 = 0; i_38 < 10; i_38 += 2) 
                {
                    var_79 = ((/* implicit */_Bool) ((((arr_113 [i_17 - 1] [i_34] [i_34] [i_38] [i_38]) ? (((/* implicit */int) (unsigned short)16286)) : (((/* implicit */int) arr_113 [i_17 - 1] [(short)4] [i_31] [i_34] [i_38])))) >> (((((/* implicit */int) var_5)) - (4231)))));
                    arr_125 [i_38] [4U] = ((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-6459477328287853337LL)))), (min((((/* implicit */unsigned long long int) arr_93 [i_17] [i_31] [i_38] [i_38] [i_17] [i_34])), (arr_9 [i_17 + 2] [i_34] [13]))))));
                }
                for (short i_39 = 4; i_39 < 9; i_39 += 2) 
                {
                    var_80 = ((/* implicit */short) ((_Bool) var_13));
                    var_81 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) arr_62 [7ULL] [i_31] [i_31 + 2] [i_34] [(unsigned char)2])), (((int) var_16))))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_40 = 1; i_40 < 9; i_40 += 1) 
                {
                    var_82 = ((/* implicit */long long int) min((((/* implicit */short) ((min((((/* implicit */unsigned int) arr_60 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_31 + 1])), (arr_56 [i_17]))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_31 [i_17 + 2] [i_34] [i_40 - 1])))))))), (max((((/* implicit */short) ((_Bool) (_Bool)1))), (arr_46 [i_17] [i_17])))));
                    arr_131 [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                    var_83 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                }
            }
        }
    }
}
