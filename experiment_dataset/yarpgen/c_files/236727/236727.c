/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= var_10;
    var_12 = (max(var_12, (((var_2 ? var_3 : 4572351929870150149)))));
    var_13 = (min(var_9, ((((1 ? var_7 : var_8))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (max((min((arr_2 [21]), (4572351929870150146 - -2023654519))), (((var_0 / (arr_1 [i_0]))))));
        arr_4 [20] = ((1514976694 ? 1653863065401865446 : (~1700034208)));
        var_14 = (min(-var_0, (min(2594933069, 98))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 |= (~-1502366725);
            var_16 = var_6;
        }
        arr_10 [i_1] = ((~(arr_9 [i_1])));
    }
    var_17 = (!var_6);
    #pragma endscop
}
