/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (max(-6542545946302113861, 4294967285));
        arr_3 [i_0] = (min(((-(arr_1 [i_0] [i_0]))), ((var_16 * (arr_1 [i_0] [i_0])))));
        var_19 = (min(var_19, (((((~(arr_0 [i_0]))) & ((min(-39, ((~(arr_1 [i_0] [i_0])))))))))));
        arr_4 [i_0] |= (arr_1 [i_0] [i_0]);
        var_20 = (min(var_20, (((var_16 != ((~((~(arr_0 [i_0]))))))))));
    }
    var_21 = var_12;
    var_22 = (max(var_22, ((max(((var_15 ? (min(4294967285, var_7)) : (~var_3))), (var_5 == 4294967285))))));
    var_23 += (((~var_12) % (var_1 & var_17)));
    var_24 = ((((!((max(33, var_17)))))));
    #pragma endscop
}
