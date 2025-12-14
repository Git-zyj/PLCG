/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (((!(var_7 / var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 &= 64221;
                    var_16 = var_7;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, (arr_6 [i_3])));
                                var_18 |= 2147483647;
                                var_19 = 32747;
                            }
                        }
                    }
                    var_20 |= (!var_0);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (arr_0 [i_1 - 1]);
                                arr_17 [i_0] [i_2] [i_2] [i_0] = (min(((((((!(arr_10 [i_0] [i_2] [1] [i_2] [i_0] [i_6] [i_6])))) == (4 & 4)))), (((arr_13 [i_2] [i_5] [i_0] [i_1] [i_2]) ^ 251))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = ((!(((1170599229490503091 / (min(var_9, var_3)))))));
    var_23 = var_5;
    #pragma endscop
}
