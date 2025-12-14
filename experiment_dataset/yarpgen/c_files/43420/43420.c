/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (max((arr_1 [i_0]), ((7992 < (arr_1 [i_0])))));
        var_18 = (min(5282, (((arr_1 [4]) - ((((arr_0 [8] [i_0]) ^ var_11)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = ((~((((arr_0 [i_0] [i_1]) ? (arr_5 [i_0] [i_1] [2]) : 57543)))));
                    var_20 = 31761;
                    arr_8 [i_2] [i_1] [i_1] [i_2] = ((max((arr_0 [6] [8]), (arr_0 [i_2] [4]))) ? ((max((arr_0 [i_0] [1]), 12738))) : (min(27, 0)));
                    var_21 += (max((!5616), ((((((arr_7 [i_0]) >> (65535 - 65522)))) ? (((9223372036854775807 >= (arr_0 [i_1] [i_2])))) : 5622))));
                }
            }
        }
        var_22 += min((((arr_4 [i_0] [i_0] [i_0]) & 0)), (!var_4));
    }
    var_23 = var_7;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            {
                var_24 ^= (min(var_15, ((((max((arr_11 [i_3]), 43111)) < (((var_0 <= (arr_11 [i_4])))))))));
                var_25 = (arr_13 [i_4] [i_4] [i_3 - 1]);
                arr_14 [6] = (max(((min(65535, (arr_11 [i_3 + 3])))), 33749));
            }
        }
    }
    #pragma endscop
}
