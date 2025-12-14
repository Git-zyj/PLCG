/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25937
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_4;
    var_14 = ((255 ? (0 & 18137676554801990634) : var_3));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            var_15 = 358;
            arr_5 [i_1 - 1] [9] [9] = (((~var_12) ? 4952 : var_10));
            arr_6 [i_0] [i_1] [i_0] = (~(arr_2 [i_0 - 1]));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_16 = ((!(arr_1 [i_0 + 2] [i_0 + 2])));
            arr_9 [i_2] = (((21964 ? (arr_3 [i_2]) : 251327712)));
            var_17 = (~(!31330));
            var_18 = ((3184290960 ? (arr_2 [i_0]) : (((arr_7 [6] [i_2]) ? -21959 : var_9))));
        }
        var_19 -= (((arr_2 [i_0 + 1]) * var_0));
    }
    #pragma endscop
}
