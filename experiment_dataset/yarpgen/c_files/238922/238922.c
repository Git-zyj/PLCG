/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(3084406867, 20987)));
    var_18 = (~1210560437);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = (((~1637809130) != ((~(arr_2 [i_0] [i_1] [i_1])))));
                arr_6 [i_1] [i_1] [i_1] = (((!3280165548) ? (((var_5 ? ((-1220923221 ? 85893154 : var_14)) : -725095713))) : (max(840592512, ((var_4 ? var_11 : (arr_3 [i_0] [i_1])))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_4] [i_4] &= (840592496 != 2427030901);
                                var_19 = ((!(!var_0)));
                                arr_15 [i_3] [i_3] [i_1] [i_3] [i_4] [i_1] [i_2 + 3] = -5995069429856905281;
                                var_20 = (max(var_20, (((!(((~(arr_8 [i_0] [i_2 + 2] [i_2] [i_3])))))))));
                            }
                        }
                    }
                }
                arr_16 [i_1] = (arr_12 [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
