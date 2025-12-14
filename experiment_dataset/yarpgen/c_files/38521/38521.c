/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = 4761;
                    var_12 = ((-((((max(25387, (arr_4 [i_0] [i_2])))) ? -48025 : (arr_6 [i_0] [i_0])))));
                    var_13 = ((0 | (min(3803144498, (arr_3 [i_0 - 1] [i_0 - 1])))));

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        arr_10 [i_0 - 1] [i_0 - 1] [i_3] = (((((arr_9 [i_0] [i_0] [i_3] [i_0] [i_0] [9]) && (arr_1 [i_0 - 1] [i_0 + 1]))) ? var_2 : (arr_6 [i_0 - 1] [i_3 + 1])));
                        var_14 = (max(var_14, ((((arr_5 [i_0 + 1] [i_3 - 1]) ? var_0 : var_4)))));
                        arr_11 [i_3] [i_3] [i_3 + 1] [9] = ((var_5 & ((var_6 ? (((arr_5 [i_0] [i_0]) << (((-12054 + 12074) - 19)))) : (arr_7 [i_0] [i_0] [7])))));
                        arr_12 [i_0] [i_0 + 1] [i_0] [i_3] = (((arr_7 [i_0] [i_1] [i_3]) ? (max((((12053 ? var_3 : (arr_5 [4] [i_3])))), var_10)) : (((var_10 ? (arr_5 [i_3] [i_2]) : 29)))));
                        var_15 = (max(var_9, var_0));
                    }
                }
            }
        }
    }
    var_16 = (((max(((max(var_5, var_2))), (var_4 / 56))) / var_0));
    var_17 &= (max((((-53 + -2) - var_4)), (((var_10 ? var_8 : 57808)))));
    var_18 = (min(var_18, ((((((((max(5928620809060011212, var_4))) ? (((max(var_9, var_5)))) : var_2))) || ((((var_2 ^ var_4) & (((var_4 ? var_2 : 65072)))))))))));
    var_19 = (min(var_4, (((-(var_8 * 0))))));
    #pragma endscop
}
