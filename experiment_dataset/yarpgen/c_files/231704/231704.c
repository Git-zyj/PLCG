/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((((((var_13 ? var_2 : var_6)) | var_2))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((((min(var_9, (arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2])))) ? (((min(233, 42)))) : (-32767 - 1))))));
                    arr_10 [i_2] = (((((+((max((arr_6 [i_0] [8] [i_2]), var_7)))))) && (arr_8 [i_2] [i_2])));
                    arr_11 [i_2] [i_1] [i_2] = 18702;
                }
            }
        }
    }
    var_17 = (var_9 ? var_0 : (var_8 * 18096781554896458992));
    #pragma endscop
}
