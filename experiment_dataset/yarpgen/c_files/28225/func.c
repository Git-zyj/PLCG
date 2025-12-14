/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28225
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned int) arr_0 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_2] [13U] [i_2] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_4] [i_4]))));
                                var_12 += ((/* implicit */signed char) (+(min((((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_3] [i_4])) - (var_10))), (((/* implicit */unsigned int) arr_5 [i_0]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = (~(min((var_3), ((~(var_4))))));
    var_14 = ((/* implicit */int) var_5);
}
