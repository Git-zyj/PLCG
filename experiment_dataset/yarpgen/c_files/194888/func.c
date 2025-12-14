/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194888
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 558446353793941504ULL)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            arr_5 [i_1] &= ((/* implicit */short) ((((var_14) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2)))) >= (((/* implicit */int) ((((/* implicit */int) (short)4095)) < (((/* implicit */int) var_7)))))));
            arr_6 [i_0] [8U] [i_1 + 1] = ((/* implicit */unsigned short) ((arr_0 [i_1 - 1] [i_1 + 1]) == (arr_0 [i_1 - 2] [i_1])));
        }
        var_18 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((4U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))));
        arr_7 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max(((short)4095), (((/* implicit */short) var_14)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned char) (signed char)-55);
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_7))))))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_2 - 3])) ? (((/* implicit */int) arr_13 [i_2 + 1] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3968)) ? (17888297719915610111ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? ((~(((/* implicit */int) (signed char)54)))) : ((-(((/* implicit */int) var_14))))))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((arr_14 [i_2 + 1]) ? (((/* implicit */int) arr_3 [i_2 - 2] [i_2] [i_2 - 1])) : (((/* implicit */int) arr_1 [i_2 - 2]))))) : (27U))))));
                        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 558446353793941504ULL))) ? (min((((((/* implicit */_Bool) arr_0 [i_3] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-4117)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (arr_9 [i_2 - 3] [i_3]))))) : (min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-3968)) : (((/* implicit */int) var_11))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) max((arr_17 [i_5]), (arr_17 [i_5])))) >= (var_15)))) % (((((/* implicit */_Bool) var_15)) ? ((-(((/* implicit */int) (unsigned char)13)))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) (unsigned short)3)))))))))));
        var_24 = ((/* implicit */unsigned int) var_15);
        var_25 = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) (signed char)106)) ? (558446353793941504ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) 17888297719915610104ULL)) ? (558446353793941505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
            {
                {
                    arr_23 [i_5 + 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_22 [i_5 + 2] [i_6 - 1] [i_7]))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_9 = 1; i_9 < 21; i_9 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-107)), (15)))) ? (var_16) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)50)))))) + (2147483647))) << (((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)106))))) & (arr_15 [i_8]))) - (18011703397299838228ULL))))))));
                            var_27 += ((/* implicit */unsigned int) (unsigned char)50);
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_25 [(unsigned short)18] [(short)4])), ((-(max((((/* implicit */unsigned int) arr_21 [(_Bool)1])), (var_3))))))))));
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((9867516373718194339ULL) <= (((/* implicit */unsigned long long int) (-(arr_26 [i_6])))))))));
                        }
                        for (int i_10 = 1; i_10 < 21; i_10 += 1) /* same iter space */
                        {
                            arr_30 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] = ((/* implicit */long long int) arr_25 [i_7 + 4] [i_6]);
                            arr_31 [i_5 + 1] [i_5 + 1] [8U] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) 2432366082U)));
                        }
                        /* LoopSeq 2 */
                        for (int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            var_30 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (arr_21 [i_6])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1862601201U)) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_6] [i_7])) : (((/* implicit */int) var_9))))) : (max((var_13), (((/* implicit */unsigned int) var_9))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_16 [i_8])))), (arr_20 [i_5 + 3] [i_6 - 1] [i_6 - 1])))) : (((/* implicit */int) (unsigned char)66))));
                            var_31 = ((/* implicit */unsigned char) ((var_14) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 + 2] [i_6 - 1] [i_6 - 1]))) : (var_5))) : (arr_32 [i_5])));
                            var_32 = ((/* implicit */long long int) var_13);
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) ((signed char) (unsigned char)39))) : (((/* implicit */int) arr_20 [i_5] [i_7] [i_8]))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 21; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned int) (signed char)0);
                            var_35 = ((/* implicit */long long int) (-(4294967295U)));
                            arr_37 [i_6] [i_8] = ((/* implicit */unsigned char) arr_29 [i_5] [i_6] [i_6]);
                            arr_38 [i_6] [i_6] [i_6] [i_6] [i_6] = min((((/* implicit */int) arr_18 [(_Bool)1] [i_6] [i_8])), (((((/* implicit */_Bool) arr_35 [i_6] [i_6])) ? (((/* implicit */int) arr_19 [i_5 + 1] [i_5 + 1] [i_5])) : (((/* implicit */int) arr_19 [i_5 + 3] [i_12 - 2] [i_12 + 1])))));
                            var_36 = ((/* implicit */unsigned short) var_10);
                        }
                    }
                    var_37 = ((/* implicit */_Bool) min((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_6))))), (((((/* implicit */_Bool) 4740175109326575896LL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)61560)))) : (((/* implicit */int) ((short) (unsigned char)151)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_13 = 3; i_13 < 14; i_13 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_14 = 3; i_14 < 14; i_14 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */signed char) (-(arr_26 [i_14])));
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_16 = 4; i_16 < 13; i_16 += 4) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        {
                            var_39 *= ((/* implicit */signed char) var_1);
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) (~(var_3))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    arr_56 [i_13] [i_14] [i_14] [i_15 + 3] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) (unsigned char)47))))) ? (((/* implicit */unsigned int) arr_0 [i_13 - 3] [i_18])) : ((~(var_13)))));
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_3 [4] [i_14 - 3] [i_18])))))))));
                    /* LoopSeq 2 */
                    for (long long int i_19 = 0; i_19 < 15; i_19 += 4) /* same iter space */
                    {
                        arr_60 [i_14] [i_14] [i_15] [i_15] [i_18] [i_15] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [(unsigned char)6] [(unsigned char)6] [i_19])) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) (short)-27291))))));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_34 [i_13 + 1] [i_19] [i_13 + 1] [i_13] [i_13] [i_13 + 1] [4U])) : (((/* implicit */int) arr_34 [i_13] [i_19] [i_13] [i_13] [i_13] [i_13 - 2] [i_13])))))));
                    }
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 4) /* same iter space */
                    {
                        var_43 ^= ((/* implicit */unsigned char) arr_63 [i_20] [i_20]);
                        var_44 *= ((/* implicit */_Bool) (-(var_15)));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))))) ? (((arr_29 [i_14] [i_20] [i_18]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13 + 1] [i_14] [i_15] [i_18] [i_20]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_14] [6LL]))))))));
                    }
                }
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    var_46 -= ((/* implicit */_Bool) arr_41 [i_15 - 2]);
                    var_47 = ((/* implicit */unsigned long long int) arr_0 [i_13 + 1] [i_14 - 1]);
                    var_48 = ((/* implicit */_Bool) var_13);
                }
                for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    var_49 -= ((/* implicit */_Bool) arr_36 [(signed char)2] [18U] [i_15] [i_22]);
                    var_50 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_8 [i_13] [i_15 - 1] [i_22]))))));
                }
                arr_70 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
            }
            for (int i_23 = 0; i_23 < 15; i_23 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_24 = 1; i_24 < 14; i_24 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_25 = 3; i_25 < 14; i_25 += 3) 
                    {
                        arr_78 [i_13] [i_14] [i_23] [i_24] [i_14] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * ((~(arr_64 [i_14 - 3] [(signed char)13])))));
                        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) var_4))));
                        var_52 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        arr_79 [i_13] [i_14 - 3] [i_14 - 3] [i_24] [i_14] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5))) + (((/* implicit */unsigned int) arr_9 [i_13 - 2] [i_24 - 1]))));
                    }
                    arr_80 [i_13] [i_14 + 1] [i_23] [i_14] = var_10;
                    var_53 = arr_57 [i_13] [i_14] [i_14] [i_14] [i_14] [i_23] [i_24 - 1];
                    arr_81 [i_13] [i_14] [i_24] = ((/* implicit */unsigned short) (unsigned char)217);
                }
                for (unsigned int i_26 = 1; i_26 < 12; i_26 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 1; i_27 < 13; i_27 += 3) 
                    {
                        arr_88 [i_13 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] = ((/* implicit */int) arr_43 [i_13 - 3] [i_14 - 3] [i_26 + 1]);
                        var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) arr_17 [i_14 - 1]))));
                        arr_89 [i_13 + 1] [i_14] [i_23] [(signed char)10] [i_27] &= ((/* implicit */long long int) var_6);
                    }
                    for (unsigned int i_28 = 4; i_28 < 13; i_28 += 1) 
                    {
                        var_55 = ((/* implicit */long long int) ((var_1) ? ((-(var_16))) : (((/* implicit */int) var_11))));
                        arr_92 [i_13] [i_14] [i_14] [i_14] [i_13] [i_14] [i_28] = ((/* implicit */unsigned short) ((long long int) var_16));
                        arr_93 [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3516835226U))));
                        var_56 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (short)0))));
                        arr_94 [i_13] [i_14] [i_23] [i_14] [i_28 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */unsigned int) 1917427323)) : (940349716U)));
                    }
                    var_57 *= ((/* implicit */unsigned short) (-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_1 [i_23]))))));
                }
                var_58 &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_13 - 2] [i_13 + 1] [i_13 - 2] [i_14 - 1]))));
                arr_95 [i_14] [i_14 - 2] [i_14 - 2] [i_23] = ((/* implicit */short) arr_29 [i_13 - 3] [i_14] [i_23]);
                arr_96 [(signed char)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_73 [0])) : (arr_9 [i_14] [i_23])))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 527410273U)) ? (((/* implicit */int) var_1)) : (-1917427323)))));
            }
        }
        for (unsigned int i_29 = 3; i_29 < 14; i_29 += 2) /* same iter space */
        {
            var_59 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_39 [i_29])))));
            var_60 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_77 [i_13 + 1] [i_29] [i_29 - 2] [i_29 - 3] [i_29])))));
            arr_100 [i_29] = ((/* implicit */unsigned int) (-(arr_58 [6ULL] [i_13 - 1] [i_29 + 1] [i_29] [i_29] [i_29 - 3] [i_29])));
        }
        var_61 = ((/* implicit */int) ((((/* implicit */_Bool) arr_69 [i_13] [i_13 - 3] [i_13 + 1] [i_13])) && (((/* implicit */_Bool) arr_25 [i_13 - 1] [8LL]))));
    }
}
