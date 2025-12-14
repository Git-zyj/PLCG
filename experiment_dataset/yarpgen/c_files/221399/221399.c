/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((((((((var_7 ? var_1 : 915942794))) ? 9223372036854775807 : ((var_8 ? 13433971084636787838 : 5012772989072763764))))) ? 9146763550743825543 : (max((~var_12), ((-2008132429 ? 9146763550743825543 : (-9223372036854775807 - 1)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_16 = (((((max(var_7, var_7))) ? 9223372036854775807 : (17103 % var_5))));
        var_17 = (-9223372036854775801 / -var_8);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (arr_3 [3] [i_1]);

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            arr_14 [i_5] [i_4] [0] [i_4] = (((arr_8 [i_5] [i_5] [i_5]) / (((~var_11) ? -8144334942270839608 : ((var_11 + (arr_2 [i_1] [i_1])))))));
                            var_19 = (min(((9146763550743825543 ? -3009251917329175956 : 20)), -7887305147954395662));
                            var_20 = (max(var_20, (~var_6)));
                        }
                    }
                }
            }
            arr_15 [i_1] = var_9;
            var_21 += ((((((var_0 ? 16 : var_11) > (4294967295 * var_12))))));
        }
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_20 [i_1] [i_6] = (((9169565687664515452 || var_8) * ((((arr_8 [i_6] [i_6] [i_6 - 1]) && var_10)))));
            arr_21 [i_6] [i_6] = (min((arr_10 [1] [1] [1] [10]), (((var_13 ? var_1 : 17117)))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    {
                        arr_30 [i_1] [i_6] [i_6] = (min(((-7887305147954395678 ? var_4 : 18446744073709551615)), (arr_10 [i_6 - 1] [i_1] [i_6] [8])));
                        arr_31 [i_1] = (min(((((min(36, var_9))) ? ((9169565687664515478 ? -9223372036854775778 : var_10)) : (arr_1 [i_6 + 1]))), ((((var_2 + (arr_19 [i_1] [i_1])))))));
                        arr_32 [i_6] [i_7] [7] = ((var_2 == ((-22809 ? (var_12 || 9169565687664515449) : var_9))));
                    }
                }
            }
        }
    }
    var_22 = var_6;
    #pragma endscop
}
