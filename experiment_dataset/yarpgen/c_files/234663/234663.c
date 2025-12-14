/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_0));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_17 ^= ((~((-(arr_2 [i_0] [i_0])))));
        var_18 += (~237);
        var_19 |= (max(((0 ? -124 : (-4825455783784445199 ^ 0))), 4218988859));
        var_20 -= ((var_14 ? (((!((min((arr_2 [9] [i_0]), (arr_1 [i_0] [i_0 - 2]))))))) : (((min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0] [i_0]))) & var_14))));
        var_21 = min(((((var_10 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) >> 1)), (((arr_1 [i_0] [i_0 - 1]) ? (arr_1 [1] [i_0 + 1]) : (arr_1 [i_0] [i_0 + 2]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_5 [7] [i_1] = -1999735709;
        var_22 = (arr_0 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_23 = (max(var_23, (arr_1 [i_1] [i_2])));
            arr_8 [i_1] = ((var_3 ? (arr_7 [i_1] [i_1] [i_1]) : ((4825455783784445198 ? -909935893 : 42486))));
        }
        var_24 += var_2;
    }
    var_25 = 0;
    var_26 = ((((min((max(var_9, var_6)), var_9))) ? (((max(57, var_1)))) : ((((((-1999735692 ? var_6 : var_2))) == 2065159938)))));
    #pragma endscop
}
