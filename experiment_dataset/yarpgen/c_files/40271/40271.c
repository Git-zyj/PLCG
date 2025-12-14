/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [7] [i_1] = -4025;
            arr_5 [6] [i_1] [i_0] = -25228;

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = (max(var_17, (((max(-115, 0))))));
                var_18 -= 511;
                var_19 += (max(1, 77));
                arr_10 [i_1] [i_1] [11] = ((((((((arr_6 [i_1] [10] [i_0]) - -148128204))) ? (max(var_8, var_1)) : var_10)) <= (!0)));
                var_20 -= (arr_2 [i_2]);
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_15 [i_1] = ((-(((!(arr_12 [8] [i_1] [i_3] [2]))))));
                arr_16 [10] [i_1 - 1] [i_1] [i_3] = (max(((-572494984 / (arr_6 [i_1] [i_1 - 1] [i_1 - 1]))), (min(3, (arr_6 [i_1] [i_1 - 1] [i_1 + 2])))));
                arr_17 [i_0] [11] [i_1] [0] = (((arr_6 [i_1] [i_1 + 1] [i_1 + 2]) * (max(var_9, (arr_0 [i_1 + 1] [3])))));
            }
        }
        arr_18 [6] [i_0] = max((((((((arr_13 [i_0] [i_0] [4]) ? var_14 : (arr_14 [i_0])))) ? (!11287656718084794582) : (arr_8 [12] [i_0] [i_0] [i_0])))), (min((min(-512, (arr_12 [i_0] [i_0] [6] [i_0]))), var_3)));
        arr_19 [2] = -4015;
        var_21 -= (((-4025 / -76) % ((max((arr_14 [i_0]), (arr_13 [4] [i_0] [i_0]))))));
    }
    var_22 = (min(var_22, var_8));
    var_23 -= (((((77 << (2097151 || var_3)))) ? (var_3 % var_1) : var_6));
    #pragma endscop
}
