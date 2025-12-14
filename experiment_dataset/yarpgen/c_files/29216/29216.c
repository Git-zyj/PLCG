/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_6 [4] [i_1] [i_1] = var_7;
                    var_13 += ((var_9 ? 35 : (arr_1 [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (arr_8 [8] [i_3 - 1] [i_2] [i_0]);
                                arr_13 [4] [i_1] = 55;
                                var_15 = ((((-var_8 ? 53 : var_5))) ? ((var_11 ? var_2 : 0)) : var_5);
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((((((((-10082 ? 5 : 1))) ? var_4 : var_6))) ? var_5 : 12));
    #pragma endscop
}
