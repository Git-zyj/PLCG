/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = 11077557473290307529;
                    arr_9 [i_0] [i_1] = min((arr_8 [i_2] [i_2] [i_2] [i_1]), (((!(((var_7 << (-13 + 22))))))));
                }
            }
        }
    }
    var_22 = 1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            {
                var_23 -= (((arr_7 [i_3] [i_4] [i_4] [i_3]) ? 1 : var_14));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_24 += (!var_0);
                                arr_21 [i_7] [i_4] [0] [i_5] [i_7] = var_1;
                            }
                        }
                    }
                }
                var_25 -= (4294967295 <= 18446744073709551604);
                arr_22 [i_3] [i_4] [i_4] = (min(((~(max(var_9, var_1)))), ((-14 + ((max(152, 1)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            {
                var_26 = ((((~(1 & 1)))) ? (((1 | 1) & -92826296)) : ((~((var_17 ? 727987142 : 1)))));
                arr_28 [i_8] = (arr_8 [i_8] [i_9] [i_8] [i_8]);
            }
        }
    }
    #pragma endscop
}
