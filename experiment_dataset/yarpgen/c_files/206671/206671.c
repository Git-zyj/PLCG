/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = (max(var_20, 10));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_21 *= (!((min(((-(arr_3 [i_1] [i_0]))), 15))));
            var_22 = -18;
            arr_5 [i_0] [i_1 - 1] = ((((1 / (arr_3 [i_0] [i_1])))));
        }
        var_23 = (arr_1 [i_0]);
        var_24 = (max(((~((max((arr_1 [i_0]), 480))))), (~-32)));
        var_25 = (((arr_0 [i_0] [i_0]) ? var_1 : (var_7 ^ var_1)));
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_26 -= ((((min(0, (-2147483647 - 1)))) ? ((14 ? (arr_8 [i_2 + 1]) : ((max(2850604812, 620865468428772724))))) : (var_13 * var_7)));
        var_27 += ((~(arr_6 [i_2])));
    }
    #pragma endscop
}
