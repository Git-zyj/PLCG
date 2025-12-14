/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_1] = var_14;
            arr_8 [0] = ((42377 ? 8191 : 3734238887211734281));
            arr_9 [i_0] [i_1] [i_0] = (var_1 ? ((3 ? ((var_2 ? var_6 : (arr_5 [12] [i_1 - 2] [i_1]))) : var_0)) : -6770760833980106003);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_12 [1] = ((var_1 ? (var_2 & var_6) : 7444));
            arr_13 [i_0] [i_0] [i_2] = (var_2 ? (((arr_2 [i_0] [i_2]) ? 7616391117353075351 : -101)) : var_1);
            var_15 *= ((((var_6 ? var_2 : var_7))) ? (~var_13) : ((9223372036854775807 ? (arr_2 [i_0] [i_2]) : var_6)));
            var_16 = (((arr_2 [i_0] [i_2]) << 15));
            arr_14 [i_0] = ((!(arr_0 [i_0])));
        }
        var_17 = var_11;
        var_18 ^= ((!5917909384740597899) >> (!var_14));
    }
    var_19 = (max(var_19, (((24631 ? var_9 : (!var_8))))));
    #pragma endscop
}
