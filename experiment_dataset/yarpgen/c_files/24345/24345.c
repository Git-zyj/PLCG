/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = min(1, ((~(min(var_3, 10)))));
    var_20 = var_14;
    var_21 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [6] &= (((min((((508254408 > (arr_2 [i_1])))), (min(0, var_2)))) * (!268435455)));
                var_22 = (min(((-1 ? var_12 : (min(56392, -7476658428535127011)))), ((min(var_3, (3979015962383160476 && -4))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_23 *= 3786712871;
                    arr_8 [i_2] [i_0] [i_0] [i_0] = (!var_15);
                    var_24 = 7022;
                }
                arr_9 [i_0] [i_1] [i_1] = ((!(!-20)));
                arr_10 [i_0] [i_0] = -7005469427338525494;
            }
        }
    }
    var_25 = var_7;
    #pragma endscop
}
