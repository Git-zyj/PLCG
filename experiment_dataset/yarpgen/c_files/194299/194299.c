/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((var_4 ? (max(0, -1)) : 0)) >= -var_5));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((((((var_2 ? (arr_1 [i_0]) : var_3))))) > ((((var_10 >= (arr_1 [i_0]))) ? ((5 % (arr_0 [i_0]))) : (((min(0, (arr_0 [i_0])))))))));
        arr_2 [i_0] = (~25);
    }
    var_13 = ((((~(min(var_5, var_3)))) >= (((10 * var_9) ? (((3 ? 32767 : 109))) : (511 % 18446744073709551105)))));

    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = ((((!(arr_3 [i_1]))) ? (arr_3 [i_2]) : ((530 ? (arr_6 [i_1] [i_2]) : var_5))));
            var_14 = (((0 * var_0) ? ((530 * (arr_5 [i_1]))) : (var_10 * var_4)));
            arr_9 [i_1] [i_1] = (((-444838463 ? 933246022 : 14)));
        }
        arr_10 [i_1] = 255;
        arr_11 [i_1] = (-26 >= 506);
    }
    var_15 = (((((18446744073709551085 >= 515) ? (~3556267654667284663) : ((-1 ? var_6 : -26)))) << (min((max(var_1, 8388544)), (var_6 > 1)))));
    #pragma endscop
}
