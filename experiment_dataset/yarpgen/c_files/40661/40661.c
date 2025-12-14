/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = ((!(~-0)));
        var_14 = (~((~(!1))));
        var_15 = ((!((!(~0)))));
        var_16 = var_10;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 -= (-((~((~(arr_5 [i_1]))))));
        var_18 = ((-((-(arr_4 [i_1])))));
        arr_6 [i_1] |= (~var_3);
        var_19 = -1;
        arr_7 [i_1] = ((!(~1)));
    }
    var_20 &= var_11;
    var_21 |= (!-var_2);
    var_22 = (max(var_22, ((-(((!(~1))))))));
    #pragma endscop
}
