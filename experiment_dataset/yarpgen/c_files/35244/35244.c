/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (min(((var_3 ? (((min(15, 1)))) : ((2019634331 ? 2019634323 : var_16)))), (((!(var_13 && 2019634331))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (((((arr_1 [i_0]) || (arr_3 [i_1]))) ? ((-4096 ? (((-16266 | (arr_0 [i_0])))) : 2014621080)) : 5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_18 |= (min(((4294967271 * (arr_9 [i_3 + 3] [i_3 + 2] [i_3] [i_3]))), (arr_9 [i_3] [i_3 - 2] [i_2] [i_2])));
                            var_19 = var_2;
                            arr_11 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3 - 2] = (max(4294967290, -60));
                        }
                    }
                }
                var_20 = ((((255 ? -32764 : 1))));
            }
        }
    }
    #pragma endscop
}
