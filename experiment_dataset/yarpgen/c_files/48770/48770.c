/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48770
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_2));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_1] = 1131278433;
                var_21 ^= max((((var_17 ? var_16 : var_2))), (max(2433011009152119802, 5592025063206401072)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] [i_2] [i_0] [i_3] = (((max(var_8, 196))));
                            var_22 ^= (max(7, var_0));
                            var_23 = 127;
                            var_24 = -8721;
                            arr_11 [i_3] = (!var_2);
                        }
                    }
                }
                arr_12 [i_0] = min((~61988), ((var_1 ? 1626493830 : 15927386301081184571)));
            }
        }
    }
    #pragma endscop
}
