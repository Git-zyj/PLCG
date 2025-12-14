/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((((min(var_16, var_5))) && (((((-47 ? -85 : -85))) && var_17)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = (-27 && -505702177159918934);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((!(((var_6 ? 6120296222534453408 : (arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))))) ? var_4 : 5136468743254335414)))));
                            var_21 = var_4;
                            var_22 &= (max(((((arr_4 [i_1] [i_1 + 2]) && (arr_8 [14] [18] [i_1] [i_1 - 2] [i_1] [i_1])))), (max(var_0, 6120296222534453408))));
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 19;i_4 += 1)
                {
                    var_23 *= 16910;

                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_24 = (min(var_24, var_0));
                        var_25 *= (arr_6 [i_0 + 2] [i_1 + 1] [13] [i_4 - 1]);
                        var_26 = (((~(arr_7 [i_0 + 2] [i_1] [i_4] [i_0] [i_5] [i_1 - 1]))));
                    }
                }
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    arr_19 [i_0 + 2] [i_1] [i_6] = ((((((((var_7 ? var_17 : var_5))) ? var_7 : (arr_9 [i_0 - 1] [i_1 - 1])))) ? 5866809449874944143 : (max(var_11, (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 2])))));
                    var_27 = (arr_7 [i_0] [i_1] [i_1] [i_1] [i_0] [i_6]);
                    arr_20 [i_0 + 2] [i_6] = (min((((!(arr_14 [i_6] [i_1] [i_0 + 2] [i_0 + 2])))), (arr_0 [i_1 + 4])));
                    arr_21 [i_6] [i_1] = arr_8 [i_0] [i_1 + 3] [i_1 + 3] [i_0] [i_6 + 2] [i_1];
                    var_28 = (min(var_28, (arr_7 [i_6 + 2] [i_1] [i_6] [i_0 + 2] [i_6] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
