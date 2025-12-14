/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_0] = (((!((min(var_3, 4294967295))))));
                var_12 = (max(4294967286, ((-(arr_0 [i_0])))));
                var_13 = (arr_3 [i_0] [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((!(arr_11 [i_4 + 3] [i_1] [i_1] [i_3] [i_1])));
                                var_15 = (max(var_15, ((((((arr_6 [i_0]) + 2147483647)) >> ((((1205484987 ? (((~(arr_8 [i_2] [i_4])))) : 1)) + 19)))))));
                                var_16 = (((((min(1, 4294967295)) ? 28533 : -95915333448611082))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = (((min((~var_11), (-185900344 <= -32115))) != ((((var_5 ? var_7 : var_7))))));
    #pragma endscop
}
