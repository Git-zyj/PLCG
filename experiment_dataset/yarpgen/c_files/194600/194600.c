/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = 11298249084129890747;

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = 1;
            var_15 = var_0;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_16 ^= (((max((arr_8 [i_0 + 1] [i_0 + 1]), (arr_8 [i_0 - 1] [i_2]))) ? (arr_8 [i_2] [i_0 + 1]) : ((max((arr_8 [i_0] [i_0 + 2]), (arr_8 [i_0] [i_2]))))));
            arr_13 [i_0] = ((12003568865452035773 & ((((min(6443175208257515842, (arr_5 [i_0] [i_0 + 1] [14]))))))));
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            var_17 = 5051745739094332502;
            arr_16 [i_0] = ((max(var_10, 6443175208257515843)));
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_18 = (arr_0 [6]);
        arr_21 [6] = (((!((((arr_5 [i_4] [i_4] [i_4]) + var_11))))));
    }
    var_19 ^= (min(((min((((1 ? var_7 : var_0))), ((298 ? 22600 : var_8))))), (-1324648898 & 4286725892770585843)));
    var_20 = var_8;
    var_21 = (min(var_21, (((~(max(var_10, var_12)))))));
    var_22 |= (var_6 / var_9);
    #pragma endscop
}
