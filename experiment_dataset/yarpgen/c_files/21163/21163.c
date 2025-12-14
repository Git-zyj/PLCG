/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(25070, -43703941));
                arr_6 [i_1 - 1] = (min((((var_17 != 15) | var_13)), 36187));
                var_19 &= ((((0 / var_9) ? 43703952 : (var_5 + var_3))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] = var_3;
                            arr_14 [i_0] [i_1] [13] [i_3] = ((65527 >> ((((204 ? var_2 : var_11)) - 77))));
                        }
                    }
                }
                var_20 = ((min(((var_13 << (var_13 - 100))), (var_18 % 5021))));
            }
        }
    }
    var_21 = ((((min((min(1, 43703940)), -32760))) ? ((-((min(6, 197))))) : ((96 ? 31849 : 42410))));
    #pragma endscop
}
