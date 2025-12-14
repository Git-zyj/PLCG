/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (!1);
                arr_6 [i_0] [i_1] = 1;
                arr_7 [i_0] [i_0] [i_0] &= (((((max(3818257176, (arr_4 [i_0]))))) | ((min((min((arr_4 [i_0]), (arr_2 [i_0] [i_0]))), (arr_3 [i_0]))))));
            }
        }
    }
    var_18 = ((min(476710120, 476710125)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_19 = (((((~var_0) ? (!140) : ((15021 ? -1369699008 : 11457)))) << ((((~(((arr_4 [i_2]) | (arr_8 [7]))))) + 32591))));
                arr_12 [5] [i_3] = -60;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_20 = ((-(1 & var_16)));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_21 = (((arr_14 [1]) ? (max(1, (var_1 - 10137529497840839804))) : (((~(arr_4 [i_4]))))));
                            var_22 = (((((((max(476710120, (arr_20 [i_4] [i_5])))) ? (arr_18 [i_7] [i_7] [i_7]) : (((!(arr_18 [i_4] [i_4] [i_4]))))))) + (max((((arr_9 [i_5]) ? 1369699017 : (arr_22 [i_4] [i_5] [7]))), (arr_0 [5])))));
                        }
                    }
                }
                arr_23 [i_4] = (max(((-1369698986 ? (10993450902632886380 == 1) : (max((arr_10 [i_4] [i_4]), (arr_22 [i_4] [i_4] [i_4]))))), var_12));
            }
        }
    }
    #pragma endscop
}
