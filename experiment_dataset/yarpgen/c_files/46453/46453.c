/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;
    var_12 = ((((((var_10 >= 142) ? (!0) : (max(70, 377847185))))) * ((-8612775323924564933 ? 7 : 9266757325016559386))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 = (((-9223372036854775807 - 1) ? var_4 : var_3));
        arr_3 [i_0] = (((((-20 + 2147483647) >> (9179840923573056316 - 9179840923573056285))) % var_6));
    }
    var_14 = var_2;
    #pragma endscop
}
