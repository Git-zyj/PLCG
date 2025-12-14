/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= var_1;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (arr_2 [i_0]);
        var_12 = ((~(arr_2 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [22] [i_1] [2] [i_1] = (((((-(arr_2 [i_0])))) ? (arr_0 [i_1]) : (((!(arr_7 [i_0] [i_1] [i_0]))))));
                    var_13 = (min(var_13, (((-(((arr_3 [10]) ? var_4 : var_0)))))));
                    var_14 = ((arr_4 [1] [i_0] [i_2]) ? (arr_4 [i_0] [i_1] [i_0]) : (arr_1 [i_2]));
                    var_15 = (min(var_15, ((((arr_1 [i_1]) ? 6896008419152986700 : (1 || 1))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_16 = ((((7135 ? (((arr_0 [i_3]) % 4294967295)) : ((min(827905695, -7136))))) <= (arr_1 [i_3])));
        arr_12 [i_3] = 4294967295;
    }
    for (int i_4 = 2; i_4 < 8;i_4 += 1)
    {
        var_17 = (-56 ? ((1 ? 4294967288 : 106)) : -14029);
        var_18 -= (((((-(arr_10 [i_4] [i_4])))) || (-var_3 * 7119)));
        var_19 = (!1);
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_20 = (4294967284 - 32767);

        /* vectorizable */
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_21 = 4294967295;
                var_22 = (arr_2 [8]);
                var_23 *= ((!(arr_16 [i_5])));
                arr_21 [i_5] [i_5] [i_5] [i_7] = (arr_20 [i_5] [0] [i_5] [0]);
            }
            var_24 = (((arr_0 [i_6 - 1]) * (arr_0 [i_6 - 1])));
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            var_25 = (min(var_25, (((1 ? 0 : 4294967295)))));
            arr_26 [i_8] [i_8] [i_5] = (((((((arr_1 [23]) ? 1 : 77)))) ? var_6 : ((max(((32767 ? 0 : 127)), ((min(1, 127))))))));
            var_26 = (max(var_26, var_7));
        }
    }
    #pragma endscop
}
