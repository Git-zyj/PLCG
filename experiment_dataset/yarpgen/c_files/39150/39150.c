/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((~(((496 ^ 151) | ((var_1 ? var_2 : var_13))))));
                var_16 = (102 > -131);
                var_17 = var_6;

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = ((-21909 ? 30 : 131));
                    arr_9 [i_0 + 2] [i_0] [i_2] = (((arr_8 [i_0 + 3] [i_0] [i_0 - 1] [i_0 - 1]) > ((1 ? 216 : 17293706388596258862))));
                }
            }
        }
    }
    var_19 = ((var_8 ? ((min(var_4, var_12))) : (((min((!25601), (105 > var_12)))))));
    #pragma endscop
}
