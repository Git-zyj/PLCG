/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((-1 ? (!0) : (var_0 & 18446744073709551615)))) ? var_0 : ((((!-706656356) != -1)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_12 = ((((65265 ? -123 : 201)) != 1));
        var_13 = (((3404985220 != 11) * ((var_1 * (arr_2 [i_0 + 4])))));
    }

    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_14 = ((var_7 ? (arr_7 [i_1] [i_1 + 3]) : (arr_1 [8])));
            var_15 = (min(var_15, (-1 / 30198)));
            arr_10 [i_2] [i_1 + 4] [i_1 + 4] = -1;
            var_16 = (((arr_2 [i_1 + 2]) ? ((((arr_0 [1]) != (arr_5 [i_2])))) : var_2));
            var_17 = (!var_1);
        }
        arr_11 [13] [i_1] = (((((-2118752591 ? var_2 : (arr_3 [i_1 + 1])))) ? (arr_7 [i_1] [i_1 + 4]) : (arr_8 [i_1] [i_1])));
        arr_12 [11] = (-((450370263 ? (arr_7 [i_1 + 1] [i_1 + 4]) : (arr_7 [i_1 + 2] [i_1 + 1]))));
    }
    var_18 = (((((var_6 ? (1 - 1) : 1048316716660365847))) || var_9));
    #pragma endscop
}
