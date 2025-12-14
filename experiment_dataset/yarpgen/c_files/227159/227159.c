/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_20 = (min(255, (((var_6 < (1 ^ 55))))));
        var_21 -= (arr_1 [1] [11]);
    }
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            var_22 = ((!(((max(1, 1))))));
            arr_6 [i_2] [12] &= ((!((((min(-1762314793, 56))) || 1))));
        }
        var_23 += (min((~var_9), var_1));
    }
    for (int i_3 = 1; i_3 < 18;i_3 += 1)
    {
        var_24 = var_13;
        var_25 = (max(var_25, ((((arr_10 [19]) ? (min((max(255, 0)), (-54 & 1))) : var_14)))));
    }
    var_26 -= max(-50, 1);
    var_27 = (var_6 * var_4);
    var_28 = (min(1899090112, 255));
    #pragma endscop
}
