/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = min(((min(var_5, -27809))), var_6);
    var_14 = ((!(((((min(var_1, var_12))) ? ((var_6 ? var_3 : 36020000925941760)) : var_10)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] [i_0] |= ((((~(var_4 & 27786))) + 0));
    }
    var_15 &= ((max(((var_10 ? 36020000925941760 : var_9)), (~var_5))) > (((~(-32767 - 1)))));
    var_16 = (min(59800, (max((101 || var_11), (~var_7)))));
    #pragma endscop
}
