/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50652
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
    var_19 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(max((var_14), (var_11)))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 = ((/* implicit */int) var_3);
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_21 |= ((/* implicit */unsigned int) var_7);
                arr_7 [i_0] [i_1] [i_2 + 2] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [9])) < (((/* implicit */int) var_7)))));
                /* LoopSeq 4 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_22 *= ((/* implicit */unsigned int) var_7);
                    arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5492)) ? (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_2 + 1]))))) ? (((/* implicit */int) arr_8 [i_1] [i_2 + 2] [i_2 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_2 + 1] [i_2 - 1]))));
                    arr_11 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(-8225647502668148354LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_2 - 1] [1])))))) ? (((unsigned long long int) arr_9 [i_0] [i_1] [i_1] [(unsigned short)10] [i_2 + 2] [i_3])) : (((/* implicit */unsigned long long int) 8225647502668148353LL))));
                    arr_12 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) & (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1] [i_2 + 2] [i_2 + 1]) : (((unsigned int) arr_1 [i_1] [i_2]))))));
                    arr_13 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)5488)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) min(((short)5466), ((short)-10)))))), (((/* implicit */int) (short)-5478))));
                }
                for (signed char i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_6 [i_0] [i_1]))));
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((((/* implicit */int) var_15)) * (((/* implicit */int) var_10)))) : (((/* implicit */int) (short)-32753))))));
                    var_25 = ((/* implicit */short) var_2);
                    var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_6))));
                }
                for (signed char i_5 = 1; i_5 < 9; i_5 += 2) /* same iter space */
                {
                    arr_20 [i_0] [i_1] = ((((/* implicit */_Bool) ((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5]))) : (((((((/* implicit */_Bool) var_10)) ? (arr_19 [i_0] [i_0] [i_2] [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) (+(8225647502668148337LL)))))));
                    arr_21 [i_1] = ((/* implicit */short) min(((~(((/* implicit */int) arr_15 [i_5] [i_5 + 1] [i_1] [i_5 + 1] [i_5 + 2] [i_1])))), ((~(((((/* implicit */int) var_9)) / (((/* implicit */int) arr_6 [i_0] [i_5]))))))));
                }
                for (signed char i_6 = 1; i_6 < 9; i_6 += 2) /* same iter space */
                {
                    var_27 &= ((/* implicit */signed char) (((~(((/* implicit */int) arr_14 [i_2 - 1] [i_1])))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35097)))))));
                    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5467))) + (max((4294967279U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1523081322U)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) (short)-5489))))))))))));
                }
            }
            arr_24 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) + (((/* implicit */int) (unsigned char)222)))))))));
        }
        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 4; i_8 < 7; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        arr_33 [i_0] [i_7] [i_8] [i_8] [1ULL] = ((/* implicit */unsigned short) (_Bool)0);
                        var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((max(((_Bool)1), (var_7))), ((_Bool)0))))));
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (+(var_5)))), (max((8225647502668148354LL), (((/* implicit */long long int) var_5))))))) ? (max((8225647502668148364LL), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) var_5))));
                    }
                } 
            } 
            arr_34 [i_0] = ((/* implicit */_Bool) ((var_2) ? ((+(((arr_8 [i_7] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_0))))) : (((/* implicit */unsigned long long int) (~(arr_3 [i_0] [i_0] [i_0]))))));
            arr_35 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0] [i_7])) ? ((~(-8225647502668148380LL))) : (((/* implicit */long long int) (-(var_11))))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) /* same iter space */
    {
        arr_39 [i_10] [i_10] = ((/* implicit */short) max((((((/* implicit */_Bool) var_17)) ? (arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) var_13)))), ((+(arr_9 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (signed char i_13 = 1; i_13 < 7; i_13 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_52 [i_14] [i_13] [i_13] [i_13] [i_13] [i_13 + 2] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_11] [i_13 + 2] [i_13 + 2]))) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_50 [i_10] [(short)0] [(short)0] [i_14] [i_14]))))), (((((/* implicit */_Bool) arr_23 [i_10] [i_11] [i_12] [i_13] [i_14])) ? (2771885961U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_12])))))))));
                            var_31 -= ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))))), (var_15)));
                            arr_53 [i_11] [i_11] [i_14] [i_13 - 1] [6ULL] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_7)), (12410984486924878879ULL)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                        {
                            var_32 = (-(((/* implicit */int) (unsigned char)2)));
                            var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5808))) != (arr_25 [i_12] [i_13 + 1] [i_13 - 1])));
                        }
                        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), (min((((/* implicit */int) (!(((6879538939194948529ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))), ((-(((var_13) + (((/* implicit */int) var_15))))))))));
                            arr_59 [i_16] [(_Bool)1] [i_16] [i_13] [i_16] = min((((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_14 [i_13 - 1] [i_16]))))), (((((/* implicit */int) arr_14 [i_13 + 3] [i_13])) ^ (((/* implicit */int) arr_14 [i_13 + 4] [i_13 + 4])))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_35 += ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_17] [i_12] [4U])) ? (arr_27 [i_11] [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (((int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (short)10997)))))));
                            var_36 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_14) & (((/* implicit */int) var_2))))) ? (12410984486924878879ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(short)4] [i_11] [(short)4] [(short)4])))))));
                            var_37 ^= ((/* implicit */signed char) min((((/* implicit */unsigned int) var_12)), (max((((/* implicit */unsigned int) 2147483647)), (0U)))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 1; i_18 < 10; i_18 += 3) 
                        {
                            var_38 = ((/* implicit */_Bool) var_9);
                            arr_67 [5U] [i_18] [i_10] = ((/* implicit */signed char) arr_36 [i_10] [i_10]);
                            var_39 |= ((/* implicit */short) var_12);
                            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)65534)))))));
                        }
                        /* vectorizable */
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            arr_70 [i_19] = ((/* implicit */unsigned long long int) arr_14 [i_13 + 4] [i_13 + 4]);
                            var_41 = ((/* implicit */unsigned char) arr_3 [i_13] [i_13 - 1] [i_13]);
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                arr_74 [i_10] [i_11] [i_20] = ((/* implicit */unsigned short) var_5);
                arr_75 [i_20] [i_11] = ((/* implicit */_Bool) max((max((((arr_28 [i_10] [i_10] [i_11] [i_20]) ? (arr_47 [(signed char)1] [i_11] [i_11] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) var_2)))), (11567205134514603081ULL)));
                /* LoopSeq 2 */
                for (unsigned short i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    arr_80 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_21] [5ULL] [i_11] [i_10]))));
                    var_42 = ((/* implicit */unsigned int) var_17);
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_43 *= ((/* implicit */unsigned int) min((max((arr_72 [i_10]), (((/* implicit */unsigned long long int) var_9)))), (max((((((/* implicit */_Bool) (short)-31060)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_10] [(unsigned char)0] [i_20] [i_10] [i_22]))) : (arr_60 [i_10] [i_10] [i_11] [i_11] [i_22]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_14) : (((/* implicit */int) var_1)))))))));
                        var_44 *= ((arr_63 [i_10] [i_11] [i_11] [i_21] [i_22]) < (((/* implicit */int) ((((/* implicit */unsigned long long int) -1448592792)) != (var_17)))));
                        arr_83 [i_10] [i_11] [i_20] [i_21] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(arr_56 [i_10] [i_11] [i_20])))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (var_5)))));
                    }
                }
                for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_45 = ((/* implicit */unsigned short) max((((arr_27 [i_23] [5U]) ^ (arr_27 [i_11] [i_10]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_10] [i_11])))))));
                    var_46 ^= ((/* implicit */_Bool) (~(((/* implicit */int) max((((unsigned short) arr_49 [(unsigned char)0] [(unsigned char)0] [i_20])), (((/* implicit */unsigned short) ((((/* implicit */int) var_16)) < (((/* implicit */int) (short)-13137))))))))));
                    var_47 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (1045454491) : (((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */int) (unsigned char)33)))))));
                }
                var_48 = ((/* implicit */_Bool) var_0);
                arr_86 [i_20] = ((/* implicit */unsigned char) var_14);
            }
        }
    }
    /* LoopSeq 2 */
    for (short i_24 = 0; i_24 < 23; i_24 += 1) 
    {
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 23; i_25 += 4) 
        {
            for (unsigned short i_26 = 0; i_26 < 23; i_26 += 2) 
            {
                {
                    var_49 += min((((/* implicit */unsigned int) var_4)), (arr_94 [i_26] [i_25] [i_24] [i_26]));
                    arr_95 [i_24] [i_26] = ((/* implicit */unsigned short) (short)-7125);
                }
            } 
        } 
        var_50 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (~((~((~(((/* implicit */int) arr_87 [4U] [4U])))))))))));
        var_52 ^= ((/* implicit */unsigned short) (-((-((~(((/* implicit */int) (short)-1))))))));
    }
    /* vectorizable */
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) /* same iter space */
        {
            var_53 -= ((/* implicit */short) 0U);
            var_54 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_97 [i_28 + 1] [i_28 + 1]))) % (var_0));
        }
        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) /* same iter space */
        {
            arr_103 [i_29] [i_29] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) ? (arr_101 [i_29 + 1]) : (((((/* implicit */_Bool) -1738338090)) ? (((/* implicit */int) var_16)) : (var_12)))));
            var_55 = ((/* implicit */unsigned short) min((var_55), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (var_17) : (((/* implicit */unsigned long long int) arr_94 [i_29 + 1] [i_29 + 1] [i_29 + 1] [(unsigned short)10])))))));
        }
        for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) /* same iter space */
        {
            var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)28447))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_88 [i_27] [i_30]))))) : (18446744073709551593ULL)));
            /* LoopSeq 1 */
            for (unsigned int i_31 = 2; i_31 < 20; i_31 += 4) 
            {
                var_57 = ((/* implicit */short) ((long long int) arr_100 [i_31 + 1]));
                /* LoopNest 2 */
                for (unsigned short i_32 = 2; i_32 < 20; i_32 += 1) 
                {
                    for (signed char i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        {
                            arr_112 [i_27] [i_27] [i_27] [17U] [(unsigned short)21] [3ULL] = ((/* implicit */unsigned int) ((var_2) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_94 [(unsigned char)2] [i_30] [i_32] [i_31])) ? (((/* implicit */int) (unsigned short)28447)) : (((/* implicit */int) var_3))))));
                            var_58 += ((/* implicit */unsigned long long int) ((arr_100 [i_32 + 1]) ? (((/* implicit */int) arr_100 [i_32 - 1])) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
        }
        var_59 = ((/* implicit */unsigned long long int) (~(((arr_97 [i_27] [i_27]) ? (arr_96 [i_27]) : (((/* implicit */int) var_4))))));
        arr_113 [i_27] [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) var_18)) + (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_34 = 0; i_34 < 23; i_34 += 2) 
        {
            for (signed char i_35 = 0; i_35 < 23; i_35 += 4) 
            {
                {
                    arr_118 [i_27] [i_34] = ((/* implicit */signed char) (unsigned short)11910);
                    arr_119 [i_27] [i_27] [i_35] = ((/* implicit */short) (-(arr_92 [i_34] [i_35])));
                }
            } 
        } 
        arr_120 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-26604)) : ((~(((/* implicit */int) var_3))))));
    }
    /* LoopNest 2 */
    for (signed char i_36 = 0; i_36 < 25; i_36 += 4) 
    {
        for (unsigned int i_37 = 0; i_37 < 25; i_37 += 2) 
        {
            {
                arr_125 [i_36] [i_37] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) ^ ((+(((/* implicit */int) arr_121 [i_37])))));
                arr_126 [i_36] [i_37] = ((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) min(((short)-26604), (((/* implicit */short) var_16))))))));
            }
        } 
    } 
}
