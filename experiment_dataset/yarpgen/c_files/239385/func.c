/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239385
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
    var_12 = ((/* implicit */unsigned char) ((1336178734U) >> (((((/* implicit */int) var_2)) + (4209)))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32756))) > (1336178734U)));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((1336178734U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2] [i_1] [i_2])))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */_Bool) 0U)) ? (2958788561U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2] [i_2] [i_2] [i_0]))) == (var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)12] [(signed char)12]))) + (2958788582U))), (((/* implicit */unsigned int) var_8))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1])), (var_6))))) : (arr_6 [i_2])))));
                    arr_9 [i_1] [i_2] = ((/* implicit */signed char) var_10);
                }
            } 
        } 
    } 
}
