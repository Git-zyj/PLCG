/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210380
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) (+(((((((/* implicit */unsigned int) 0)) * (470287735U))) * ((-(470287735U)))))));
                arr_4 [i_1] [i_1] = ((/* implicit */int) ((unsigned int) arr_3 [i_0] [i_0] [i_0]));
                arr_5 [i_1] [i_1] = ((/* implicit */int) min((arr_0 [(_Bool)1]), (((/* implicit */long long int) ((arr_1 [i_1] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_13)))))));
                var_19 ^= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 470287735U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [(signed char)10] [i_0]))) : (18298301415462169431ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)64))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (1472393711U) : (1472393711U))))));
                var_20 = (unsigned char)64;
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        for (int i_3 = 2; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    arr_14 [i_4] [i_4] [7U] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_4]))) / (arr_10 [i_3 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) var_0)))))));
                    var_21 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_3 + 2] [i_3 + 2]))));
                    arr_15 [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_10 [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_2]))) : (max((var_12), (((/* implicit */unsigned long long int) arr_12 [i_3 + 1] [i_4] [i_3 - 1] [i_3 - 1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))) : (var_10))))) + (((/* implicit */unsigned long long int) ((var_15) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 3078681996U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
}
