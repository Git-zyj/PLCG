/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            arr_4 [i_1] = ((((((!var_13) ? ((16 ? (arr_0 [16] [i_1]) : var_13)) : -4073662803751547056))) ? (((max(var_10, 31)) & var_6)) : ((((arr_3 [i_0 + 1] [1] [i_1 + 2]) ? (~var_15) : ((14 ? var_13 : (arr_2 [i_0]))))))));
            var_20 = ((15360 ^ (arr_0 [i_0 + 2] [i_0 - 1])));
        }

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_21 = ((((min(((var_5 ? var_17 : 173)), -71))) ? (((arr_2 [i_0 + 3]) ? var_12 : (arr_1 [i_0 + 3]))) : (max((740120135 && 42364), ((68 ? var_18 : -2531930423101151761))))));
            arr_8 [i_0] [i_0] = (min(((0 ? (arr_0 [i_0 - 1] [20]) : (arr_2 [i_2]))), (var_18 != 219)));
            arr_9 [1] [1] = (1 % var_4);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_12 [i_0 + 1] [i_3] = ((((8064 <= (arr_1 [i_0 - 2]))) && var_11));
            var_22 = ((var_1 ? 2 : (arr_6 [i_0 + 2])));
        }
    }
    var_23 = ((((min(16, 1))) ? ((((((18446744073709551615 ? -479360871 : 8078))) ? 241 : (~-860187475)))) : var_0));
    #pragma endscop
}
