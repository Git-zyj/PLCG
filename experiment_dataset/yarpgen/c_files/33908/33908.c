/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((max(var_8, var_10))) ? 3002900182 : 1292067113));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 = (3002900182 && var_3);
        arr_2 [i_0] = (805306368 <= 1);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (arr_3 [i_1]);
            arr_6 [i_0] [i_0 + 1] [i_0] = ((-(((arr_1 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))));
            arr_7 [i_0] [i_0] = (((arr_3 [i_0 - 3]) <= (arr_3 [7])));
            arr_8 [i_0] = ((-3002900182 ? 8188 : 11491643453957735455));
            var_13 = (max(var_13, (arr_4 [6])));
        }
        arr_9 [i_0] = (((((arr_3 [10]) ? 1292067114 : (arr_0 [i_0] [i_0]))) - var_9));
    }
    var_14 = 1443312842;
    var_15 = ((~((18127569637629943491 ? var_9 : var_9))));
    var_16 = 805306368;
    #pragma endscop
}
