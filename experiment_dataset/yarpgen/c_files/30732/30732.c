/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (min(((((((arr_0 [i_0 - 1] [i_0 - 1]) << 19))) ? 3594950137 : (arr_0 [i_2 + 1] [i_1 + 1]))), var_0));
                    arr_6 [i_0] [i_1] [i_2 - 1] [i_1] = 3958767517;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_3] [13] [i_4 - 1] [i_3] = ((-2088177692 ? 3958767518 : 0));
                                var_16 = (min(var_16, var_3));
                                var_17 = ((17912888172941496103 ? (min(((var_14 ? var_6 : var_7)), (((336199791 ? (arr_11 [i_3] [i_1] [i_2 + 1] [i_3] [4] [i_2] [i_3]) : var_8))))) : ((((3958767513 ? var_7 : 336199783))))));
                            }
                        }
                    }
                    var_18 = ((((~3833343521) ? (((arr_1 [i_0 + 3]) ^ 3958767504)) : var_0)));
                    arr_13 [i_0] [i_1] [i_2 - 1] = (arr_5 [i_0 + 2] [i_1 + 3] [i_2 - 1] [i_2]);
                }
            }
        }
    }
    var_19 = var_12;
    #pragma endscop
}
