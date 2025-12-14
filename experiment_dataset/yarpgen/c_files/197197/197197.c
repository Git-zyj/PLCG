/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_14 = (32766 != 3874);
                            var_15 ^= ((((((-32766 + 2147483647) << (var_13 - 36986))) | (arr_9 [i_0] [i_0] [i_1] [i_2 - 4] [1] [i_3]))));
                        }
                    }
                }
                var_16 = (max(var_16, (((var_11 / (arr_7 [i_1] [12]))))));

                for (int i_4 = 1; i_4 < 18;i_4 += 1)
                {
                    arr_16 [i_0] [10] = ((min((min(1999005846, -15)), (arr_0 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [12] [i_4 + 1] [i_5] [i_0] [18] = (arr_20 [i_6] [i_6] [i_5] [i_4 - 1] [i_5] [i_4 - 1] [1]);
                                arr_24 [i_0] [i_0] [i_4] [15] [i_6] = ((~((((min(-32744, (arr_22 [i_0])))) - (((-2147483647 - 1) + (arr_10 [i_0] [i_0] [i_0] [i_0] [1] [i_0])))))));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((((((arr_19 [i_4] [i_4] [18] [i_4 - 1] [0] [1]) ? 32731 : (arr_19 [i_4] [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]))) < (max((arr_19 [i_4] [1] [2] [i_4 - 1] [2] [0]), 65535)))))));
                }
            }
        }
    }
    var_18 += ((((((1 ? -32766 : 0)) > (((12716853084676437678 ? -32731 : 1))))) ? (((((var_7 << (9223372036854775786 - 9223372036854775785)))) ? 0 : var_4)) : var_1));
    var_19 = var_6;
    #pragma endscop
}
