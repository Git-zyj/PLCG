/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 7424378831798363320;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = 5403891232929773008;
        var_18 = var_4;
    }
    for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = min((48 / 112), 1);
        var_20 += ((+(max(((((arr_4 [1]) & var_10))), 18319))));
        var_21 = ((((max(137, 66977792)) | ((119 ? 116 : 18446744073709551615)))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] = (((!var_16) - 0));
        var_22 = 18446744073709551615;

        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_23 = ((!(var_4 / 31)));
            arr_11 [i_2 - 2] [i_3] = 12655;
        }
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            var_24 = (max(var_24, ((((67 ? var_15 : 43436))))));
            var_25 = (((((var_4 << (((arr_5 [15] [i_4 + 2]) - 55245))))) ? (arr_4 [i_4]) : (arr_4 [i_2])));
            var_26 = (160 <= 0);
            arr_16 [i_2] [i_2] [i_2] &= 4184174543;
            arr_17 [i_2 + 1] [9] = ((288212783965667328 != (!var_1)));
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 17;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_27 [i_6] [i_6] [i_6] = 11359565387428532091;
                    var_27 = 1596160050;
                    var_28 ^= var_7;
                    arr_28 [i_6] [i_6] = ((var_2 / var_15) > (max(var_1, ((var_8 ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : 4846997079234498265)))));
                }
            }
        }
    }
    var_29 = 127;
    var_30 = (max(var_30, -71));
    #pragma endscop
}
