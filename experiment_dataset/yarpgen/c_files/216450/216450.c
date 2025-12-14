/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((-1 ? (arr_2 [i_0] [i_0]) : (min((min(17131612168958598957, 63)), 63))));
        arr_3 [i_0] = ((!(!var_1)));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = -7865983613068589108;
            arr_10 [i_1] [i_2] [i_1] = (max((((arr_5 [i_2 - 1]) ? var_7 : var_4)), (arr_5 [i_2 + 1])));
        }
        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_14 [i_1] [i_3] = (min(((min((arr_11 [i_3 - 1] [i_1]), var_11))), -1));
            var_14 = var_0;
        }
        var_15 = var_0;
    }
    var_16 = (!14);
    var_17 = (max(var_17, ((min(((!((min(65535, 195))))), (!7865983613068589118))))));
    #pragma endscop
}
