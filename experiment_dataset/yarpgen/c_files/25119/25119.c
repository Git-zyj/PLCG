/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= max((var_7 & var_9), (max((~17236), (var_3 >= var_8))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (min(var_14, var_11));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [20] = arr_5 [i_0] [i_0];
            var_15 = (~var_5);
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_16 = (min(var_16, (arr_5 [i_2] [i_2])));
            arr_10 [i_0] [i_2] = (((arr_7 [i_0]) ? var_1 : ((var_3 ? ((var_8 | (arr_8 [i_0]))) : ((1 ? -9591 : 13804801279416339564))))));

            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                arr_14 [i_2] [i_2] [i_3] &= (max((((arr_0 [i_0]) ? (arr_11 [i_0] [i_0] [i_0] [i_2]) : (var_12 >= var_12))), ((-1242988313 ? 9590 : -51))));
                arr_15 [7] [i_2] [i_0] [15] = (~-1);
                var_17 = -4262946775978950631;
                arr_16 [i_0] [i_0] = (!var_4);
                var_18 = var_3;
            }
            var_19 = ((((((((arr_13 [i_0] [i_2] [i_2]) + 2300457877))) + ((var_10 - (arr_9 [i_0] [i_0]))))) + (arr_12 [i_0] [i_0])));
        }
        var_20 = (max((((0 ? 1 : 0))), ((1 ? 125 : (((max(1, 1))))))));
        arr_17 [i_0] = (((((arr_1 [16] [i_0]) ? (arr_2 [i_0]) : (((29 ? (-9223372036854775807 - 1) : -32763))))) > (((1 > 9223372036854775807) ? ((((-32767 - 1) ? var_12 : -122))) : (~var_8)))));
        var_21 = (max(var_21, -0));
    }
    var_22 = (18446744073709551605 % var_2);
    var_23 = (min(var_23, var_6));
    #pragma endscop
}
