/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((var_8 && (var_0 == var_8)));
    var_13 = (min(var_13, -var_3));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 1]);
        arr_4 [i_0] [i_0] = arr_2 [i_0];
        var_14 = (min(var_14, (((-(arr_2 [i_0 + 1]))))));
    }
    var_15 = (min(var_15, (((((min(((var_8 ? 11526 : 0)), ((min(-23968, 1)))))) ? var_11 : ((~(-23969 == -350881103))))))));
    #pragma endscop
}
