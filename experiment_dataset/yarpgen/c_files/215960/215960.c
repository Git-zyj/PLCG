/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_13 = ((((((max(363509962, 363509962))) - var_7)) - (max(var_5, (arr_11 [i_0] [i_1] [i_2] [i_3])))));

                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_14 = (max(var_14, (((((+(max((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_0] [i_0])))))) / var_9))));
                            var_15 |= (arr_3 [i_0]);
                            var_16 = (((arr_8 [i_1 - 1] [i_1 + 3] [i_4]) * (arr_6 [i_4] [i_1 + 3] [i_2])));
                        }
                    }
                }
            }
        }
        var_17 = (min(var_17, (arr_4 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                {
                    var_18 = (max(var_18, var_1));
                    var_19 -= (min(6667409034488959466, 3931457333));
                }
            }
        }
        var_20 &= (min((((arr_17 [i_0] [i_0] [i_0] [i_0]) + (arr_17 [i_0] [i_0] [i_0] [i_0]))), (((!(3543372187 < 16384))))));
        var_21 |= ((+((((var_2 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0]))) + 0))));
    }
    var_22 = var_7;
    #pragma endscop
}
