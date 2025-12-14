/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [12] [3] [i_1] = (((((arr_4 [i_1 - 1] [i_1]) / (arr_4 [i_1 - 1] [i_1]))) * (1 * var_4)));
                arr_7 [i_0] [i_1] = ((((min(16407310204200927821, var_3))) - ((((max((arr_5 [i_0]), -107))) >> (16383 / 18446744073709551615)))));
                arr_8 [0] = ((((var_7 >> (((arr_1 [i_0]) - 5662483170483340384)))) > var_0));
                var_10 ^= (1 < var_0);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 ^= (!var_2);
                            var_12 -= (max(((max((arr_4 [i_3 + 3] [i_1 + 1]), (arr_4 [i_3 + 3] [i_1 + 1])))), (max(0, 32767))));
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, 0));
    #pragma endscop
}
