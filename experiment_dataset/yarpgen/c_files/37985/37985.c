/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_2 - 2] = (((((!((min(32767, var_10)))))) == 0));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_1] [i_0] |= (((min(1, 10))));
                                var_13 = ((((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4 + 2] [i_4]) / (arr_13 [i_0] [i_1] [3] [i_1] [i_1] [i_1] [i_0]))));
                                var_14 |= arr_1 [i_2];
                                var_15 &= ((-(((arr_6 [i_1]) / var_3))));
                            }
                        }
                    }
                    arr_15 [6] [i_1] [i_1] [i_0] = ((-(!7704781702779086787)));
                    var_16 = (-127 - 1);
                    var_17 -= ((((~(arr_12 [i_0] [i_1] [i_0 - 2] [i_0 - 1]))) >> ((((~((var_3 ? var_9 : 1)))) - 4659554929452891860))));
                }
            }
        }
    }
    var_18 = ((((((((101 ? 16 : 1))) ^ var_8))) > (max(var_5, -var_3))));
    #pragma endscop
}
