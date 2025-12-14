/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= var_5;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (!var_14);
                    var_17 = (1 % 1);
                }
            }
        }
        arr_10 [i_0] = (((max(-9223372036854775804, -4831311313157306067))) ? 4294967295 : (((max(24664, (arr_0 [i_0]))))));

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            arr_15 [i_0] = (arr_2 [i_3]);
            var_18 = ((~((9223372036854775780 ? ((-(arr_6 [i_3]))) : (1 < var_10)))));
            arr_16 [i_0] [i_0] [i_0] = (arr_3 [i_0]);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_19 = ((!(~1)));
                            arr_27 [i_0] [3] [i_5] [i_0] [i_5] [i_0] [i_5 + 1] = var_11;
                        }
                    }
                }
            }
            var_20 = -4831311313157306064;
            var_21 = (~9223372036854775803);
        }
        var_22 = max(var_13, (arr_11 [i_0] [i_0]));
    }
    var_23 -= var_8;
    #pragma endscop
}
