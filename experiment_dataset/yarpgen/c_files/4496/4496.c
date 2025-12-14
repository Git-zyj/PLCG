/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!-69);

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_20 = (((!0) <= 3868));
        arr_2 [i_0] = ((arr_0 [i_0 - 1]) ^ ((((arr_0 [i_0 - 1]) | (arr_0 [i_0 + 2])))));
        var_21 = (max(var_21, (((~((~((((arr_1 [i_0 + 2] [6]) < (arr_1 [i_0] [4])))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = 1;
                    var_23 = ((!(arr_4 [i_2] [3] [i_0 + 1])));
                }
            }
        }
        arr_9 [i_0] = (((!3867) || (((var_9 - (((arr_8 [9] [i_0] [i_0 - 1]) - var_14)))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_24 |= (!(arr_11 [i_3] [i_3]));
        var_25 = ((((min(3600605253777638694, (((arr_10 [i_3]) / (arr_10 [i_3])))))) ? -3868 : ((-(~24576)))));
    }
    #pragma endscop
}
