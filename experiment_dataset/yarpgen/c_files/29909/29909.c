/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 20;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_13 = ((-120 ? 9 : 217));
                var_14 = (arr_1 [i_0]);
            }
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                arr_12 [i_0] [i_1] [i_1] = (var_0 ^ var_5);
                arr_13 [i_0] = (arr_11 [i_1] [2] [i_3]);
                var_15 = arr_7 [i_0] [i_1] [i_3];
            }
            for (int i_4 = 3; i_4 < 22;i_4 += 1)
            {
                var_16 = 6;
                var_17 = (((-(arr_8 [i_0] [i_1] [4] [i_4]))) / (arr_9 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 3]));
            }
            arr_16 [i_0] [i_0] |= ((182 ? 134217727 : (((var_7 ? var_7 : 1)))));
        }
        for (int i_5 = 3; i_5 < 21;i_5 += 1)
        {
            var_18 = (min(1829020551, ((((arr_6 [i_0] [i_0] [i_0] [i_0]) < var_2)))));
            var_19 = (min(var_19, ((max(((var_11 ? ((var_11 ? (arr_15 [i_0] [8] [i_0]) : 0)) : (arr_3 [i_0] [i_0]))), ((max((arr_0 [i_5 + 1]), (arr_0 [i_5 + 1])))))))));
        }
        arr_21 [i_0] = (((((max((arr_8 [i_0] [i_0] [i_0] [i_0]), var_10))) ? (max((arr_5 [2] [i_0] [i_0]), 4294705152)) : (arr_0 [i_0]))));
        arr_22 [i_0] [i_0] = (((((max(250, var_0))) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : ((min((arr_17 [i_0] [i_0]), var_2))))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {
        var_20 = (min(var_20, (((2465946745 ? ((((!((((arr_10 [i_6] [i_6]) - var_1))))))) : (((arr_9 [i_6] [i_6] [i_6] [i_6]) ? 7 : (min(var_0, var_2)))))))));
        var_21 *= (max((((arr_15 [8] [i_6] [i_6]) ? 182 : ((128 ? (arr_8 [i_6] [i_6] [21] [i_6]) : (arr_1 [i_6]))))), var_3));

        for (int i_7 = 3; i_7 < 8;i_7 += 1)
        {
            var_22 |= ((((((var_2 && 0) ? 22 : 0))) ? ((((arr_5 [i_7 - 2] [i_7 + 2] [i_6]) && (arr_5 [i_7 + 3] [i_6] [20])))) : 0));
            var_23 = ((((max(var_7, 1829020551))) ? ((max(2465946772, var_1))) : ((var_10 ? var_0 : -1600252732))));
            var_24 = (min((((arr_18 [i_6] [i_7]) ? (arr_18 [i_6] [i_7 + 3]) : (arr_18 [i_6] [i_7]))), (arr_19 [i_7 - 2] [i_7 - 2] [3])));
        }
        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            arr_30 [i_8] [i_6] [i_6] = 1;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 10;i_10 += 1)
                {
                    {
                        var_25 *= 1600252709;
                        var_26 *= (arr_9 [i_6] [i_6] [i_6] [i_6]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
