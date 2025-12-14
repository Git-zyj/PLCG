/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = ((~(((!(!var_0))))));
                var_12 = ((~((~(arr_1 [i_1 - 3])))));
                var_13 = ((-(((!(arr_5 [i_1 - 3] [i_1 - 2] [4]))))));
                var_14 = ((arr_3 [15] [i_0]) != var_8);
                var_15 = var_1;
            }
        }
    }
    var_16 = var_6;

    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        var_17 = ((-(28672 / 132)));
        var_18 = (arr_2 [i_2]);
        var_19 = ((((((~(arr_1 [i_2]))))) ? ((max((!var_1), ((~(arr_7 [i_2] [i_2])))))) : ((var_1 ? (min(var_1, (arr_1 [i_2]))) : (~var_8)))));
        var_20 &= ((~(((arr_7 [i_2] [i_2]) ? ((max(0, -1227636733))) : (arr_5 [i_2 - 1] [i_2 + 2] [i_2 + 2])))));
        var_21 = ((var_3 ? (!var_5) : (~var_10)));
    }
    var_22 = var_2;
    var_23 = var_4;
    #pragma endscop
}
