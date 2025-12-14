/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 = (((((((max(1631744823, 26039))) ? (-122 > 0) : 4070697006))) | ((var_2 / (arr_0 [7])))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_18 = (min(((1 + (arr_1 [i_0]))), (((((arr_5 [i_0] [i_0] [i_0]) != 0))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_19 = arr_3 [i_1];
                                var_20 ^= 0;
                                var_21 = (((((var_15 >> (((851725544 + 268304384) - 1120029921))))) || (min(1, 1))));
                                var_22 = (((((min(var_8, (arr_4 [i_0] [i_0]))) < (arr_8 [i_1] [i_4 + 2]))) ? 14 : (min((arr_2 [i_0] [i_3]), ((min(1, 1)))))));
                            }
                        }
                    }
                }
                var_23 = ((((((-15 < ((32 ? var_12 : 1)))))) | (((arr_2 [i_0] [i_0]) ^ (arr_9 [i_0] [4] [i_1])))));
            }
        }
    }
    var_24 = ((((((1 * var_11) >= (var_11 >= 1)))) / var_5));
    var_25 = var_1;
    #pragma endscop
}
