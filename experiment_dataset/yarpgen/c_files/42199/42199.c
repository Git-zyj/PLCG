/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((min((!var_2), (((min(var_3, var_7)))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((((min((arr_0 [i_0 + 1]), var_8)) / var_2))))));
        var_12 = (min(var_12, ((min(((-73 ? (max(-1168574521, (arr_1 [i_0]))) : (((arr_0 [i_0]) ? (arr_0 [2]) : 6291)))), (((((((arr_0 [i_0 + 1]) > (arr_0 [i_0])))) < (min(-73, 131070))))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_11 [5] [i_1] [i_1] [5] = (((-1168574524 + 9223372036854775807) >> (65535 - 65533)));
                        var_13 = (max(var_13, var_9));
                        arr_12 [5] [i_1] [i_3] [i_3] [6] [i_3] = var_0;
                    }
                }
            }
        }
        var_14 = (min(var_14, (((max(((var_2 ? -39 : (arr_8 [i_1] [4] [i_1 + 1])), (var_1 ^ 25236))))))));
        var_15 = (max(((((-1 || (arr_10 [9] [i_1 - 1] [i_1] [7] [5] [i_1]))) ? var_8 : (max(var_8, var_5)))), (arr_7 [i_1 + 1] [i_1])));
    }
    var_16 = ((-(max(((min(25466, var_2))), (min(-1375481092, 786162884))))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    var_17 = (((((!((!(arr_2 [i_5])))))) + (((((var_0 ? var_3 : 29161)) <= (arr_17 [10] [10] [i_7]))))));
                    arr_21 [8] [i_6] [i_7] = 14;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 4; i_8 < 21;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 22;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 22;i_10 += 1)
            {
                {
                    var_18 = ((!(-16695 || -6789318570453934488)));
                    arr_31 [i_10] [i_8 - 4] [i_10] [i_8 - 3] = (arr_25 [i_9]);
                    arr_32 [20] [19] [i_8] [i_8] = min((((arr_30 [i_8 + 1] [i_8 + 1] [i_8 - 4]) ? 8109715946967173054 : (arr_30 [i_8 - 1] [i_8 - 2] [i_8 - 1]))), (arr_30 [i_8 - 4] [i_8 + 1] [i_8 + 1]));
                    arr_33 [i_8 + 1] [i_8 + 1] = (min(-10794, (((var_5 == (arr_24 [i_8 - 1]))))));
                    var_19 = -24922;
                }
            }
        }
    }
    #pragma endscop
}
