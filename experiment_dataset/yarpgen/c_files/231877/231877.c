/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((-1013841856 < (-2147483647 - 1)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_12 = (-(max(var_5, var_0)));
                    arr_8 [i_0] [i_2] = ((var_9 | 2013265920) / -var_3);
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_13 = (min(var_13, (!var_9)));
                    var_14 = (max(var_14, (((max((2013265904 - 691612477), (min(2097747635, 2013265904)))) | (853858636 / -2781321)))));
                    var_15 = (~var_10);
                    arr_12 [i_0] [i_1] [i_3] = (~var_4);
                }
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    var_16 = (-((-(max(12288, var_7)))));
                    arr_15 [i_0] [i_1] [i_0] [i_0] = arr_6 [i_0] [i_0] [i_1] [i_4];
                    var_17 ^= var_8;
                    arr_16 [i_0] [i_1] [i_4] = (-((var_1 ? var_4 : -262415095)));
                    arr_17 [i_4] [i_1 - 3] = (-(max((arr_14 [i_1] [i_1 - 4] [i_1 - 4]), (arr_14 [i_1 - 4] [i_1 - 3] [i_1]))));
                }
                arr_18 [i_0 - 1] [i_1 - 3] [i_1] = var_3;
            }
        }
    }
    var_18 = (~(((!((!(-2147483647 - 1)))))));
    #pragma endscop
}
