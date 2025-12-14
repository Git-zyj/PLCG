/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236226
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
    var_17 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_12 [i_2] [i_1] [i_2] [(signed char)4] = ((/* implicit */unsigned short) (_Bool)1);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */int) (_Bool)1);
                            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) 6)))), ((!(((/* implicit */_Bool) 287478772U))))));
                        }
                    } 
                } 
                var_20 = max((max((-6), (-629601393))), ((-(((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
