/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53409
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
    var_11 = ((/* implicit */_Bool) (((((-(1801659925))) + (2147483647))) << (((((((/* implicit */_Bool) 225331718U)) ? ((-(var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), ((_Bool)1))))))) - (3915804743U)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] = var_1;
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_2])), (12036445935936036817ULL))))));
                            arr_11 [i_2] [3U] = ((unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) var_1))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) * (arr_0 [i_3])))));
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_8))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) var_2);
}
