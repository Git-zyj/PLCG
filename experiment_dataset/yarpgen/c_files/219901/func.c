/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219901
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 - 2] [i_2 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_0 [i_0])), (arr_5 [i_0 + 2] [i_1 - 2] [i_2]))), (((((/* implicit */_Bool) arr_4 [15] [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (arr_4 [i_0] [i_1] [i_1 - 1] [i_1 - 1])))))) ? (min((min((((/* implicit */unsigned long long int) (signed char)0)), (arr_2 [i_2 + 1]))), (((/* implicit */unsigned long long int) (short)-5621)))) : ((+((+(6075977217153071276ULL)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(arr_7 [i_1] [i_1] [i_4])))) ? (min((arr_4 [i_0] [i_0] [i_2] [i_4]), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_2 + 1] [i_3] [i_3])))) : (((/* implicit */long long int) 580849779)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [7LL])) ? (min((arr_1 [i_4]), (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_3] [i_4])))) : (((580849779) / (-565035074))))))));
                                var_14 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) ((arr_5 [i_0 - 2] [i_2] [i_3]) - (((/* implicit */long long int) 580849763))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (15299884378454379781ULL))), (max((((/* implicit */unsigned long long int) (signed char)-38)), (min((((/* implicit */unsigned long long int) 1125899906842560LL)), (17738156921195278813ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (short i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_5] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned long long int) (signed char)-14);
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_1 [i_2]))));
                        arr_18 [i_0] [i_5] [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2 - 1] [i_5 + 1] [i_5]))));
                        var_16 |= ((/* implicit */signed char) max((arr_14 [i_0] [i_1] [i_0] [i_2]), (((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) + (min((arr_4 [i_0] [i_1 - 1] [i_2 + 1] [i_5 + 1]), (((/* implicit */long long int) (signed char)126))))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((540128428401825303LL), (5296620093519626766LL)))) ? (min((((((/* implicit */_Bool) arr_7 [i_0] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))) : (arr_13 [i_0 - 1] [i_2] [i_5]))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_2])), (762674708)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_1] [i_2] [i_2 + 1] [i_5])) << (((((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_2 + 1] [i_0] [i_1 - 1])) - (42)))))), (((((/* implicit */long long int) 2074683096)) / (-2635261535590586645LL))))))));
                    }
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [3ULL]);
                        arr_22 [i_2] = (-(((/* implicit */int) (!(((/* implicit */_Bool) min((3529895445274517708LL), (((/* implicit */long long int) arr_1 [i_1])))))))));
                    }
                    for (int i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */int) min((((((min((arr_14 [i_0] [i_1 - 1] [i_0] [i_1]), (arr_24 [i_0] [i_1] [7LL] [i_7]))) + (9223372036854775807LL))) >> (((max((((/* implicit */unsigned long long int) (signed char)15)), (arr_20 [i_0] [i_1] [9ULL] [i_1]))) - (4441038742144425448ULL))))), (((/* implicit */long long int) (signed char)-100))));
                        var_20 = arr_19 [i_0] [i_7];
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_0 + 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((max((((/* implicit */int) (signed char)-6)), (-1))) ^ (94906508)))) : (0LL)));
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((((/* implicit */int) (signed char)33)) - (29)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_2] [i_7])), (-9223372036854775806LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (min((8365849085731956026LL), (((/* implicit */long long int) arr_9 [i_0] [i_0] [(signed char)0] [i_2] [i_7])))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_23 [i_0] [i_1] [i_2 - 1] [i_2 - 1])) : (8191)))), ((-9223372036854775807LL - 1LL))))));
                        arr_25 [i_0] [i_1 + 1] [i_2 - 1] [i_7] = ((/* implicit */unsigned long long int) arr_0 [i_7]);
                    }
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29282)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_2] [i_0] [i_0])))))), (min((((/* implicit */unsigned long long int) arr_24 [i_0 + 2] [i_1] [i_2] [i_8])), (17451448556060672ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_2 + 1] [i_8])))))))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15500406569805825185ULL)) ? ((+(8257112971516087566ULL))) : (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))));
                        var_25 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1] [i_2] [i_8])), (min((-4970391825164918022LL), (((/* implicit */long long int) 30720)))))), ((-(((arr_27 [i_0] [i_0] [i_2 - 1] [i_8]) - (((/* implicit */long long int) -610811816))))))));
                        var_26 += ((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? ((~(3824901587707468642LL))) : (arr_4 [i_0 + 2] [i_1 - 2] [i_1 - 2] [i_0 + 2])))));
                    }
                }
            } 
        } 
    } 
    var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6866994199078923929LL)) ? (min((var_12), (((/* implicit */int) (signed char)44)))) : (max((2147483647), (((/* implicit */int) var_1))))))) || (((/* implicit */_Bool) (signed char)0))));
}
