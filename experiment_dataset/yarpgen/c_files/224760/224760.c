/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((min(125792467, ((4294967295 << (var_2 - 7566544761078893494)))))) ? (max((min(var_2, 1)), ((max(255, 1))))) : (!255)));
    var_18 = (((!-1) ? ((~((0 ? 1 : var_0)))) : 255));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = (max(var_19, (min(127, (~var_10)))));
                    var_20 = (min((((127 << (127 - 124)))), ((-1565344803145603305 ? 158 : 0))));
                }
                arr_8 [i_0] &= (((127 ? ((var_11 ? var_10 : (arr_1 [i_0]))) : ((var_8 ^ (arr_5 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_21 = 1;
                    var_22 = (((~var_0) ? ((((((var_14 ? var_3 : var_7)) >= 1)))) : (min(1, ((min(var_0, var_16)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_23 = var_11;
                                arr_23 [i_3] [i_5] [i_6] = var_7;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
