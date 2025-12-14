/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44051
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
    var_14 = ((/* implicit */unsigned int) max((var_14), ((~(var_9)))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(892131068385166985ULL)))) ? (((/* implicit */long long int) var_9)) : (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)))) | (min((((/* implicit */unsigned long long int) var_3)), (17554613005324384621ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_0] [i_0] [i_0]))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (var_9)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((((/* implicit */_Bool) var_4)) ? (var_3) : (arr_9 [i_2] [i_2]));
                    var_18 = ((/* implicit */unsigned short) var_9);
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_4])) ? (((((/* implicit */_Bool) arr_13 [i_2])) ? (var_4) : (var_9))) : (max((((/* implicit */unsigned int) arr_6 [i_2])), (var_8)))))) ? (var_2) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [9U])), ((~(arr_9 [i_2] [i_4]))))))));
                }
            } 
        } 
    } 
}
