/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((+(max((arr_3 [i_0] [i_0]), ((12577 ? 9223372036854775807 : 2414271126563150110))))));
                var_16 = (((28 ? ((max((arr_1 [i_0] [1]), 62097))) : (!var_8))));
                arr_5 [i_0] [i_1 + 1] = (((190 >= var_3) | var_1));
                var_17 = var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (min(var_18, -63));
                            arr_12 [i_0] [i_1] = (((~4294967290) ? (arr_8 [i_0] [i_0] [i_1 - 1] [7] [i_3]) : (min(-125, (~var_8)))));
                        }
                    }
                }
            }
        }
    }
    var_19 = (((var_10 | -2068762988) ? var_1 : 4967318601807021039));
    var_20 = ((-(((~var_4) | ((16066912825542147595 ? var_2 : var_7))))));
    #pragma endscop
}
