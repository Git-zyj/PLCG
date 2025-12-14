/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (max(13695113739245865568, (((~(arr_0 [i_0] [i_0]))))));
        var_13 = (min(var_13, ((max((min((min(-4604650325961131768, -1067475710)), (arr_1 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) | (((arr_0 [i_0] [i_0]) >> (((arr_0 [i_0] [i_0]) - 2959109998619237467)))))))))));
    }
    var_14 = ((((~12525608859680477919) ? ((var_7 ? var_11 : 74401125604910589)) : var_1)));
    #pragma endscop
}
