/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((arr_1 [i_0] [i_0]) ? (arr_4 [i_1 + 1]) : (min(((((arr_4 [i_0]) ? (arr_2 [i_0] [i_1 - 2] [i_2]) : 31))), (arr_6 [i_2] [i_1] [i_1] [i_0]))))))));
                    arr_7 [i_0] [i_0] = (!-31);
                }
            }
        }
    }
    var_16 = ((((((min(22962, 22961))) && -var_9)) ? ((((~-1382130810) || ((max(var_14, var_3)))))) : (~-var_2)));
    #pragma endscop
}
