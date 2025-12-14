/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31797
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) (~((((_Bool)0) ? (arr_5 [i_0] [(short)19] [i_2]) : (arr_7 [i_2 - 1])))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_12 [i_0] [i_1] [12LL] [i_3]))));
                            var_16 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 7185500594273060186LL)) ? (var_5) : (arr_5 [i_4] [(signed char)17] [i_1]))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)8)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */_Bool) arr_4 [i_0]);
                        }
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_9 [i_2 + 3] [i_2 - 1] [i_2 + 2] [i_2 + 1]))));
                            arr_16 [i_1] [i_5] [i_1] [i_1] [i_5] &= ((/* implicit */int) (~(arr_5 [i_2 + 3] [i_2 + 1] [i_3 - 3])));
                        }
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                        {
                            arr_19 [i_3] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                            arr_20 [i_6] [i_3 + 2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_13 [i_2] [i_2 - 1] [2] [i_0] [i_2 - 1] [i_3 - 3] [i_3 - 2]);
                        }
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_2] [9LL] [i_7] = ((/* implicit */short) ((long long int) arr_5 [i_2 + 2] [i_0] [i_0]));
                            var_19 &= ((/* implicit */signed char) (((!(var_3))) ? (((/* implicit */unsigned int) ((var_3) ? (63) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_0] [i_2] [i_0]))))) : (var_7)));
                        }
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0] [12LL] [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 1) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_21 &= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_9])) ? (arr_25 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned int) (short)11718)) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))), (((min((arr_7 [i_8]), (((/* implicit */long long int) var_2)))) - (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [(signed char)2] [i_9])))))));
                /* LoopSeq 3 */
                for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    arr_33 [i_8] [14LL] [10U] [i_9] = ((/* implicit */unsigned int) ((min((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]))) ? (((/* implicit */int) (!(arr_17 [i_8] [i_8] [i_10] [i_10] [i_9])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_10])))))));
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        for (signed char i_12 = 3; i_12 < 15; i_12 += 1) 
                        {
                            {
                                arr_40 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) (short)-11742)), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_11 [i_8] [i_9] [i_10] [i_11] [i_10])))))));
                                var_22 = ((/* implicit */short) arr_6 [i_8] [i_9] [i_12 - 3]);
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((4134715925U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-11718))))))));
                            }
                        } 
                    } 
                    var_24 = ((arr_23 [(short)16] [i_8]) * ((~(((/* implicit */int) min((arr_9 [i_8] [i_8] [i_10] [i_9]), (arr_22 [i_10] [i_9] [i_9] [i_8] [i_8])))))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-11744))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-18926)))), ((-(((/* implicit */int) (_Bool)1))))))) : (var_10)));
                    var_26 = ((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_10]);
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_43 [i_8] [i_8] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_11 [4U] [4U] [i_13] [i_13] [4U])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))));
                    arr_44 [i_8] = ((/* implicit */unsigned int) (short)-11719);
                    arr_45 [i_8] [i_8] = ((/* implicit */short) (-((-(arr_29 [i_8] [i_9] [i_9])))));
                    arr_46 [(short)0] [i_8] [i_8] [(short)0] = arr_26 [i_8] [i_8];
                }
                /* vectorizable */
                for (unsigned int i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_14 + 1] [i_14 - 2] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_14] [i_14 + 2] [i_14 + 3] [i_15 + 2]))) : (arr_41 [i_14 + 1] [i_14 + 2] [i_14 + 2]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 1; i_16 < 15; i_16 += 3) /* same iter space */
                        {
                            arr_55 [i_8] [i_8] [i_14 - 2] [i_15] [i_16 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_14 + 3] [i_9] [i_8])) ? (arr_5 [i_9] [i_15 + 2] [i_9]) : (arr_5 [i_15 - 1] [i_9] [i_9])));
                            var_28 += ((short) (short)-1);
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((long long int) arr_34 [i_14 - 2] [i_14] [i_15] [i_15 + 2])))));
                            arr_56 [i_8] [i_9] [(_Bool)0] [i_16] [i_8] [(_Bool)0] = ((/* implicit */signed char) var_13);
                        }
                        for (unsigned int i_17 = 1; i_17 < 15; i_17 += 3) /* same iter space */
                        {
                            arr_59 [i_9] [6U] [i_8] [i_15 + 1] [6U] [i_8] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_14 - 2]))));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (~((~(((/* implicit */int) arr_28 [i_9])))))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_31 = ((/* implicit */long long int) ((int) arr_36 [i_14] [i_15 + 1] [i_14 + 2] [i_15]));
                            var_32 = ((/* implicit */short) max((var_32), (var_2)));
                        }
                        for (signed char i_19 = 0; i_19 < 16; i_19 += 3) 
                        {
                            var_33 = ((/* implicit */short) ((((_Bool) arr_57 [i_8] [i_9])) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) 412624829)) ? (((/* implicit */int) (_Bool)1)) : (-404246202)))));
                            arr_65 [i_8] [i_9] [i_14 + 1] [i_8] [i_19] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) -9223372036854775792LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775769LL))));
                            var_34 = ((/* implicit */long long int) (((-(0U))) - (((/* implicit */unsigned int) ((2147483647) / (((/* implicit */int) (short)-30037)))))));
                            var_35 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_14 + 1] [i_14] [i_15 - 1])) ? (((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) (short)9655)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((arr_50 [i_19] [10LL] [i_14] [i_14] [i_9] [i_8]) > (((/* implicit */long long int) arr_23 [i_14] [i_8])))))));
                            var_36 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-11703)) ? (-9223372036854775802LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                        var_37 = ((int) arr_64 [i_8] [i_8] [i_8]);
                    }
                    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        var_38 = ((/* implicit */long long int) (+(((/* implicit */int) (short)11727))));
                        /* LoopSeq 3 */
                        for (signed char i_21 = 0; i_21 < 16; i_21 += 4) /* same iter space */
                        {
                            var_39 = ((arr_17 [i_14] [i_14 - 2] [i_14 - 1] [i_14 + 3] [i_14 + 2]) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)30036))))) : ((~(-7981837212828961551LL))));
                            var_40 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_35 [i_14])) / (arr_63 [i_21] [i_9] [i_9] [i_21] [i_20] [i_21]))));
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) var_9))));
                        }
                        for (signed char i_22 = 0; i_22 < 16; i_22 += 4) /* same iter space */
                        {
                            var_42 ^= ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_14 + 3] [i_14 + 3]))));
                            arr_73 [i_8] = ((/* implicit */short) (+(((/* implicit */int) arr_35 [i_8]))));
                        }
                        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                        {
                            arr_77 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(3607744183U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(var_6)))));
                            var_43 = ((/* implicit */short) (((~(arr_25 [i_23]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9223372036854775788LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-30018)))))));
                            var_44 = ((/* implicit */_Bool) ((arr_34 [i_8] [i_8] [i_14 + 2] [i_23 + 1]) ? (((/* implicit */int) arr_34 [i_8] [i_8] [i_14 + 1] [i_23 + 1])) : (((/* implicit */int) arr_34 [i_8] [i_8] [i_14 + 3] [i_23 + 1]))));
                        }
                    }
                    var_45 = ((/* implicit */short) arr_57 [i_8] [i_8]);
                    var_46 = ((/* implicit */unsigned int) ((arr_3 [i_14 - 2] [i_14 + 3]) ? (((/* implicit */int) (_Bool)1)) : (((int) arr_10 [i_14 + 3] [i_8] [i_8]))));
                }
                var_47 &= ((short) max((var_2), (((/* implicit */short) arr_47 [i_8]))));
            }
        } 
    } 
    var_48 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) (short)30017)))))) != (((unsigned int) var_5))));
    var_49 = ((/* implicit */unsigned int) (~(max((min((var_10), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) min((4282200830U), (((/* implicit */unsigned int) (short)-30050)))))))));
}
