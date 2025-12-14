/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225067
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
    var_10 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_9))))) / (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 ^= ((/* implicit */long long int) ((((/* implicit */int) (short)26)) - (((/* implicit */int) (signed char)24))));
                    arr_8 [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_6 [i_0] [i_1] [i_2])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)11489))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2])) : (((((/* implicit */_Bool) (short)1)) ? (var_3) : (((/* implicit */int) var_4))))))) : (var_8)));
                    arr_9 [i_1] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13787)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_4 + 1])) + (((/* implicit */int) (_Bool)1)))));
                                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_0 [i_0]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((unsigned short) var_9));
                    arr_18 [i_0] [i_3] [i_3] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3]))) != (arr_11 [i_0] [i_0])))), (min((arr_17 [i_0] [i_0]), (((/* implicit */unsigned short) min((arr_14 [i_1] [i_1] [i_3] [i_0]), (var_9))))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                {
                    var_15 ^= ((/* implicit */signed char) var_5);
                    var_16 = ((/* implicit */_Bool) min((2251782633816064LL), (-3937238521450264566LL)));
                    var_17 ^= ((/* implicit */long long int) (~(((((/* implicit */int) arr_12 [i_0 - 2] [i_6])) ^ (((/* implicit */int) arr_12 [i_0 - 2] [i_0]))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) arr_4 [i_1]))));
                }
                for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((((/* implicit */_Bool) 4294967292U)) ? (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)15029)))))))));
                    var_20 = ((/* implicit */int) var_2);
                    var_21 = ((/* implicit */unsigned long long int) ((16861686899510801058ULL) <= (((/* implicit */unsigned long long int) 0U))));
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) 2251799679467520LL);
                        arr_27 [i_7] [i_7] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */short) 14442697163931716816ULL);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0] [i_1] [i_7] [i_9] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)1)) ? (5785656471833621574LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9809)))))));
                        arr_32 [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned short)511);
                        var_23 = ((/* implicit */short) var_7);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-15215)))))));
                    }
                }
                for (unsigned short i_10 = 4; i_10 < 17; i_10 += 4) 
                {
                    arr_37 [i_0] [i_0] = ((/* implicit */short) 7141189409931271431ULL);
                    var_25 *= ((((/* implicit */_Bool) arr_36 [i_0 - 3])) || (((/* implicit */_Bool) var_1)));
                    var_26 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_35 [i_0] [i_0 - 3])), (((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_6))))), (((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)0)) / (arr_19 [i_0] [i_1]))), (((((/* implicit */_Bool) -1385760099461464125LL)) ? (((/* implicit */int) (unsigned short)4090)) : (((/* implicit */int) var_4)))))))));
                    var_27 = ((/* implicit */short) (-(((int) arr_16 [i_10] [i_0 - 1]))));
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    var_28 *= ((/* implicit */long long int) (+(1)));
                    var_29 = (~(((/* implicit */int) arr_23 [i_0 - 2])));
                }
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                    {
                        {
                            arr_47 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_20 [i_0] [i_12] [i_13])) + (((/* implicit */int) (_Bool)0))))));
                            arr_48 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13] [i_12] [i_1] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-1)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10903)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)31))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_46 [i_0] [i_1] [i_12] [i_1] [i_0])))));
                            var_30 = ((/* implicit */short) arr_17 [i_0] [i_1]);
                            /* LoopSeq 4 */
                            for (signed char i_14 = 0; i_14 < 18; i_14 += 4) /* same iter space */
                            {
                                var_31 &= ((/* implicit */_Bool) var_3);
                                var_32 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (unsigned short)27489)), (11305554663778280176ULL)));
                                arr_52 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)185)))), (((/* implicit */int) ((unsigned short) 2251782633816044LL))))))));
                                var_33 |= ((/* implicit */unsigned long long int) ((int) ((long long int) (unsigned short)0)));
                            }
                            for (signed char i_15 = 0; i_15 < 18; i_15 += 4) /* same iter space */
                            {
                                var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((short) (_Bool)1))), (-5785656471833621549LL))))));
                                var_35 ^= ((/* implicit */int) 2773085997U);
                                arr_57 [i_0] [i_0] [i_12] [i_0] [i_15] = ((/* implicit */unsigned short) arr_38 [i_0] [i_0] [i_13] [i_15]);
                            }
                            /* vectorizable */
                            for (signed char i_16 = 0; i_16 < 18; i_16 += 4) /* same iter space */
                            {
                                arr_60 [i_0] [i_1] [i_12] [i_0] [i_16] = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_12])) / (var_0)));
                                var_36 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_0 - 2] [i_1] [i_0 + 1] [i_13])) ? (arr_42 [i_0] [i_0] [i_0 - 1] [i_0]) : (arr_42 [i_0] [i_1] [i_0 + 1] [i_13])));
                                var_37 = ((/* implicit */unsigned long long int) (+(var_3)));
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_49 [i_0 - 3] [i_13] [i_0 - 3] [i_13] [i_0 - 3] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_12]))) : (arr_46 [i_16] [i_13] [i_12] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7))))));
                            }
                            for (signed char i_17 = 0; i_17 < 18; i_17 += 4) /* same iter space */
                            {
                                var_39 = ((/* implicit */unsigned char) ((int) min((arr_42 [i_0 - 1] [i_0 - 1] [i_13] [i_17]), (arr_42 [i_0 + 1] [i_13] [i_17] [i_17]))));
                                arr_64 [i_0] = ((/* implicit */long long int) min((arr_13 [i_0] [i_0] [i_1] [i_12] [i_13] [i_17]), (((/* implicit */unsigned long long int) arr_36 [i_12]))));
                                var_40 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_1] [i_17]))))) ? (((((/* implicit */int) arr_24 [i_0 + 1] [i_1] [i_17])) | (((/* implicit */int) (unsigned short)41876)))) : (((-1758552847) | (((/* implicit */int) (_Bool)1))))))));
                            }
                            arr_65 [i_0 + 1] [i_1] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0 - 2] [i_12])))) : ((((_Bool)0) ? (((/* implicit */int) arr_17 [i_0] [i_0 - 1])) : (((/* implicit */int) (short)-27748))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_18 = 1; i_18 < 15; i_18 += 1) 
                {
                    arr_70 [i_0] [i_0] [i_18] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) / (arr_41 [i_18] [i_1] [i_0 - 2])))));
                    var_41 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_36 [i_18])))));
                }
                /* vectorizable */
                for (unsigned short i_19 = 0; i_19 < 18; i_19 += 4) 
                {
                    var_42 |= ((/* implicit */_Bool) (~(((((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_19])) | (((/* implicit */int) var_4))))));
                    var_43 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0 - 1]))));
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_4))));
                }
            }
        } 
    } 
    var_45 = ((/* implicit */_Bool) var_9);
}
