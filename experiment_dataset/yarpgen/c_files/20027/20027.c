/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_14 [i_3] [i_3] [i_2] [i_0 - 1] [i_0 - 1] = var_11;
                            arr_15 [i_0] [i_0] [15] [15] = (min(((((arr_7 [i_2] [i_2] [i_2]) - (((max((arr_8 [i_0 + 1] [i_1] [i_3]), -13990))))))), 13524313376413753407));
                            var_17 = (max(var_17, 2133746105539900015));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_18 = (min(var_18, (((-7629603018292621004 ? 7268380163013125616 : 21640)))));
                            var_19 = (max(var_19, ((((arr_11 [i_5] [4] [i_1] [i_0 + 1]) ? 1 : (((arr_13 [i_0 - 1]) ? var_4 : (((61868 ? 1 : 20228))))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = 14288806917751837594;
    var_21 &= var_7;
    var_22 = var_0;
    #pragma endscop
}
