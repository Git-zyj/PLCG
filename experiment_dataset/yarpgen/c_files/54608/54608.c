/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0 + 3] = var_7;
        var_14 = ((((18446744073709551615 << var_1) || (!var_10))) ? 18446744073709551615 : 65534);
        arr_4 [i_0] = (((((((max(0, (arr_1 [i_0])))) ? (0 != var_6) : (min(2147483647, (arr_1 [i_0])))))) ? ((((arr_1 [i_0 + 1]) ? (min((arr_0 [i_0] [i_0 + 2]), -2147483647)) : 1))) : (((((~(arr_2 [i_0])))) / 288230376151711743))));
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_1] [i_2 + 2] = ((0 ? (!var_6) : (arr_6 [i_1 + 1] [i_2 + 3])));
            var_15 = (min(var_15, var_11));
        }
        var_16 = (max(var_16, (((((((-2147483647 - 1) ^ 0))) != var_11)))));
        var_17 += (((arr_8 [i_1 + 1]) ? 18446744073709551615 : 18446744073709551615));
        arr_10 [i_1] [i_1] = (min((min(18446744073709551615, (arr_5 [i_1] [i_1 + 1]))), var_5));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] [i_3 + 1] = (((var_12 <= ((18446744073709551615 ? 0 : 0)))));
        arr_15 [i_3] = ((((min(((2147483647 ? 0 : (arr_11 [i_3]))), var_4))) ? (arr_6 [i_3 + 2] [i_3]) : 1));
    }
    var_18 = ((!((max(var_7, (var_3 | 1))))));
    var_19 = (min(-var_1, var_1));
    #pragma endscop
}
