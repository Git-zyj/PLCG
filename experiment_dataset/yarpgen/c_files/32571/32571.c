/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = ((var_4 ? -15 : ((var_4 >> (((min(var_0, var_4)) - 299204662682407128))))));
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (min(var_13, 3083264406715392274));
        var_14 = ((((((-1 && (arr_0 [i_0] [i_0]))) ? ((var_2 ? 1 : var_4)) : (4518594896252910002 && 6580423856592681446))) + ((((((((arr_1 [4]) > var_8)))) - ((18446744073709551615 ? 246 : (arr_1 [i_0]))))))));
        arr_2 [i_0] = (min(7350612433700629472, 114));
        var_15 += (min((arr_1 [i_0]), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_5 [i_1] = (min((arr_4 [i_1]), var_5));
        arr_6 [i_1] |= (~(((arr_3 [i_1]) ? (arr_3 [i_1]) : 6)));
        var_16 += 58592;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_17 = ((arr_7 [i_2 - 1]) | (~1741346841));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_18 = (arr_3 [i_2 + 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_19 = (min(var_19, (((72057594037927935 ? (arr_10 [i_2] [i_4]) : (arr_10 [i_3] [i_4]))))));
                        var_20 += ((((~(arr_12 [i_3] [1]))) % (arr_17 [i_2] [i_3] [i_2] [i_2 + 1])));
                    }
                }
            }

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_21 *= (((arr_20 [i_2] [i_2 - 1]) - (arr_11 [i_2] [i_2 + 1])));
                var_22 += (arr_11 [i_2] [i_2 + 1]);
                arr_21 [i_2] [i_2] = (((arr_17 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? (arr_8 [i_2 + 1] [i_2 + 1]) : 18446744073709551611));
                var_23 = (min(var_23, (((18374686479671623680 ? (arr_9 [i_2]) : (arr_3 [i_2]))))));
            }
        }
        for (int i_7 = 3; i_7 < 14;i_7 += 1)
        {
            arr_25 [i_2] = -63;
            arr_26 [i_2] [i_7 - 3] = (arr_23 [i_2]);
        }
    }
    var_24 = var_9;
    #pragma endscop
}
