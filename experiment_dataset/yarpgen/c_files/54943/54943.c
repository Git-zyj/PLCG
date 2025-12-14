/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    var_18 = (max((((!(((var_1 ? var_0 : var_11)))))), var_7));
    var_19 = (((((!(!var_11)))) != (((((min(var_13, 25557))) < var_1)))));
    var_20 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = var_12;
                                arr_13 [i_0] [i_2] [i_0] [i_3 - 1] [i_4] = (+-0);
                                var_22 &= (((arr_12 [i_0] [5] [i_2] [i_3]) ? ((~(arr_1 [i_1]))) : (-111 > 2147483647)));
                                arr_14 [i_4] [i_4] [i_0] [i_4] = (((~var_4) || (((((var_7 ? -8507472392803930064 : -8192)) % var_0)))));
                            }
                        }
                    }
                    var_23 += (((((((~(arr_5 [i_1] [i_1] [i_2] [i_2])))) ? var_10 : (max(0, (arr_11 [i_0] [i_0] [8] [9] [i_2] [i_2 + 2]))))) ^ (arr_8 [i_0] [i_1] [i_2] [i_0])));
                    arr_15 [i_0] [i_1] [i_2] = (~11);
                }
            }
        }
    }
    #pragma endscop
}
