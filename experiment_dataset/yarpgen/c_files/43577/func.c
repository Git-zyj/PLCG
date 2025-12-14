/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43577
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)79)) << (((18446744073709551615ULL) - (18446744073709551598ULL)))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_1)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 4; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_3]))))), (((var_4) * (arr_12 [i_0] [i_1] [8U] [i_3] [i_3])))))) / ((+(arr_10 [i_0 - 1] [(signed char)4] [i_2] [i_3 - 1] [i_4 - 1] [i_3])))));
                                var_20 ^= ((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1]), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [(signed char)14] [i_4 - 2] [19ULL]))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned int) var_1);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6]) >= (((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 2] [i_0 + 2]))));
                        arr_19 [(signed char)17] [7U] [i_5] [i_6] = ((((/* implicit */_Bool) arr_18 [(signed char)7] [i_0 + 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0 + 1] [(signed char)19]))) : (var_4));
                        arr_20 [(signed char)15] [i_5] [(signed char)15] = ((/* implicit */unsigned int) ((unsigned long long int) arr_16 [i_0 + 1]));
                        arr_21 [i_0] [14ULL] [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (438383984) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_5] [i_6] [i_0] [i_1]))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_22 ^= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_8)) ? (arr_17 [1ULL] [i_1] [i_5] [i_7]) : (var_15))));
                        arr_26 [(signed char)10] = ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
                        var_23 = ((/* implicit */int) var_5);
                        var_24 ^= ((/* implicit */signed char) arr_3 [i_1]);
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_29 [i_8] [i_0] [i_0] [(signed char)6] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) ((unsigned int) (signed char)-8)));
                        arr_30 [i_0] = ((/* implicit */unsigned int) (((~(18446744073709551615ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_24 [i_0 - 1] [i_1] [i_5] [i_8] [i_5] [i_5]))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-1))))) : (var_8)));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1070834728U))))));
                        arr_34 [i_0 + 1] = ((/* implicit */signed char) (+(((var_11) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 1; i_10 < 16; i_10 += 4) 
                        {
                            arr_38 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = var_10;
                            arr_39 [i_9] [i_9] [i_5] [i_9] [i_10] [7] = ((((/* implicit */_Bool) (+(arr_22 [(signed char)5] [11U] [(signed char)5] [i_0 - 1])))) ? (((/* implicit */int) ((var_14) < (var_15)))) : (((((/* implicit */_Bool) 574207647)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-63)))));
                        }
                        for (signed char i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 + 2] [i_9] [i_11 - 2] [i_11 - 2] [i_11 - 1])) ? (arr_10 [i_0 - 1] [i_5] [i_9] [i_11 - 2] [i_11 - 1] [i_11 + 1]) : (arr_10 [i_0 + 1] [i_9] [i_11] [i_11 - 1] [i_11 - 2] [i_11 - 2])));
                            arr_44 [i_11] [i_9] [i_5] [i_0] [i_0] = ((/* implicit */signed char) (+(((var_5) / (((/* implicit */unsigned int) var_14))))));
                            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */int) arr_11 [i_9] [i_1] [(signed char)10] [i_9] [i_11 - 2])) - (((/* implicit */int) (signed char)-37))))));
                        }
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            arr_49 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) ? (var_8) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])));
                            arr_50 [i_0 + 1] [i_1] [i_1] [i_9] [i_12] [i_12] = ((/* implicit */unsigned long long int) var_16);
                            arr_51 [i_0] [i_0] [i_1] [(signed char)6] [i_9] [(signed char)6] = arr_32 [(signed char)16] [7] [19U];
                        }
                        var_29 = ((/* implicit */signed char) (+((~(1430020057U)))));
                    }
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_14 = 3; i_14 < 19; i_14 += 4) 
                        {
                            arr_56 [i_14] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_1] [i_5] [i_13] [i_14])))))));
                            arr_57 [16U] [i_1] [i_5] [i_13] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) var_9))));
                        }
                        for (signed char i_15 = 1; i_15 < 18; i_15 += 4) 
                        {
                            arr_61 [7U] [7U] [i_5] = var_0;
                            var_30 = ((/* implicit */int) arr_45 [i_0] [i_0] [i_5] [i_5] [3U] [(signed char)7] [i_5]);
                            var_31 ^= (signed char)2;
                        }
                        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            arr_64 [i_13] [i_13] [(signed char)5] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((arr_3 [i_0 - 1]) >= (arr_3 [i_0 - 1])));
                            arr_65 [i_5] = ((/* implicit */signed char) arr_36 [i_0 + 1]);
                            arr_66 [i_16] [18U] [i_5] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_16) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_16] [i_1] [i_1]))) : (var_11)))));
                            arr_67 [13] [13] [i_5] [i_13] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_59 [(signed char)6] [i_0 + 1]))));
                        }
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((unsigned long long int) arr_54 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_17 = 4; i_17 < 19; i_17 += 4) 
                {
                    /* LoopSeq 3 */
                    for (int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        arr_73 [i_17] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) arr_33 [i_0] [i_0] [5U] [i_17] [i_18])) : (var_16)))));
                        arr_74 [i_18] [i_1] [i_0] |= ((/* implicit */signed char) (~(arr_0 [i_0 + 2])));
                        var_33 = ((((unsigned int) var_12)) * (var_8));
                        var_34 = (~(((var_16) & (var_5))));
                    }
                    for (signed char i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) - (var_9)));
                        var_36 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)0)) ? (var_16) : (var_4)))));
                        arr_77 [i_19] [i_1] [i_17 - 2] [i_19] = ((/* implicit */unsigned long long int) (+(-509539691)));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        var_37 ^= ((/* implicit */signed char) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_0 + 1] [i_0 + 1] [i_17 - 1] [i_17 - 1] [i_17 - 3] [i_17])))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_42 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [i_17 - 4] [i_20] [i_0])) * (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
                        arr_80 [i_0 + 1] [7] [i_17] [i_17] [(signed char)0] = ((/* implicit */signed char) ((((/* implicit */int) ((var_9) < (((/* implicit */int) var_3))))) + (((/* implicit */int) var_17))));
                        arr_81 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) var_15)) + (arr_12 [i_20] [i_1] [i_20] [(signed char)5] [i_17])));
                        var_39 = (~(((/* implicit */int) arr_55 [i_1] [0U] [i_17] [i_1] [i_20])));
                    }
                    var_40 |= ((/* implicit */signed char) ((1314182581) < (((/* implicit */int) var_6))));
                }
                for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
                {
                    arr_84 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_69 [i_0] [i_21]))))), (max((arr_31 [i_0 - 1]), (((/* implicit */int) var_2))))));
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_69 [i_0 + 2] [10])), (var_9)))) + (((((/* implicit */_Bool) min((arr_9 [i_0 - 1] [i_1] [i_21] [i_1] [i_1] [i_0]), ((signed char)16)))) ? (((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))))))));
                }
                arr_85 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((unsigned int) var_10)))) % (((((/* implicit */_Bool) arr_72 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_24 [i_0 + 2] [i_0 - 1] [i_0 - 1] [8ULL] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_17))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_2)) : (var_9)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_1)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-38))) : (var_16))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_17)) / (((/* implicit */int) (signed char)-9)))))))));
    var_43 = min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_11)))) ^ (((447334715339544223ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))))))), (((/* implicit */unsigned long long int) ((signed char) var_10))));
    var_44 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) var_14))))), (max((((/* implicit */unsigned long long int) var_0)), (var_1)))))));
}
