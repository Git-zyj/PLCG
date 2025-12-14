/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((min(var_12, ((~(max(314828802, 25)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] = ((!(arr_1 [i_0])));
                    arr_7 [i_0 + 1] [1] [i_0] = (arr_3 [5]);
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    arr_11 [i_0] [i_0] = var_11;
                    var_17 = (((!-314828802) ? ((314828802 ? (max(var_5, -314828782)) : ((~(arr_8 [i_0 + 2] [5] [i_0 + 2]))))) : (min(var_8, (max(-314828796, var_5))))));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_18 ^= (((((arr_4 [i_4] [6] [i_0 - 1]) | (arr_10 [i_4] [i_0] [i_0 + 1]))) > (max(((((arr_3 [i_0 + 1]) > -314828782))), (~8075117806600815021)))));
                    var_19 = (min(var_19, (((((arr_1 [0]) / (arr_8 [i_0 + 2] [i_0 + 2] [i_0]))) / (((arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 1]) ? (arr_1 [0]) : var_1))))));
                }
                var_20 = (--314828778);
                arr_14 [i_0] = ((~(min((((arr_4 [i_1] [i_0] [i_1]) + var_0)), -var_10))));
                var_21 = (((((~((var_15 ? 314828782 : 9))))) ? -314828799 : (((((arr_4 [i_0] [i_0] [i_0]) == (arr_2 [4] [i_1]))) ? (~var_0) : ((~(arr_4 [5] [i_0] [i_1])))))));
            }
        }
    }
    var_22 = ((((((-314828783 ? var_15 : 314828809)))) ? (((var_3 || (var_5 && -8275)))) : ((~(~1)))));
    #pragma endscop
}
