/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_11 = (max(var_11, (arr_6 [i_0])));
                                var_12 = (max(var_12, -87));
                                var_13 = ((((arr_4 [i_1 - 2] [i_4] [i_4 + 1]) <= (((~(arr_8 [i_4] [i_1 + 1] [i_1 + 1] [i_0])))))));
                            }
                        }
                    }
                    var_14 += (arr_5 [i_2] [11] [i_1] [i_0]);
                    var_15 = ((87 ? 0 : 8796093021696));
                    var_16 = ((~(((arr_0 [i_1 + 2] [i_1 + 1]) ? (arr_0 [i_1 - 1] [i_1 + 2]) : var_0))));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((min(var_8, var_6))) ? var_3 : (((49152 ? 558209636 : 65534)))))));
    #pragma endscop
}
