/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_15 = 548864338;
        arr_4 [1] [1] &= (((((+((548864341 ? (arr_3 [i_0]) : var_7))))) ? 0 : (max((min(3746102957, (arr_1 [14]))), var_0))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                var_16 = 7;
                arr_10 [i_1] [i_0] = var_10;

                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_17 = ((-1 ? (((-5140 ? var_7 : var_12))) : (~var_5)));
                    var_18 += 548864339;
                    arr_14 [i_3] [i_3] [i_2] [i_3] [i_0] &= ((~(arr_8 [i_3] [i_2] [i_2 - 1] [i_2])));
                    var_19 = ((-(arr_2 [i_0 - 2] [i_2 - 1])));
                    var_20 = (!var_11);
                }
                var_21 ^= ((var_11 ? (arr_11 [i_0] [2] [2] [i_2] [i_2]) : (arr_0 [1])));
            }
            var_22 = ((+(max((arr_7 [i_1 + 1] [i_0] [i_1 + 2] [i_1]), 2727232216))));
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_23 = 7;
            arr_17 [i_0] [i_4] = 0;
            var_24 = (max(var_24, (arr_5 [i_0 - 1] [i_0 - 3] [i_0 - 2])));
        }
    }
    var_25 = var_4;
    #pragma endscop
}
