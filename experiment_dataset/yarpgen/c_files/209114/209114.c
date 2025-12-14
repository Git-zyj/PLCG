/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-(var_16 * var_3))), (~-var_2)));
    var_19 *= max(((((-78 + 2147483647) << (((var_12 + 73) - 11))))), var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_20 = var_7;
                    var_21 = (min(var_21, ((min(((((arr_6 [i_0] [i_0]) > (arr_5 [i_2])))), (((arr_5 [i_0]) ? (var_9 % var_6) : (((arr_4 [i_0] [i_0] [i_2]) ? var_4 : 0)))))))));
                }
                var_22 = ((!(arr_0 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
