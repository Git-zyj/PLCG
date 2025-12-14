/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_8;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_16 = (max(var_16, (~-32766)));
            var_17 &= (63 + -21958);

            /* vectorizable */
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                var_18 += (!494369983937701470);
                arr_6 [i_1] [i_1] [i_1] [i_1] = (arr_0 [i_0]);
                var_19 = var_9;
            }
        }
        var_20 = (min(29543, ((21938 ? var_4 : (max((arr_2 [i_0] [4] [9]), (arr_0 [i_0])))))));
        var_21 = (max(var_21, ((((arr_2 [1] [i_0] [i_0]) ? (max((arr_2 [i_0] [i_0] [i_0]), (arr_0 [i_0]))) : var_12)))));
        var_22 -= ((var_2 ? (((arr_1 [i_0]) ^ var_1)) : ((((max((arr_2 [i_0] [i_0] [9]), var_10)) == 32767)))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_10 [8] [i_3] = 22419;
        arr_11 [i_3] &= (arr_8 [11]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_23 = -25;
        var_24 = var_13;
        arr_14 [i_4] [i_4] = var_14;
        var_25 = 494369983937701468;
    }
    var_26 = var_4;

    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        arr_17 [i_5] [i_5] = (max(var_8, (arr_8 [0])));
        var_27 *= ((var_14 ? (arr_15 [i_5] [i_5]) : (((((min((arr_7 [i_5]), -20))) >= -575059363)))));
        arr_18 [i_5] = (~var_0);
    }
    #pragma endscop
}
