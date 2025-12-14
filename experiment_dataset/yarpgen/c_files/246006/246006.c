/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_17 |= (((arr_1 [4] [22]) & 1));
        var_18 = 1;
        var_19 = (max(var_19, ((max(((~(arr_0 [i_0 - 1]))), (!var_6))))));
        var_20 = ((((4 * (((max(var_15, -16376)))))) >> (((((((var_8 ? (arr_0 [i_0]) : 1))) ? 9223372036854775805 : (var_2 * 0))) - 9223372036854775782))));
        var_21 = (-9223372036854775807 - 1);
    }

    for (int i_1 = 3; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((max((!var_13), (-127 - 1))))));
        var_23 = (max(var_23, ((((~((-32757 ? 32756 : 1))))))));
    }
    for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_24 = 17370984081856951409;
        arr_9 [i_2] = var_7;
    }
    for (int i_3 = 3; i_3 < 22;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 3; i_4 < 24;i_4 += 1)
        {
            var_25 = (((arr_12 [i_3]) ? (((((arr_6 [i_3 + 3] [i_3]) != (arr_6 [i_3 - 2] [i_4 - 3]))))) : (arr_4 [i_3 - 3])));
            var_26 = (max((((arr_3 [i_3 + 3]) * var_8)), ((18446744073709551611 ? (-32767 - 1) : 8699843459246321107))));
        }
        arr_16 [i_3] = ((((var_12 | (arr_3 [i_3 - 2])))) && ((max(((0 >> (4217230342 - 4217230301))), (arr_3 [i_3 + 2])))));
    }
    for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
    {
        var_27 = (min(var_27, ((((((arr_18 [i_5 - 2] [i_5 - 2]) / (arr_17 [i_5 + 3]))) > (arr_17 [i_5 + 1]))))));
        arr_19 [i_5] = ((((((arr_5 [i_5 - 2] [i_5 - 3]) | (((arr_15 [i_5] [i_5] [i_5 + 3]) ^ 14))))) ? (((10913082025690627427 ? ((((arr_11 [i_5]) || (arr_18 [i_5] [i_5])))) : (32767 || -1161571165)))) : var_1));
    }
    #pragma endscop
}
