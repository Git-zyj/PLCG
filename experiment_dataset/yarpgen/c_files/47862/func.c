/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47862
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
    var_19 = ((/* implicit */int) min((var_7), (((/* implicit */signed char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [12LL] [i_1] [(_Bool)1] = ((/* implicit */short) min(((signed char)-36), ((signed char)34)));
                    var_20 = ((/* implicit */unsigned int) var_4);
                    var_21 = ((/* implicit */unsigned long long int) var_4);
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_13 [(signed char)8] &= ((/* implicit */_Bool) var_3);
                        var_22 = ((/* implicit */short) max((min((((/* implicit */unsigned short) arr_0 [i_0] [i_2])), (var_9))), (((/* implicit */unsigned short) min((arr_8 [i_1] [i_2] [i_3]), (((/* implicit */short) max((((/* implicit */unsigned char) var_1)), (var_16)))))))));
                        var_23 ^= ((/* implicit */_Bool) min((((/* implicit */int) arr_6 [2] [i_1])), (((((/* implicit */int) arr_8 [0] [i_2 - 3] [i_2 + 1])) + (((/* implicit */int) (unsigned short)11))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) arr_6 [(_Bool)1] [i_2]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_17 [i_2] [i_2] [i_2]))));
                            arr_18 [12U] [12U] [i_1] [i_4] [13LL] [i_5] = arr_15 [i_2] [i_2 - 3] [i_5 + 1];
                            var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_2 - 1] [i_5 - 1])) ^ (((/* implicit */int) arr_15 [i_5 + 1] [i_4] [i_1]))));
                        }
                        /* LoopSeq 4 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) var_10);
                            var_28 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) (signed char)-58))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_4] [i_1]))) <= (((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))));
                            var_30 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_4] [i_2 - 3] [i_0] [i_0]);
                            arr_24 [i_7] [i_1] [i_1] [i_0] = ((/* implicit */short) ((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 - 2]) * (((/* implicit */int) var_0))));
                        }
                        for (short i_8 = 4; i_8 < 23; i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_2] [(unsigned char)10] [i_2] [i_8] [i_1] = ((/* implicit */unsigned int) arr_20 [i_0] [i_8] [(_Bool)1] [i_1] [(signed char)17]);
                            arr_28 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((2302822556762987221ULL) >= (((/* implicit */unsigned long long int) var_2))));
                            arr_29 [i_0] [i_1] [i_2] [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_17 [i_8] [i_4] [i_2]);
                            arr_30 [i_4] [i_4] [i_4] [16LL] &= ((/* implicit */unsigned short) var_6);
                        }
                        for (short i_9 = 4; i_9 < 23; i_9 += 1) /* same iter space */
                        {
                            arr_35 [i_0] [i_1] [i_0] [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */int) var_7);
                            var_31 = ((/* implicit */_Bool) var_2);
                        }
                        var_32 ^= ((/* implicit */unsigned long long int) var_6);
                        arr_36 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */long long int) arr_32 [i_2] [i_4] [i_2] [(unsigned char)23] [i_1]);
                    }
                    /* vectorizable */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        var_33 &= ((/* implicit */unsigned char) var_6);
                        var_34 = ((/* implicit */unsigned long long int) var_13);
                    }
                }
            } 
        } 
    } 
    var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((var_4) > (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned char) var_1))))))))), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
                {
                    arr_48 [i_11] = ((/* implicit */unsigned int) min((max((((/* implicit */int) (short)0)), (0))), (((/* implicit */int) arr_23 [i_11] [i_11] [i_12] [7ULL] [i_13 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (short i_15 = 2; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) ((((arr_25 [i_13 + 1] [i_13 + 1] [i_15 + 1]) / (arr_25 [i_13 + 1] [i_13 + 1] [i_15 - 1]))) <= (((/* implicit */int) var_16))));
                                arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) var_3);
                                var_37 = ((/* implicit */_Bool) arr_1 [i_11]);
                                arr_55 [i_15 - 2] [i_11] [i_11] [i_12] = ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_16 [i_15 + 2] [i_15] [i_15] [i_15 - 1] [i_14] [i_13 + 1])), (arr_39 [i_13 + 1])))) | (((arr_50 [i_13] [i_13] [i_13]) >> (min((arr_39 [i_11]), (((/* implicit */unsigned int) var_14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 4; i_17 < 22; i_17 += 2) 
                        {
                            {
                                var_38 = ((/* implicit */_Bool) arr_34 [i_11] [i_11] [(_Bool)1] [i_11] [i_11]);
                                arr_62 [i_11] [i_12] [i_11] [i_16] [i_17] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11] [7ULL] [7ULL] [16ULL] [i_11] [i_11]))) == (max((((/* implicit */long long int) var_5)), (arr_46 [i_11]))))))) != (max((((/* implicit */long long int) arr_14 [i_17] [i_17 + 1] [i_17 - 1] [(unsigned short)15])), (arr_60 [i_11] [i_11] [i_13 + 1] [i_16] [i_17 + 1]))));
                                var_39 = ((/* implicit */_Bool) min((var_39), (((((/* implicit */_Bool) var_3)) && (((min((11615900700416582137ULL), (((/* implicit */unsigned long long int) 2761425743U)))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_51 [i_11] [i_11] [i_17] [i_16])), (arr_38 [i_11] [i_12] [i_13] [i_11] [i_17] [i_11]))))))))));
                                var_40 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) arr_37 [i_13 + 1] [i_11] [i_16] [i_13 + 1])), (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3014490017U)) && (((/* implicit */_Bool) arr_37 [i_13 + 1] [i_11] [21] [i_13 + 1])))))));
                            }
                        } 
                    } 
                    var_41 ^= ((/* implicit */unsigned long long int) arr_23 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 1]);
                    var_42 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((var_8) || (((/* implicit */_Bool) var_2))))), (((((/* implicit */int) arr_3 [(_Bool)1] [i_13 + 1] [i_13 + 1])) >> (((((/* implicit */int) arr_3 [i_11] [i_13 + 1] [i_13])) - (45)))))));
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                {
                    var_43 &= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_11] [i_11] [i_18] [i_12] [i_18] [i_18]))) >= (arr_64 [i_11] [i_12] [i_12] [i_18])))), (min((arr_11 [i_11] [i_11] [i_11] [i_18 + 1]), (arr_11 [(unsigned char)21] [i_12] [i_18] [i_18 + 1])))));
                    arr_66 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)-109)), (2302822556762987221ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_16 [i_18] [17U] [i_12] [17U] [i_11] [i_11])))) && (arr_20 [i_11] [i_12] [i_12] [i_11] [i_18]))))));
                }
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) /* same iter space */
                {
                    var_44 = ((/* implicit */_Bool) arr_63 [i_11]);
                    var_45 = var_5;
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) /* same iter space */
                {
                    var_46 &= ((/* implicit */_Bool) ((var_2) / (min((((/* implicit */int) (signed char)47)), (2099645609)))));
                    arr_72 [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)119)), (16106628214013864214ULL))))))) - (((/* implicit */int) arr_15 [i_20 - 1] [i_20 - 1] [(signed char)11]))));
                    var_47 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_11] [i_12])) % (((/* implicit */int) var_14))));
                }
                var_48 = ((/* implicit */_Bool) max((var_48), (arr_43 [i_11] [i_11] [i_11])));
                var_49 = var_15;
                var_50 = ((/* implicit */_Bool) max((var_50), (arr_6 [i_12] [i_12])));
            }
        } 
    } 
}
