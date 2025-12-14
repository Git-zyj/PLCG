/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                arr_9 [i_2] = (var_8 / (((~(arr_6 [i_2] [i_2] [i_0])))));
                arr_10 [i_2] [17] [i_2] = (32767 >> (arr_4 [i_2] [i_1] [i_0]));
            }
            arr_11 [i_0] = ((((min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_0] [15] [i_1])))) << ((min((arr_3 [i_1] [i_1] [i_0]), 59)))));
        }
        var_15 = ((~(!var_3)));
    }
    var_16 *= ((-(max(var_3, ((min(-28342, var_5)))))));

    for (int i_3 = 2; i_3 < 11;i_3 += 1)
    {
        arr_15 [i_3] = (((max((arr_7 [i_3] [i_3 + 1] [i_3 - 1]), (min(var_1, var_10)))) / (arr_14 [i_3])));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            arr_20 [i_3] = (arr_3 [i_3] [i_3] [i_3]);
            var_17 = ((var_5 % (~0)));
        }
        arr_21 [i_3] = (((max(((16580 >> (var_8 - 13598527077743096432))), var_6)) + (((((((arr_2 [i_3] [i_3]) ? var_9 : 1))) || (arr_18 [i_3] [i_3 - 1] [i_3 - 2]))))));
    }
    #pragma endscop
}
