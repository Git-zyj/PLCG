/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(min((min(56673, -5284355934709171830)), -110))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = -58;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, ((min(30565, ((-(min(-1299604979, 78)))))))));
                            var_22 = var_9;
                            arr_10 [i_0] [i_0] [i_0] [i_2] = -558125054;
                        }
                    }
                }
                arr_11 [i_0] = max(3, -59);
                var_23 *= -59;
                arr_12 [i_0] [i_0] [i_0] = 9;
            }
        }
    }
    #pragma endscop
}
