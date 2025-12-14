/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((!(~19)));
        arr_5 [i_0 + 2] = (!255);
        arr_6 [i_0] = (((-(arr_1 [i_0]))));
        arr_7 [i_0] [i_0] = (-((-((-(arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_10 [10] &= (!-2397483793);
        arr_11 [i_1] = ((!(!-29585)));
        arr_12 [i_1 + 1] [i_1] = ((-((-(~158312254)))));
        arr_13 [i_1] [i_1] = (~(((!(!252)))));
    }
    var_20 = (!-var_2);
    var_21 = (+-3824274002182246649);
    var_22 = (!var_4);
    #pragma endscop
}
