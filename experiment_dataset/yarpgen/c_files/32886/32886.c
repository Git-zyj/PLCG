/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_8 ? var_14 : ((65535 ? 2147483647 : 1))));
    var_19 = (max(var_9, var_15));
    var_20 = max(var_1, var_5);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (((arr_7 [i_0] [i_0] [i_2] [i_0]) ? ((min(((min(65535, (arr_4 [i_0] [i_2])))), (arr_0 [i_1 - 3] [i_1 + 2])))) : (((arr_9 [i_2] [i_2 - 1]) - (arr_9 [i_2] [i_2 - 1])))));
                    var_21 = ((((min(var_15, ((~(arr_7 [i_2] [i_2] [i_1] [i_0])))))) ? ((max(var_1, var_5))) : ((~(max((arr_0 [i_0] [i_1]), var_16))))));
                }
            }
        }
    }
    #pragma endscop
}
