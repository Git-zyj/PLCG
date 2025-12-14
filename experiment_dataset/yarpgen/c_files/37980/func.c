/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37980
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
    var_17 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5344450549532864663LL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967291U)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-((~(((/* implicit */int) (!((_Bool)1)))))))))));
                                arr_12 [i_1 - 1] [i_0] [i_1 - 1] [i_2] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (arr_9 [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (min((var_1), (((/* implicit */unsigned long long int) var_2))))))) ? (((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_1))) + (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) >> (((/* implicit */int) var_6))))))))))))));
}
