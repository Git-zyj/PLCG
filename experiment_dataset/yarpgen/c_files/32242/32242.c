/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!(~-var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = -32750;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 -= ((+((32766 ? (arr_9 [i_3 + 2] [i_4 + 1] [i_0 + 1]) : var_7))));
                                var_15 = (min(var_15, ((max((min((arr_4 [i_2] [i_0 + 1] [i_0]), (arr_4 [1] [i_0 + 1] [1]))), (arr_4 [3] [i_0 + 2] [i_0 + 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(var_16, (~var_3)));
    var_17 = var_2;
    var_18 = ((var_4 ? -var_5 : 48817));
    #pragma endscop
}
