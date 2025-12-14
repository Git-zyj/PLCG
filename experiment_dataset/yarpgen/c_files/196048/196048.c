/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = 217;

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            arr_5 [i_0] = var_13;
            var_18 = 63;
            arr_6 [i_0] = (((~2147483647) ? (854016520 && var_11) : (((((var_14 ? 4194272 : var_5))) ? (((var_0 ? var_5 : (arr_4 [i_1 + 1] [i_0])))) : (2287828610704211968 - var_5)))));
        }
    }
    var_19 = var_17;
    var_20 = var_1;
    #pragma endscop
}
