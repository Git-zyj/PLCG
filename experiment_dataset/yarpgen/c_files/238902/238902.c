/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((((50881 ? var_3 : var_10))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] = (((var_8 ? var_2 : 5786528698944022318)));
            var_14 = var_1;
        }
        var_15 += (~var_8);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_10 [8] = -81;
        var_16 = 158;
        var_17 = 510;
    }
    var_18 = (((var_4 ? ((8409622650598708128 ? var_8 : var_3) : ((var_3 ? 74 : 255))))));
    var_19 = (((((-var_6 ? var_12 : (!22)))) ? (((~(~80)))) : var_12));
    #pragma endscop
}
