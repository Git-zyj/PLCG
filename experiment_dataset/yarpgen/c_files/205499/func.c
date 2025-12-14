/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205499
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) min((((/* implicit */short) (signed char)88)), (var_6))))))));
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) -9202138446541954300LL)) ? (((/* implicit */int) (short)-16426)) : (((/* implicit */int) (short)31744))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */int) 1581168108U);
                            arr_15 [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (11054348122971801974ULL)));
                            var_15 = (~(arr_12 [i_0 - 2] [i_0 + 1] [i_3] [i_2] [i_3] [i_4]));
                        }
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 - 1] [(_Bool)1] [i_3 - 1] [i_3])) ? (arr_12 [i_3 - 2] [i_3] [i_3] [i_3] [i_0 - 2] [i_0]) : (arr_12 [i_3 - 3] [i_3 - 2] [i_3] [i_3] [i_0 + 1] [i_0])));
                    }
                    for (signed char i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_5]))))) ? (((2274474369U) ^ (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) (~(var_0))))));
                        arr_19 [i_5] = ((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_5]);
                        arr_20 [i_5] [i_2] [i_2] [i_0] [i_5] = ((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_5] [i_1] [i_5] [i_0 - 1]);
                    }
                    var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))))));
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))) : (var_7))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            var_19 ^= ((/* implicit */signed char) (~(arr_14 [(_Bool)1] [i_0 - 2] [i_0 - 2] [i_7 + 1] [i_7] [i_7 + 3])));
                            arr_27 [i_0 + 2] [i_0] &= arr_18 [14LL] [14LL] [i_2] [i_2] [i_2];
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            arr_30 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (~(10664910163369296271ULL)));
                            arr_31 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0 + 1] [i_0 + 2] [i_0] [i_0 + 1] [i_1])) / (((/* implicit */int) (short)-3726))));
                            var_20 = ((/* implicit */unsigned long long int) ((short) arr_5 [i_0 + 1] [i_0]));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_8])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((var_0) / (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_0] [i_0]))))) : ((+((-9223372036854775807LL - 1LL))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16426))) : (18446744073709551609ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))))));
                            arr_36 [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6609303237099868555LL)) ? (var_0) : (((/* implicit */int) (short)-11962)))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (~(5910618184433042456ULL)))))))));
                        }
                        arr_37 [i_6] [i_0] = ((/* implicit */unsigned long long int) (signed char)-6);
                        arr_38 [i_0 - 1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_0])) ? (((/* implicit */long long int) var_3)) : (var_2));
                    }
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                    {
                        arr_41 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_1 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24)))));
                        arr_42 [i_0 - 1] [i_2] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (+(arr_25 [i_0] [i_0 - 1] [i_2] [i_10] [i_10] [i_10])));
                        arr_43 [i_1] = ((/* implicit */signed char) 35747322042253312ULL);
                    }
                    arr_44 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_9) >> (((var_7) - (12161686027112310793ULL)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-85))));
                }
            } 
        } 
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 6204584488761704602LL)) ? (arr_32 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 1]) : (arr_32 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0])));
    }
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        var_25 = (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) ((_Bool) (~(var_3))))) - (1))));
        var_26 -= ((/* implicit */signed char) min((((/* implicit */int) (unsigned char)231)), (arr_9 [i_11] [i_11] [(short)5])));
        arr_49 [i_11] = ((((((/* implicit */_Bool) (-(2812507776U)))) ? (((/* implicit */long long int) ((var_3) + (-51110735)))) : (((((/* implicit */_Bool) var_9)) ? (-6609303237099868541LL) : (arr_1 [i_11]))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)36))))))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        arr_54 [i_12] = ((/* implicit */unsigned char) (-(arr_51 [i_12] [(short)15])));
        arr_55 [i_12] = ((/* implicit */int) ((signed char) var_9));
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            arr_60 [i_12] [9U] = ((/* implicit */long long int) (signed char)-94);
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 25; i_14 += 3) 
            {
                for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) arr_64 [i_12] [i_13] [i_14] [i_15] [(unsigned short)4]))));
                            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_50 [i_12])) ? (arr_64 [i_12] [8U] [8U] [i_15] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_12] [i_16] [i_15] [(signed char)8] [i_16]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))));
                            var_29 = (~((+(arr_53 [i_12] [i_12]))));
                            arr_68 [i_12] [(short)19] [i_15] = ((/* implicit */_Bool) arr_62 [12ULL] [(signed char)15] [(signed char)15] [i_12]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_17 = 3; i_17 < 24; i_17 += 3) /* same iter space */
        {
            var_30 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_57 [i_17 - 2] [(signed char)19] [(signed char)19])) && (((/* implicit */_Bool) arr_62 [i_12] [i_12] [i_12] [(_Bool)1])))));
            /* LoopSeq 1 */
            for (short i_18 = 2; i_18 < 21; i_18 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_19 = 0; i_19 < 25; i_19 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 3) 
                    {
                        arr_77 [i_19] [i_19] [i_19] [i_19] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_62 [i_17] [16LL] [i_18] [i_18])) ? (-5858468202521728013LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) & (((((/* implicit */_Bool) var_8)) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_12] [i_12] [i_12] [i_19])))))));
                        arr_78 [i_19] [i_18] [i_19] [i_20] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_66 [i_18] [i_20] [(unsigned char)9]))))));
                        var_31 = ((/* implicit */short) ((unsigned long long int) arr_72 [i_17 - 2] [i_17 - 1]));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((int) arr_65 [i_12] [i_12] [i_18 + 2] [i_18 + 2] [i_20] [i_20])))));
                    }
                    arr_79 [i_19] [i_19] [i_19] [i_12] = ((/* implicit */int) ((short) arr_69 [i_17]));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                {
                    arr_82 [i_12] [13ULL] [i_17 - 1] [i_18 - 1] [i_21] = ((/* implicit */int) (short)-16427);
                    var_33 = ((/* implicit */short) ((unsigned long long int) arr_70 [i_17 - 3] [i_17 + 1]));
                    arr_83 [i_21] [i_17] [i_21] [i_17] = ((/* implicit */signed char) var_6);
                }
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        arr_88 [i_17] [(unsigned short)4] [i_18] [i_17] [(unsigned short)4] = ((/* implicit */long long int) var_4);
                        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_12]))) > (2313877917U))) ? (arr_81 [i_23]) : (((/* implicit */unsigned long long int) 1799999846256985290LL)))))));
                        arr_89 [i_23] [i_22] [i_18] [i_17] [i_12] [i_12] = ((((-120760269) + (2147483647))) << (((((((/* implicit */int) arr_73 [i_18 + 2] [i_18 - 1] [i_18 - 2] [i_17 - 2])) + (16933))) - (29))));
                        arr_90 [(unsigned short)8] [15] [i_18 - 2] [(unsigned short)8] [i_18 + 4] = (~(((/* implicit */int) arr_67 [i_17 + 1] [i_17 - 1] [i_18 + 1] [i_18 + 1] [i_22])));
                    }
                    arr_91 [i_12] [i_17] [16] [i_18] [(short)12] = ((/* implicit */unsigned short) arr_70 [i_18 + 2] [i_17 - 1]);
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_24 = 0; i_24 < 25; i_24 += 2) 
                {
                    var_35 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 2313877911U))))));
                    var_36 = ((/* implicit */long long int) ((short) arr_69 [i_17 + 1]));
                    /* LoopSeq 1 */
                    for (int i_25 = 1; i_25 < 24; i_25 += 3) 
                    {
                        var_37 = ((/* implicit */short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_57 [i_17 - 3] [i_17 + 1] [i_17 + 1]))));
                        arr_97 [i_25] [i_17 - 2] [i_17] [(signed char)13] [i_17] = ((/* implicit */int) (!(((/* implicit */_Bool) 18410996751667298306ULL))));
                        arr_98 [(short)0] [i_25] [(short)0] [i_25] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_24] [i_17 - 3])) ? (arr_71 [i_17 + 1] [i_17 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    }
                    arr_99 [i_12] [i_17 - 1] [i_18 + 2] [i_24] [i_24] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-46))));
                }
                for (unsigned short i_26 = 1; i_26 < 22; i_26 += 2) 
                {
                    arr_102 [i_17 - 1] [i_12] = ((/* implicit */_Bool) (short)-11649);
                    var_38 = 6609303237099868545LL;
                    var_39 ^= ((/* implicit */_Bool) var_8);
                }
                for (short i_27 = 0; i_27 < 25; i_27 += 4) 
                {
                    arr_106 [i_27] [8LL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_93 [i_17 - 2] [i_17] [i_17] [i_17 - 2]))));
                    arr_107 [12] = (signed char)(-127 - 1);
                    arr_108 [i_17] = ((((/* implicit */_Bool) arr_87 [i_27] [i_27] [i_18 - 1] [i_12] [11] [11] [11])) ? (var_0) : (((/* implicit */int) var_5)));
                }
                arr_109 [i_18 - 1] [i_12] [i_17] [i_12] = ((/* implicit */unsigned short) arr_74 [i_12]);
            }
            var_40 = ((/* implicit */int) var_9);
            arr_110 [i_12] = ((/* implicit */_Bool) 32256);
        }
        for (unsigned char i_28 = 3; i_28 < 24; i_28 += 3) /* same iter space */
        {
            arr_114 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4940982242689750854LL)) ? (-2715500373313874657LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93)))));
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) -32254)) ^ (-7267109857452964664LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_113 [i_28 + 1] [i_28 - 2])));
        }
        arr_115 [i_12] [i_12] = ((/* implicit */unsigned int) arr_73 [i_12] [i_12] [i_12] [i_12]);
    }
}
