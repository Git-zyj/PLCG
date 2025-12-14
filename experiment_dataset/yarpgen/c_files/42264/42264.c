/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 += (((arr_4 [i_0] [9] [i_1]) || (!var_8)));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_14 = ((((((var_10 ^ var_1) + -255))) ? (4240961903104114092 % 37636) : var_5));
                                var_15 = 37626;
                                arr_14 [i_0] [i_0] [i_4] = (192 & 255);
                                var_16 += ((((((arr_3 [i_0] [i_0 + 3]) - (arr_3 [i_0] [i_0 - 1])))) ? (((((var_10 + (arr_12 [i_4] [i_3] [i_2] [i_1] [i_0])))) ? var_2 : 2199023255551)) : (((arr_5 [i_3] [i_2] [i_0]) / (arr_5 [i_4] [i_2] [i_1])))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
                arr_16 [i_0] = ((+((((17179869183 || 37633) >= (arr_4 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    var_17 += ((var_1 ^ (19 ^ -8230635123014301480)));
    #pragma endscop
}
