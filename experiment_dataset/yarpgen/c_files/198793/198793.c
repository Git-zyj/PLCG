/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((4204173514895278158 || (((8191 | var_10) && 7716693326238210899))));
                    arr_11 [i_0] [i_0] [i_2] [i_1] = ((168 <= 1073741823) | (8844 ^ 12524005123447350815));
                    var_15 = (max(var_15, ((((((((1 ? var_6 : 1)) | 14242570558814273470))) ? (1 == 14242570558814273482) : 15)))));
                    var_16 = (((((min(var_5, 14196578666944798238)) + 4204173514895278158)) & (1 - 524287)));
                }
            }
        }
    }
    var_17 = ((max(var_2, (57364 || 1797145655))));
    #pragma endscop
}
