/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_12 = ((~var_6) % (arr_8 [i_0 - 1] [i_0 + 1] [i_0 + 3] [i_1 - 1] [i_1 + 1] [i_2 - 1]));
                                arr_12 [i_0] [i_0] [i_1] [i_3] [i_0] [1] = ((11425645932327283760 ? ((302093132 ? 3992874164 : 768)) : (197 < 3512606334)));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1 + 1] = ((+(((((arr_6 [i_0 + 3] [i_1 - 1] [i_1 - 1] [6]) ? var_4 : var_0))))));
                var_13 = var_2;
                var_14 = ((((((~(arr_1 [i_0])) <= (arr_7 [12] [10] [i_1]))))));
            }
        }
    }
    var_15 = (((((-var_2 ? var_7 : (((var_1 ? var_2 : var_2)))))) ? var_6 : (!-11123665031339202099)));
    var_16 = ((((var_11 ? ((var_8 ? var_5 : 302093132)) : (((var_6 ? var_10 : var_10))))) != (var_3 < var_2)));
    var_17 = ((~(!11702)));
    #pragma endscop
}
