/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_14 = (max(1562353248, (((((arr_0 [i_0]) ? var_0 : 1562353248)) * (135 > 1)))));
        arr_3 [i_0] [i_0] = ((((max(4294967295, (arr_1 [i_0] [i_0])))) ? (max(var_4, ((((arr_2 [1]) > 8358426815082648667))))) : (arr_1 [i_0] [i_0])));
        var_15 = ((((((var_3 ? (arr_1 [i_0] [i_0]) : 172))) ? var_3 : var_5)));
        var_16 = max((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (((((17991 ? -1754 : 2812700913))) ? ((var_11 ? var_5 : var_8)) : (((max(41117, 41117)))))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_17 *= ((+(max((~var_3), var_9))));
        arr_8 [i_1] = var_11;
    }
    var_18 ^= 18446744073709551600;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_19 = (var_11 != var_6);
                arr_13 [i_2] = ((25748 ? (arr_7 [i_2] [i_3]) : (1 <= 1)));
            }
        }
    }
    #pragma endscop
}
