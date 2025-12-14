/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 0;

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (~1);
        var_14 *= ((var_8 <= (((-(arr_1 [i_0]))))));
        var_15 = ((~(var_0 == var_1)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((1 ? -var_2 : 525167153204784636));
        arr_7 [i_1] = var_0;

        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_16 = ((var_11 <= (arr_1 [i_1])));
            arr_11 [i_1] [i_1] [i_2] = (~((var_7 ? (max((arr_1 [i_1]), var_2)) : var_9)));
        }
    }
    var_17 = var_7;
    var_18 = var_8;
    #pragma endscop
}
