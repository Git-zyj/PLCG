/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216395
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
    var_20 = (short)16383;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_4))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(arr_5 [i_1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_22 = (-(((arr_6 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */int) var_13)))));
                                var_23 *= ((/* implicit */short) (+((-((+(32767)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
