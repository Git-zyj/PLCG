/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_9 < (((max(var_2, var_6))))));
    var_20 = (max(var_20, ((min((var_11 < var_1), (((-39522 - (var_16 - 1)))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [12] |= ((~(arr_1 [i_0])));
        var_21 -= ((!(arr_0 [8])));
    }
    #pragma endscop
}
