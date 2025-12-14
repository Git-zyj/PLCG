/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_8 ? var_3 : var_3))) ? ((var_3 ? ((-79 ? 248 : -9223372036854775798)) : (((135 ? 127 : 138))))) : var_0);
    var_11 = (max(var_11, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (((((-9223372036854775789 ? var_4 : var_8))) ? ((-1692516504 ? -9223372036854775789 : var_5)) : (((85 ? var_3 : 9)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_4] = ((((((arr_6 [i_1 - 1] [i_2 + 2] [18] [i_2 + 2]) ? (arr_6 [i_1 - 1] [i_2 + 2] [i_2] [i_2 - 1]) : 43255))) ? ((var_7 ? 151 : var_4)) : ((10515 ? 11 : 119))));
                                var_13 = ((((-22680 ? -9223372036854775794 : var_5))) ? ((var_3 ? 168922993 : 143)) : (((arr_0 [i_1 + 1] [i_2 + 1]) ? 244 : 10517)));
                            }
                        }
                    }
                }
                var_14 = (((((var_1 ? var_8 : var_9))) ? (((120 ? -32390 : 187))) : ((-122 ? 391017534386999210 : 155))));
            }
        }
    }
    #pragma endscop
}
