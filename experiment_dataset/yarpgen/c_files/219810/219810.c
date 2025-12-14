/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((((((min(var_12, var_6))) <= 20))) / var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((((arr_2 [11]) - (max(var_11, var_16))))) * (max((min((arr_3 [i_0] [i_1] [i_1]), (arr_3 [i_1] [i_1] [i_0]))), ((((arr_3 [i_0] [i_1 + 2] [i_1]) >= (arr_2 [i_1])))))))))));
                var_22 = ((((((min((arr_4 [i_0]), var_6)))) - var_16)));
            }
        }
    }
    var_23 = ((var_17 <= (min((max(0, 9007198986305536)), var_7))));
    var_24 = (((min(var_11, (var_16 - var_17))) > (0 >> 0)));
    #pragma endscop
}
