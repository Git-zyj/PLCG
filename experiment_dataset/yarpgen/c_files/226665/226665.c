/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (min(var_4, ((((((min((arr_5 [i_0]), 25289)))) >= (min(var_5, 430)))))));
                arr_6 [i_0] [i_1] = ((((min(430, 9661285325539358810))) % var_1));
                arr_7 [i_0] [8] = var_2;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                {
                    var_11 = (max(var_11, ((((((var_7 || 6171897549797803036) || var_5)) ? ((((22990 || 10419808978529165788) && 1))) : (!var_3))))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                arr_24 [i_4] [i_4 + 3] [i_4] [i_4 + 3] [i_2] = max((max(18446744073709551614, ((((arr_21 [i_6] [i_2] [i_4] [i_3] [i_2] [i_2]) && (arr_9 [i_2] [i_2])))))), (min((arr_22 [11] [i_5 + 2] [i_2] [4] [i_5 - 1] [i_5 + 4]), ((-32761 ? 576459652791795712 : 6171897549797803040)))));
                                arr_25 [i_2] [i_2] = var_7;
                                var_12 = (max(var_12, (((((max(((max(109, var_7))), (min(var_8, var_8))))) && (((15322979085140943627 && 576459652791795712) && ((((arr_13 [0]) ? var_0 : 22990))))))))));
                            }
                        }
                    }
                    var_13 -= 562949951324160;
                }
            }
        }
    }
    var_14 = 14782;
    #pragma endscop
}
