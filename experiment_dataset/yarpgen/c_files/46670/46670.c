/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] = arr_6 [i_0] [i_0];
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_17 [i_4] [i_4] [14] [i_4] [i_0] = 5730497556438705650;
                                var_11 = (min(var_11, ((((arr_9 [i_3] [i_0] [i_0] [i_0]) % (((((var_0 ? (arr_15 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]) : (arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 2] [i_0]))) ^ 236))))))));
                            }
                        }
                    }
                }
                arr_18 [i_0 - 2] = ((8 ? 64 : 0));
                var_12 = ((0 * 0) % var_1);
            }
        }
    }
    var_13 = (min(var_13, ((((max(var_9, 7699108593172749127))) ? ((min((-9223372036854775807 - 1), 64))) : ((((1 ? var_1 : 13726410976859472989)) % (4720333096850078626 >= 13524)))))));
    #pragma endscop
}
