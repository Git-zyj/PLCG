/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239056
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
    var_16 = ((/* implicit */unsigned int) max((var_12), (var_12)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) 4255310858U))), ((~(((/* implicit */int) var_4))))));
                            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3 - 1]))))))), ((-(((/* implicit */int) (unsigned short)23810)))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3]))))))) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned char)0)))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) arr_1 [12ULL]))));
            }
        } 
    } 
}
