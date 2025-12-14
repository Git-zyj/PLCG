/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    var_16 = 4804349135125197126;
    var_17 &= (((max(((var_12 ? var_3 : var_9)), -32765)) | -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((((max(-9296, 9282))) ? var_5 : -9292));
                arr_7 [i_0] [i_0] [i_0] = 19367;
            }
        }
    }
    var_18 = 240;
    #pragma endscop
}
