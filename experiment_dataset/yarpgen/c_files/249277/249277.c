/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 = max(((((-119 ? 127 : 1)))), (var_3 | 1299828606));
    var_18 &= var_10;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = (-1839362372 + 63);
        arr_3 [i_0] = 1;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = ((var_4 * ((4294967292 * (arr_4 [i_1])))));
        arr_7 [i_1] [i_1] = (arr_4 [i_1]);
        arr_8 [i_1] [i_1 + 3] = (((arr_5 [i_1] [i_1]) ? (((((max((arr_5 [i_1 + 2] [i_1 + 2]), 750592500)) <= (~26331))))) : ((-(((arr_4 [i_1]) ? 2788268803187583734 : 386480270))))));
    }
    for (int i_2 = 4; i_2 < 11;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_19 = (((((1 ? var_12 : -6144))) ? -558567948 : -6144));
            var_20 = (max(var_20, ((((-1 ? (((arr_14 [i_2] [i_3 - 1]) ? 2148787796479735515 : (arr_9 [i_2]))) : (arr_11 [i_3 + 1] [i_2 - 4])))))));
        }

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            var_21 = var_1;
            var_22 = (((558567925 ? 255 : var_5)));
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_19 [i_2] [i_5] [i_2] = ((+(((!var_10) ? (((arr_4 [i_2]) ^ var_14)) : (arr_9 [i_2 - 4])))));
            arr_20 [i_2] = ((!((((arr_18 [i_5] [i_2]) ? 6135 : 0)))));
            var_23 *= (arr_18 [i_5] [11]);
        }
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            var_24 = (max(((((arr_21 [i_2 + 1] [i_6 - 3]) / -558567960))), (arr_13 [i_2])));
            var_25 *= var_6;
            var_26 = (((((1 ? var_14 : 2147483637)))));
        }
    }
    for (int i_7 = 3; i_7 < 14;i_7 += 1)
    {
        var_27 = (min((max(0, (max((arr_26 [i_7 + 2] [1]), var_14)))), (((arr_25 [i_7 - 2]) * 19219))));
        arr_27 [i_7] [i_7] = (((((896 ? (!19219) : 241))) ? (arr_25 [i_7 - 3]) : (((arr_25 [i_7 - 3]) ? (((arr_25 [i_7]) ? (arr_5 [11] [i_7]) : 65504)) : (arr_5 [i_7] [i_7 + 2])))));
    }
    #pragma endscop
}
