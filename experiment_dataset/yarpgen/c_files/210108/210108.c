/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~((9152 ? var_10 : var_6))));
    var_17 = var_14;
    var_18 = (max(var_18, ((~((((var_14 ? var_9 : var_4)) | var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((min(4294967295, ((var_13 ? var_3 : (arr_0 [i_1]))))));
                arr_7 [i_0] |= (-3878721041447610970 != 4294967288);
            }
        }
    }
    #pragma endscop
}
