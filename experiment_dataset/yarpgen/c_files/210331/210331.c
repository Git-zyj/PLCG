/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (max(var_5, var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_21 = (min(var_21, ((min((max(((min((arr_3 [i_0]), var_10))), (arr_2 [i_0] [i_1 + 2]))), ((((!var_19) == (min((arr_2 [i_0] [i_0]), (arr_3 [i_1 - 1])))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] [i_4] = var_17;
                                arr_12 [i_0] [i_1] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_3] [i_3] [i_4]);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] [i_3] = (var_18 ^ var_9);
                            }
                        }
                    }
                }
                var_22 &= (15682520874439979221 + 1613228562);
            }
        }
    }
    #pragma endscop
}
