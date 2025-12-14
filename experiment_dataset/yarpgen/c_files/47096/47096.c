/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 -= (1 || 0);
                                var_16 = (max(var_16, var_13));
                            }
                        }
                    }
                    var_17 = 1942978803;
                    var_18 = ((-(min((min(1, var_2)), 1))));
                    var_19 = (((arr_8 [i_2] [i_0] [i_2] [i_0] [i_0] [i_0]) ? (var_11 & var_13) : (min(((max(-718651741, 1))), var_6))));
                }
            }
        }
    }
    var_20 -= ((-(((min(18446744073709551615, -718651730))))));
    #pragma endscop
}
