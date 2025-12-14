/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((-111288760 % 9241944068748974245) ? 20231 : var_2));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_16 = ((~((max(var_1, var_10)))));
                    var_17 = (min(((max((((var_6 + 2147483647) >> (var_4 - 439592197))), 2526434640))), (max((arr_7 [11] [i_2 - 1] [i_1 - 1]), var_8))));
                    var_18 = ((51595 ? var_13 : (max(2, 16383))));
                }
                var_19 = (((((arr_1 [i_0] [i_1 + 1]) << (((var_12 - var_15) - 61919))))) ? (arr_2 [i_0]) : 2334400737);

                for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((((max((arr_7 [i_1 - 1] [i_1] [i_1 - 2]), var_2))) == ((-(arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 2])))))));
                    arr_10 [i_0] [i_0] [i_0] = (((3298534883328 / 1001947212) * ((((var_3 * (arr_6 [i_0]))) / (max(18446744073709551614, (arr_7 [i_0] [i_0] [i_0])))))));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [13] [13] [i_4] = 1821502081;
                    arr_15 [i_0] [10] [i_4] [8] &= var_9;
                }
            }
        }
    }
    var_21 = (((max(2334400737, 2334400729)) / (((var_8 % var_12) ? var_0 : var_12))));
    #pragma endscop
}
