/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_1;
    var_12 = ((((max(var_6, (2153975326 % 2359307468)))) / ((~(max(var_3, var_6))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 -= -32742;
            arr_6 [i_0] = (((((arr_2 [i_1 - 1] [i_1]) << var_10)) == ((((((4294967295 ? (arr_0 [i_0] [i_1 - 1]) : var_10))) ? (min(var_2, (arr_3 [7]))) : (max(0, 0)))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 12;i_4 += 1)
                    {
                        {
                            var_14 = (((var_9 - (((arr_11 [i_0] [i_1 - 1] [i_0] [5] [i_4] [i_4]) ? var_4 : var_10)))));
                            var_15 *= ((((((var_8 ? var_7 : var_10))) ? (var_0 - var_1) : (~var_1))));
                            arr_15 [i_1] [i_2] [i_4] = ((((((1032336485 * 0) ? ((var_1 * (arr_1 [4]))) : ((((arr_1 [i_0]) ? 145 : 4294967286)))))) ? ((((((var_4 ? (arr_10 [i_0]) : 117)) <= var_0)))) : ((-57145 ? (((5 ? 63 : 57129))) : (max(var_10, 150369527))))));
                        }
                    }
                }
            }
            arr_16 [i_0] [i_0] = 8398;
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_16 ^= ((+(((arr_5 [i_0] [i_5] [i_0]) / (arr_5 [13] [i_5] [i_0])))));
            arr_20 [i_5] [i_5] [i_5] = 9;
        }
        var_17 = (max(var_17, (((((((var_0 ? var_10 : (arr_19 [i_0]))))) ? (((((arr_11 [i_0] [i_0] [i_0] [10] [8] [9]) > var_2)))) : ((((min(var_4, 125))) ? (max(var_6, var_1)) : 8390)))))));
        var_18 = ((((((150369525 ? var_5 : var_8)))) ? (min((var_3 ^ var_10), var_10)) : (((var_5 ? var_6 : 57163)))));
        arr_21 [i_0] [i_0] = ((35769 + (-var_1 * 1)));
    }
    #pragma endscop
}
