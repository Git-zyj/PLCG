/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (min(var_19, (arr_2 [i_0] [i_1] [4])));
                var_20 = ((((min((arr_5 [i_0 - 2]), (arr_5 [i_0 + 1])))) ? (arr_5 [i_0 - 1]) : (arr_4 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((-66198951 ? ((-(!var_14))) : 1));
                                var_22 = (max(var_22, ((min(252, (arr_6 [i_0] [i_0] [i_0 - 2]))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_0] [7] = (((arr_0 [i_0] [i_0 + 1]) ? (arr_14 [3] [i_0] [4] [i_0] [i_0]) : ((((arr_8 [i_0] [i_0] [1]) ^ (((min(154, (arr_0 [i_1] [i_0]))))))))));
            }
        }
    }
    var_23 = var_9;
    var_24 = (min(var_24, (((((((232 ? var_8 : 1)))) ? -19568 : ((-(!25239))))))));
    #pragma endscop
}
