/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204927
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
    var_20 += ((unsigned int) ((((/* implicit */long long int) max((150096237U), (4144871058U)))) > (max(((-9223372036854775807LL - 1LL)), (3510451308332283209LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = 5682641131895661848LL;
                            var_21 = 1566089505U;
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) 3956836478U);
            }
        } 
    } 
}
