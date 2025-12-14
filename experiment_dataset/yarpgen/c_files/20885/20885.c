/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((max(var_3, var_11)) / (0 + var_6)))) + 2136));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_20 = (max((arr_0 [i_0 + 2] [i_1 + 2]), (!16768326425948276393)));
                        var_21 = ((-(((((arr_4 [0] [i_2]) == var_11))))));
                        arr_12 [6] = (max((((!(arr_2 [4])))), var_8));
                    }
                    arr_13 [i_0] [i_1] [i_2] = var_7;
                }
            }
        }
    }
    var_22 |= 27;
    #pragma endscop
}
