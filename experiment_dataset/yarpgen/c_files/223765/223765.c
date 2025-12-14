/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (max((((1 ? -3116224099900658497 : -3116224099900658508))), ((10714186073033402917 + (((3116224099900658512 << (((-3116224099900658508 + 3116224099900658532) - 23)))))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (min(var_19, (((15985682322409216442 ? 1 : 4)))));
            var_20 -= ((-(arr_0 [i_0] [i_1])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_11 [2] [i_1] [i_2 + 2] [i_0] [i_1] |= var_11;

                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            var_21 = (max(var_21, (arr_5 [i_2 - 1])));
                            var_22 = ((var_3 != (arr_3 [i_0])));
                            var_23 = (min(var_23, ((((arr_14 [i_2] [i_1] [i_4 + 4] [i_4 + 1] [i_2] [i_4] [i_4]) ? (~-3116224099900658508) : (~0))))));
                            var_24 = (max(var_24, (arr_4 [i_1])));
                            var_25 ^= ((arr_12 [i_4 + 4] [i_2 + 2] [i_2 + 2] [i_4 + 4]) ? (arr_13 [i_1] [i_3] [i_2 - 1] [i_2 - 1] [i_4] [i_4 + 1] [i_3]) : var_5);
                        }

                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            arr_18 [i_3] = ((!(arr_4 [i_2 - 1])));
                            var_26 ^= (arr_16 [13] [i_1] [i_2 + 2] [16] [i_1]);
                            var_27 = (arr_13 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_5]);
                            arr_19 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] = (((arr_7 [3] [i_2] [0] [3]) ? ((128 ? 2125514816049239486 : 1630398558748677100)) : var_9));
                        }
                        var_28 = (max(var_28, (arr_16 [3] [i_1] [i_1] [i_1] [i_3])));
                    }
                }
            }
        }
        arr_20 [i_0] = arr_7 [i_0] [i_0] [6] [i_0];
        var_29 = (max(var_29, (((-(arr_14 [1] [1] [i_0] [i_0] [1] [i_0] [1]))))));
        var_30 = (min(var_30, ((max(((~(~10622259517940522485))), ((((~18446744073709551611) ? (arr_9 [i_0]) : (min((arr_7 [i_0] [i_0] [6] [i_0]), (arr_5 [i_0])))))))))));
    }
    var_31 = ((var_12 & var_7) % (((-((var_0 ? var_6 : var_13))))));
    #pragma endscop
}
