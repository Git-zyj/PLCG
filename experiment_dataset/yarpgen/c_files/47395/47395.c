/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(((var_1 ? var_5 : var_5)), ((30192 ? 16 : 252)))), (((!var_11) ^ (min(var_2, 1015529682))))));
    var_17 = (min(22, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_18 = (((((((max(1, 1663175830))) ? ((57 ? 64 : 8168592875384587651)) : 84))) && (((-1308596933 != 250) == (~-23)))));
                                var_19 = var_15;
                                var_20 = (max(var_20, ((((var_2 > -23) ? -65 : (arr_2 [i_0]))))));
                            }
                        }
                    }
                    var_21 = 58489;
                    arr_13 [i_0] [i_0] [i_2] |= (~var_7);
                }
            }
        }
    }
    #pragma endscop
}
