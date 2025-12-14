/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190313
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
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_12 = arr_5 [i_0 - 1];
                            var_13 = ((/* implicit */short) max((var_13), (min(((short)30361), ((short)-674)))));
                            var_14 -= ((short) (short)32767);
                            var_15 = max(((short)(-32767 - 1)), (arr_2 [i_0 - 1] [i_3 - 2]));
                        }
                    } 
                } 
                var_16 = ((short) ((((/* implicit */int) (short)-10050)) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))));
            }
        } 
    } 
    var_17 = var_6;
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((/* implicit */int) ((short) var_8))))))));
}
