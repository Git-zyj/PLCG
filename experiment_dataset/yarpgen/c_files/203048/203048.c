/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((((max(47, 28798))) ^ ((max(var_14, var_3))))))));
    var_21 = (max(var_21, ((var_4 ? (((min(var_19, var_7)))) : (min(-28799, ((var_13 ? var_17 : 93))))))));
    var_22 = 13966864345259550148;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] [i_0] = ((((((4224101381 ? 1 : var_5)) - -67)) | (~var_12)));
                    var_23 = ((((((4479879728450001468 ? var_10 : 70865922)) ? (((var_16 ? var_9 : var_9))) : 4224101379))));
                }
            }
        }
    }
    #pragma endscop
}
