/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243554
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((var_1) - (((/* implicit */unsigned long long int) 1050233611)))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_0] = max((((/* implicit */unsigned short) ((((((/* implicit */int) var_0)) / (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (_Bool)1))))), (min((var_4), (var_4))));
                            arr_13 [i_0] [i_0] [i_2] = 1306915547080015228LL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((var_5) & (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
    var_13 = ((/* implicit */signed char) (+(((/* implicit */int) min((var_9), (((/* implicit */signed char) ((2801314859U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)4095)))))))))));
}
