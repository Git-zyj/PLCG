/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = var_6;
                            var_18 ^= ((!(arr_10 [i_3] [i_0])));
                        }
                    }
                }
                arr_13 [i_1] [i_1 - 1] [i_0] = ((((((arr_1 [i_1 - 3]) >= var_9))) <= (((arr_1 [i_1 - 3]) >> (var_6 - 8422506112513191340)))));
            }
        }
    }
    var_19 = (max(65535, (((((1 ? 51879 : -21492))) ? 14 : 37151))));
    #pragma endscop
}
