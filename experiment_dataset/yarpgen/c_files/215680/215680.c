/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_8 ? -5036894178229271161 : ((min(115, 141113362605117602)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, (((-141113362605117579 ? -68 : (!142))))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 |= ((!((((arr_11 [i_2 + 1]) << (((arr_11 [i_2 - 1]) - 58710)))))));
                                var_14 |= ((115 ? 44150 : -141113362605117602));
                                arr_12 [i_3] [i_3] [i_2 - 1] [i_1] [i_1] [i_1] [i_3] &= (-1 & 1123932419527147966);
                                var_15 = ((+(((arr_5 [12] [i_2 - 1] [i_2 - 2] [i_3]) - (arr_5 [i_0] [i_2 - 1] [i_2] [i_3])))));
                            }
                        }
                    }
                }
                var_16 = (((~0) || var_5));
            }
        }
    }
    var_17 = (--141113362605117603);
    var_18 = (min(var_1, var_8));
    #pragma endscop
}
