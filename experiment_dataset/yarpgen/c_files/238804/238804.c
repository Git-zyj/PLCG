/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~(((!(4613 / var_8)))));
    var_15 = (min(var_0, (((15818751487955922062 ? 235 : -1273541379)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {
        var_16 = 1;
        arr_3 [i_0] [i_0] = var_0;
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] &= 33;

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_17 = (arr_5 [i_1] [i_1]);
            arr_11 [i_1] [i_1] [i_1] = (min(1273541385, -98));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_15 [i_1] [i_3] = (-9223372036854775807 - 1);
            arr_16 [i_1] [i_1] [11] = (max(((7869251407689964423 ? (arr_7 [4] [i_3]) : -26)), -1273541379));
        }
    }
    #pragma endscop
}
