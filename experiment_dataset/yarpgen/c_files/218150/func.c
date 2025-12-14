/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218150
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
    var_10 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((unsigned int) max((arr_0 [i_1 + 2] [i_1 - 1]), (arr_0 [i_1 - 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(arr_3 [i_1 - 1])))) > (max((arr_4 [i_0] [i_1 + 2] [i_0]), (((/* implicit */unsigned long long int) var_1)))))))));
                            arr_8 [i_0] [i_1] [i_2 - 1] [i_3] [i_1] [i_2] &= ((/* implicit */_Bool) ((short) var_7));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */int) max((2199023255551ULL), (((/* implicit */unsigned long long int) (unsigned short)40288))));
            }
        } 
    } 
}
