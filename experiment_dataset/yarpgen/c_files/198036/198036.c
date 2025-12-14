/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = ((((((19 ? var_5 : var_3)) | var_3)) <= var_6));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] [11] = min((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : 68)), (max(35, (arr_0 [i_0] [i_0]))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_8 [i_1] [i_0] = (!var_9);
            arr_9 [i_0] [i_1] = 30;
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_13 [i_2] = 1;
            var_12 *= var_4;
        }
    }
    var_13 = var_9;
    #pragma endscop
}
