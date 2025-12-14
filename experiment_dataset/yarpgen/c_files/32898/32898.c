/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = var_9;
    var_18 = ((var_13 ? ((max(var_15, var_10))) : 172));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_2] [i_0] [i_0] = ((0 > (arr_0 [i_2] [i_1])));
                        var_19 = (min(var_19, (((((max((arr_8 [i_3] [i_3] [i_3] [i_0 + 1] [17]), (arr_8 [i_3] [16] [i_3] [i_0 + 1] [i_0])))) ? (((arr_8 [i_3] [i_2 + 1] [i_0 + 1] [i_0 + 1] [11]) / (arr_8 [i_3] [i_3] [i_3] [i_0 + 1] [i_0 + 1]))) : (((arr_8 [0] [i_2 - 1] [i_0] [i_0 + 1] [i_0]) ? var_9 : (arr_8 [i_3] [i_3] [i_2] [i_0 + 1] [i_0]))))))));
                    }
                }
            }
        }
        arr_11 [i_0] = ((18446744073709551615 ? (((((var_4 ? (arr_4 [i_0] [i_0] [i_0]) : 15))) ? (((arr_2 [i_0 + 1]) ? -30867 : 65535)) : ((255 ? -119 : 0)))) : ((var_7 ? var_6 : 9))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        var_20 = (((((arr_14 [i_4]) >> (((arr_14 [i_4]) - 118)))) < 173));
        var_21 = (((arr_1 [12]) ? 77 : (arr_6 [i_4] [i_4 + 1] [i_4] [i_4 - 1])));
        var_22 ^= (0 % 1);
    }
    #pragma endscop
}
