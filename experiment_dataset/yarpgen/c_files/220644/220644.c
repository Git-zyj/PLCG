/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_3, 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((arr_1 [i_1]) ? ((1621361709 ? -129875451486594980 : 230063814)) : -7578));
                var_12 = (min(var_12, (arr_2 [6] [i_1])));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_13 = (max(var_0, (!-9223372036854775803)));
                    var_14 = ((var_10 ? ((~(arr_8 [i_1 + 1] [i_1] [i_2]))) : (arr_3 [i_0])));
                    var_15 -= (max(var_9, 1));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_15 [i_0] [1] [i_1] = var_1;
                                var_16 &= (((~((-(arr_12 [i_4] [2] [i_1 + 1] [i_4]))))));
                            }
                        }
                    }
                    var_17 = (arr_4 [i_1 + 1]);
                }
                var_18 = -21707;
            }
        }
    }
    var_19 = var_9;
    var_20 = -2147483628;
    #pragma endscop
}
