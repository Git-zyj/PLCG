/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22291
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
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) arr_2 [i_0 - 2]))) >= (((unsigned long long int) var_1))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]);
                            var_17 += ((/* implicit */unsigned long long int) (-(((((arr_7 [i_0] [(short)14] [i_0 + 2] [i_0]) + (((/* implicit */long long int) arr_0 [8])))) - (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_7);
}
