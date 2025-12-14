/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_19 = (((min((~2143289344), (~var_11)))) ? (((var_3 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) : (max(((var_4 ? (arr_0 [i_0 - 1]) : var_18)), 0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_20 = ((32403 | (((((arr_8 [i_0] [i_1] [i_2] [i_3] [i_0]) ? (arr_0 [i_0 - 1]) : var_17)) | ((max((arr_9 [i_3] [i_3]), -488533635)))))));
                        var_21 = (((((arr_0 [i_0 + 1]) - 123))) ? ((var_4 + (arr_0 [i_0 - 2]))) : (arr_0 [i_0 - 1]));
                        var_22 = ((((~(((arr_7 [i_1]) / var_6))))) && ((max(var_16, (arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])))));
                    }
                }
            }
        }
        var_23 = (((arr_0 [i_0]) || (((((((arr_4 [i_0 + 1] [i_0] [i_0 - 2] [i_0]) < (arr_0 [i_0 - 1])))) | -117)))));
    }
    var_24 = ((var_0 ? var_8 : -116));
    var_25 = var_15;
    #pragma endscop
}
