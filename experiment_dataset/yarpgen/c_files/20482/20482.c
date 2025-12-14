/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (min(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : -31401))));
        var_18 ^= (((((arr_0 [i_0] [i_0]) == (arr_0 [i_0] [i_0]))) ? -18446744073709551609 : ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))))));
        var_19 = min((max(-793292557456667613, ((((arr_0 [11] [11]) < -793292557456667613))))), ((max((((arr_2 [i_0] [i_0]) ? 82 : (arr_1 [i_0]))), (arr_1 [i_0])))));
        var_20 *= (max((((arr_0 [i_0] [i_0]) - 793292557456667619)), (arr_0 [i_0] [i_0])));
    }
    var_21 = (min(var_14, ((var_16 ? ((var_14 ? var_9 : 793292557456667613)) : var_5))));
    var_22 = 793292557456667609;
    #pragma endscop
}
