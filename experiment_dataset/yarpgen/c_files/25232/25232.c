/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(9223372036854775807 & 0)));
        var_16 = (((((!(arr_1 [i_0]))) ? (arr_1 [i_0]) : var_13)) < (arr_0 [i_0]));
        var_17 = (min(35, (arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            {
                var_18 = (max(var_18, ((((((+(((-127 - 1) ? 28 : (arr_7 [10])))))) > (((var_7 ? (arr_4 [i_1]) : (arr_4 [i_1])))))))));
                arr_9 [i_1] = (2097151 + -8437461894427460979);
                var_19 = ((121 ? 1 : 15724019207910714274));
            }
        }
    }
    #pragma endscop
}
