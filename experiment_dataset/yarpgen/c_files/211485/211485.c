/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_19 += ((((((arr_0 [i_0 + 1]) - (arr_0 [i_0 - 2])))) ? (arr_0 [i_0 + 1]) : ((29711 ? 17756735036344785897 : -4))));
        var_20 = -29690;
        arr_2 [i_0] = (!var_7);
        arr_3 [i_0] = (max(((-26743 ? 0 : 24444)), (((var_9 > (max(29711, 466252141568600203)))))));
    }
    var_21 = ((var_4 ? var_17 : var_8));
    #pragma endscop
}
