/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((15 > 15) - ((-(var_6 + var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [1] [i_2] [i_1] [i_4] = (((var_0 || 127) ? (!24056) : (!var_2)));
                                arr_13 [i_0] [i_1] [1] [1] [i_1] [1] = ((0 >= (var_7 ^ var_3)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_1] [i_1] [i_6] = (min(((!(((var_8 ? var_8 : var_10))))), (((!var_11) <= (min(var_7, var_0))))));
                                var_13 = (((~var_2) < var_0));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [i_0] [4] = ((~(!var_1)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_26 [i_1] [i_1] [2] [2] [i_2] [i_7] [i_7] = (!(var_10 / var_4));
                                var_14 &= var_9;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
