/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_14 = (min(var_14, (((-(((arr_0 [i_0]) ? (((arr_0 [i_0]) ? var_2 : 1)) : ((((arr_1 [i_0] [i_0]) ? 1 : 1))))))))));
        var_15 = ((((((7130 ? (arr_0 [i_0]) : var_3)) - ((1 + (arr_0 [i_0]))))) << (((((((1 ? 1 : 232))) ? (arr_0 [i_0]) : var_5)) - 1394842917893131877))));
        var_16 = (min(var_16, ((min(((118 ? 1 : (arr_0 [i_0]))), ((~(arr_0 [i_0]))))))));
    }
    var_17 = (min(var_17, 7480304698507177569));
    var_18 = -1;

    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] = ((((((((arr_2 [i_1] [i_1]) <= (arr_2 [i_1] [i_1 - 1])))) >> (max(1, -8913320203927661598)))) / (arr_2 [i_1] [i_1 - 3])));
        var_19 = (max(var_19, ((((arr_3 [i_1]) ? 1 : -1)))));
        arr_5 [i_1] [i_1 - 2] = ((2602577553 ? 37864 : 228));
        var_20 = ((21 ? (!1) : 99));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_21 = (max(var_21, 17802));
        arr_9 [i_2] = (arr_7 [i_2] [i_2]);
        arr_10 [i_2] [i_2] = ((1 - (1 || 8191)));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3 - 2] [i_3 - 2] [i_4] = (arr_2 [i_2] [i_3 + 2]);
                    arr_16 [i_2] [i_3] = ((1 ? 65535 : (min((((31 ? var_12 : 2356492912))), (1632054444730587139 / -2134968600930254138)))));
                }
            }
        }
    }
    #pragma endscop
}
