/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225284
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_11 = ((((max(1920, 1920))) ? (max((arr_6 [i_0] [i_1] [i_2]), (arr_7 [18] [i_2]))) : (((((arr_5 [i_1]) ? 4294967295 : (arr_7 [i_3] [i_1])))))));
                        var_12 -= (((var_0 ? (arr_2 [i_0]) : -1921)));
                    }
                }
            }
        }
        var_13 = arr_8 [i_0] [i_0] [3] [i_0] [i_0] [i_0];
        var_14 = ((max(18446744073709551614, 1920)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_15 = 892402443;
        var_16 = ((((((arr_10 [i_4] [i_4] [i_4] [i_4] [i_4]) - (arr_12 [i_4])))) ? (arr_11 [i_4] [i_4]) : (arr_2 [i_4])));
    }
    var_17 = (~(((((var_7 ? 11839992933109158262 : var_3))) ? (70368744177662 && 1853372418941393801) : ((3701 ? -6630702245427655254 : var_2)))));
    var_18 = max((max((max(var_8, var_7)), var_1)), ((((max(1920, var_1)) == var_8))));
    var_19 = (18998726609323851 ? 7945753988648863040 : 18446744073709551615);
    #pragma endscop
}
