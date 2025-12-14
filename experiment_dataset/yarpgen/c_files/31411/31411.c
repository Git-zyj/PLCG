/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (((145 / 992) - (1 / 1)));
                arr_8 [i_1] [i_1] [i_0] = (65535 != 15880031995209257617);

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_13 [i_2] [i_2] [i_1] [i_0] = ((1 == (1 && 1)));
                    arr_14 [i_2] [i_0] = (15 / 1);
                }
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_11 = (max(var_11, 1059463260609433307));
                        var_12 ^= (1117362677 & 32);
                        var_13 ^= 309828785990787870;
                    }
                    arr_21 [i_0] [i_1] [i_3] = (13907471699757164297 != 1);
                }
            }
        }
    }
    var_14 = (max(var_14, var_3));
    #pragma endscop
}
