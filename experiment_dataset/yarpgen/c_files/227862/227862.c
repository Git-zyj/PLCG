/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (((((((arr_0 [i_0 + 1] [5]) <= -7678029954154218556)))) ? ((((arr_0 [i_0 + 2] [i_0]) << (var_4 - 16852866561785451803)))) : -7678029954154218556));
        var_12 = (((arr_2 [i_0]) ? (arr_2 [i_0 + 2]) : ((((arr_1 [i_0] [i_0 + 2]) >> -7678029954154218532)))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_13 += ((-7678029954154218556 ? ((((max((arr_6 [i_1] [i_3]), var_7))) - (arr_9 [i_2] [i_3]))) : (((arr_8 [i_3] [22] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_8 [i_3] [i_3] [i_3])))));
                    arr_10 [i_3] [i_3] &= var_5;
                    var_14 = (arr_6 [i_1] [i_1]);
                    arr_11 [i_1] [i_1] [i_1] = var_2;
                    arr_12 [i_1 + 1] [i_1] = -7678029954154218571;
                }
            }
        }
        arr_13 [i_1] = ((((((arr_9 [i_1] [12]) < (arr_9 [6] [6])))) - (((-(((arr_3 [i_1] [i_1]) - (arr_5 [i_1] [i_1]))))))));
        var_15 = (max(var_15, ((((var_2 + (arr_8 [10] [i_1] [i_1 - 1])))))));
        arr_14 [i_1] [i_1] = ((-7678029954154218556 * ((((arr_3 [15] [i_1 + 1]) - (arr_3 [i_1 - 2] [i_1 + 1]))))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        var_16 += (((-7678029954154218571 + 9223372036854775807) << (127 - 127)));
        var_17 = (min((arr_7 [i_4]), ((((arr_8 [18] [i_4] [i_4]) > (arr_6 [0] [0]))))));
        arr_18 [16] [i_4] = max(7678029954154218555, (-7678029954154218560 != var_6));
    }
    var_18 = (min(var_18, ((max(((var_10 >> (7678029954154218571 - 7678029954154218565))), var_5)))));
    #pragma endscop
}
