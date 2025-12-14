/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = (!33553920);
    var_14 = 80;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 = ((-(((~var_2) ? 76 : (arr_1 [1] [i_0])))));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_16 += ((((((arr_5 [i_0] [1] [i_1]) ? -1 : (arr_2 [i_1] [i_1]))) & -0)));
            arr_6 [i_0] [i_0 - 2] [i_0] = (min((((arr_5 [i_0 + 2] [i_0] [i_0 + 1]) ? (arr_5 [i_0 + 3] [i_0] [i_0 + 1]) : (arr_5 [i_0 + 1] [i_0] [i_0 - 2]))), (arr_5 [i_0 - 3] [i_0] [i_0 + 4])));
            var_17 -= ((-(((arr_1 [i_0 + 1] [i_1 - 2]) * (arr_1 [i_0 - 1] [i_1 + 3])))));
        }
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            arr_11 [i_0 + 4] [i_0] [15] = (arr_3 [i_0 - 1]);
            arr_12 [i_0] = ((((((((arr_4 [13] [i_2 + 4]) ? -127 : var_7))) ? (~var_1) : (arr_8 [i_2 + 1] [i_0]))) >= var_9));
            arr_13 [i_0] [i_0] = (arr_1 [i_2 + 1] [i_0 - 3]);
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_23 [i_5] [i_0] [i_3 - 2] = ((-((((arr_1 [i_0 - 1] [i_4 + 1]) || -2859515309803898219)))));
                        var_18 = min(((-(min(14, 1)))), ((((arr_9 [i_0] [i_5 + 1]) != (((-28 && (arr_16 [i_0 - 2]))))))));
                        arr_24 [i_0] [i_0] = (((((arr_5 [i_5 - 1] [i_0] [i_3 + 1]) * 4294967287)) == (arr_5 [i_0 + 3] [i_0] [i_0 + 1])));
                        var_19 = ((((((arr_20 [i_4] [i_4 + 2]) ? (arr_20 [i_4] [i_4 + 1]) : 191))) ? (arr_20 [i_4] [i_4 - 1]) : (((arr_20 [i_4 - 1] [i_4 - 1]) ? (arr_20 [i_4] [i_4 - 1]) : (arr_20 [i_4] [i_4 - 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
