/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [7] [i_1] [i_0] = var_2;
                    var_13 = (min(-1992, ((((max(var_11, -1400849527))) % ((~(arr_5 [i_0] [i_0])))))));
                    var_14 = ((var_1 ? (max(var_8, ((var_1 ? var_12 : var_12)))) : (var_11 != 17)));
                    arr_10 [i_2] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) / -var_3));
                }
            }
        }
    }
    var_15 = (min((((((123 ? var_9 : var_7)) == 2147483647))), ((((7527666520744414819 ? var_1 : var_1)) - var_7))));
    var_16 = var_4;
    var_17 += (((((min(var_6, var_5))) ? 144080003703767040 : -65519)) * var_11);
    #pragma endscop
}
