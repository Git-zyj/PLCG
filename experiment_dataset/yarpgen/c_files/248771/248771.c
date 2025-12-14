/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(1, var_9);
    var_12 = min(var_10, var_9);
    var_13 -= min((((!1) ? ((min(-1675030740, var_4))) : ((var_0 ? var_7 : 65535)))), var_1);
    var_14 = ((2147483647 << (var_6 - 199)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [6] = (((min(var_6, (arr_0 [i_0] [i_0])))) ? 15663910610718939814 : -2147483647);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (arr_3 [i_1] [i_1]);
        arr_6 [i_1] = ((~(arr_0 [i_1] [1])));
        var_16 = ((~(arr_4 [i_1] [i_1])));
        var_17 ^= ((((((-2147483647 - 1) ? 30393 : 1675030740))) ? (((+(((arr_0 [i_1] [i_1]) ? -26995 : -3970))))) : (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        var_18 = 12796;
        var_19 = (((arr_10 [i_2 + 1] [i_2 - 1]) > (max(2048, (arr_4 [8] [i_2 - 1])))));
    }
    #pragma endscop
}
