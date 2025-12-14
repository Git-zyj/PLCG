/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= (max(var_5, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        var_18 ^= ((((-1 + 2147483647) >> (((arr_0 [i_0]) - 57320)))) > (1 * 1));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1 + 1] = ((var_8 || (arr_0 [1])));
                    var_19 *= ((-(arr_0 [i_0])));
                    var_20 = var_14;
                }
            }
        }
        var_21 = ((1 ? (arr_3 [i_0] [i_0] [i_0]) : (((1 * (arr_0 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
    {
        arr_11 [i_3] = (max(1, ((~(arr_9 [i_3])))));
        var_22 = (((max(((1 * (arr_0 [i_3]))), (arr_4 [i_3] [20]))) > (((((((arr_4 [i_3] [i_3]) * (arr_9 [i_3])))) <= ((1 ? 1 : var_3)))))));
    }
    #pragma endscop
}
