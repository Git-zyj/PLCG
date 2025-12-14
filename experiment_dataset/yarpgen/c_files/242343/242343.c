/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((max(var_7, 3784981451)) << ((((var_12 ? var_10 : var_9)) - 1429417570))))) / ((-17904 ? var_13 : (-29113 | 10517025033784489126)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_1 - 2] = ((((var_1 ? ((1 ? var_17 : var_5)) : (~var_1))) & (max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_1 + 1])))));
                var_19 = ((var_6 ? (min(((min(var_9, 117))), var_14)) : ((((33554432 ? 116 : var_6)) | var_11))));
                arr_5 [i_0] [i_0] = 65535;
            }
        }
    }
    #pragma endscop
}
