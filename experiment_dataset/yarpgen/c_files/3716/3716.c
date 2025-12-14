/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-var_6 ? (!-var_7) : (var_5 % 6061376165870103012)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [6] = (((~var_2) != var_2));
        arr_3 [i_0] [3] = ((6061376165870102982 - var_5) ? -var_7 : var_6);
        var_11 = (min(var_11, (((~(arr_0 [i_0 - 1]))))));
        var_12 = 114;
    }
    #pragma endscop
}
