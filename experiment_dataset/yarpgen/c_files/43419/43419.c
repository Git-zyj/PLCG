/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = max((arr_5 [i_0] [i_0]), (((249 >= (arr_5 [i_0] [i_0])))));
                var_16 |= -1;
                arr_7 [i_0] [i_1] [i_1] = (max(((((max(1, var_7))) - ((65535 ? 1 : (arr_3 [i_0]))))), (arr_5 [i_0] [i_1])));
                var_17 += (min(((var_3 ? (max((arr_3 [i_0]), -4573459770094502888)) : (arr_1 [i_0]))), 16383));
                var_18 = (~1753596751);
            }
        }
    }
    var_19 = ((var_9 ? (min(((1340738820 ? 16383 : var_5)), (722351491 - 1))) : ((32766 ? (~-15446) : 6))));
    #pragma endscop
}
