/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212357
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */long long int) arr_3 [i_1])) : (arr_8 [i_0] [i_1] [i_1] [i_2]))) * (((/* implicit */long long int) max((arr_3 [i_0]), (var_6)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) var_3);
                                arr_17 [i_0] [i_0] [4LL] [i_0] [(signed char)1] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_3] [i_3 - 1] [i_3] [i_3 + 2] [i_3 + 3] [i_3 + 3])) ? (((((/* implicit */_Bool) arr_11 [2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [12LL] [12LL])) ? (arr_12 [(short)14] [i_1] [(unsigned short)13] [i_1] [(unsigned short)2] [i_1]) : (((/* implicit */long long int) (~(var_6)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0])))))));
                            }
                        } 
                    } 
                    var_22 = ((max(((!(((/* implicit */_Bool) var_12)))), (max((var_0), (var_9))))) ? (max((((/* implicit */int) var_15)), (arr_6 [i_1] [i_2]))) : (((((/* implicit */_Bool) var_7)) ? (arr_13 [9] [(short)14] [i_2]) : (arr_13 [7LL] [(_Bool)1] [i_2]))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */signed char) (((~((~(var_6))))) ^ ((~(((/* implicit */int) var_0))))));
    var_24 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (var_14)))) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_16))))) : (((/* implicit */int) var_15)))), (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((arr_16 [i_6] [i_6] [i_6] [i_6] [i_6] [(signed char)4]), (arr_13 [i_5] [7LL] [(_Bool)0]))) * (((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_7)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_18))))), ((-(var_1))))) : (((/* implicit */long long int) var_3))));
                var_26 = max(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_5])) : (arr_3 [i_6]))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                var_27 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_21 [3ULL] [i_6] [i_6])) ? (arr_8 [i_5] [i_5] [i_6] [i_5]) : (arr_8 [6] [i_6] [(signed char)8] [0LL])))));
                arr_22 [i_6] = ((/* implicit */_Bool) arr_8 [i_5] [i_5] [(_Bool)1] [i_6]);
                arr_23 [i_5] [3LL] |= (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_18)) : (arr_9 [i_5] [i_6] [i_6]))));
            }
        } 
    } 
}
