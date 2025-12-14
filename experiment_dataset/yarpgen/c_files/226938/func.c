/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226938
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) var_0)))) : (((var_13) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) (!(var_13)));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 972130047230674872LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-11LL)))) ? (((((long long int) (-9223372036854775807LL - 1LL))) / ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    }
    var_17 &= var_10;
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_18 |= arr_0 [i_3];
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((long long int) 140737488354816LL);
                                var_20 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */long long int) ((_Bool) ((((var_15) ? (((/* implicit */int) arr_21 [4LL] [i_3] [i_4] [i_4] [4LL])) : (((/* implicit */int) var_9)))) * (((/* implicit */int) arr_12 [i_2] [i_3] [i_3] [i_3])))));
                    arr_24 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_3] [i_3] [i_4]))) : (arr_9 [i_2] [i_4])))) ? (((var_14) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_3] [i_4] [(_Bool)1] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_18 [i_2] [i_3] [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2175493783904736614LL) / (-9223372036854775804LL)))))))) : (-1LL)));
                }
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    arr_28 [i_2] = ((/* implicit */long long int) arr_12 [i_2] [i_2] [i_3] [i_7]);
                    var_22 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3836131321383405204LL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))));
                }
                /* vectorizable */
                for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8 + 2] [i_8] [i_8 + 2] [i_3])) ? (2175493783904736631LL) : (var_3)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_36 [i_2] [i_9] [i_8] = ((((((/* implicit */_Bool) var_12)) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) * (((/* implicit */long long int) ((/* implicit */int) var_6))));
                                arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((arr_33 [i_3] [1LL] [i_8 + 3] [i_8 + 3] [i_8 + 3]) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_8 + 2] [i_8 - 1] [i_9])) : (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                }
                var_24 = ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_2])), (((long long int) 6283447271840207074LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [0LL] [i_3] [(_Bool)1] [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_7))))) : ((~(arr_14 [i_2]))));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) ((((var_3) << (((/* implicit */int) arr_39 [i_11] [i_3] [i_2])))) ^ (((/* implicit */long long int) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((min((var_11), (var_10))) + (7042535604973480097LL))) - (9LL))))))));
                    var_26 = min((((/* implicit */long long int) arr_0 [i_2])), (((arr_8 [i_2]) / (arr_8 [i_2]))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    arr_43 [i_2] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((var_10) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_11))) * (((var_3) / (var_3))))));
                    arr_44 [i_2] [i_2] [i_12] = arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2];
                    var_27 = min((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_2] [i_3] [i_12 - 1] [i_12] [i_12 - 1])) * (((/* implicit */int) arr_17 [i_3] [(_Bool)1] [i_12 - 1] [9LL] [i_12 - 1]))))), (((((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_12 - 1] [i_12] [i_12] [i_12 - 1])) ? (((arr_7 [i_2]) / (arr_10 [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            {
                                var_28 = ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_19 [i_2] [5LL] [i_3] [i_14] [i_13 + 1] [i_12 - 1]))) / (-2175493783904736628LL));
                                var_29 = ((/* implicit */_Bool) min((((arr_38 [i_13] [i_2]) ? (((/* implicit */int) arr_38 [i_2] [i_2])) : (((/* implicit */int) arr_38 [i_2] [i_2])))), (((/* implicit */int) arr_38 [11LL] [i_2]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_30 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (9223372036854775807LL)))))));
}
