/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194721
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
    var_12 = ((/* implicit */unsigned char) var_10);
    var_13 *= ((/* implicit */int) ((long long int) min((((/* implicit */short) var_6)), (var_5))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) - (2310876620U)))));
                arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) (short)12736)) + (((/* implicit */int) (short)30589)))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) min((min((((/* implicit */int) min((var_5), ((short)10029)))), (arr_9 [i_0] [9] [i_0] [(_Bool)1] [i_0]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) && (((/* implicit */_Bool) var_2)))))));
                            arr_11 [i_3] [i_2] = ((/* implicit */unsigned long long int) (short)-12737);
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-10035)))) : (var_7)));
}
