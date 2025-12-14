/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += (~-118);
    var_12 = ((142 ? var_8 : -var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_13 ^= (--7132565212887434628);
                            var_14 += ((min(((7 ? var_7 : var_8)), (((-(arr_1 [i_0])))))));
                        }
                    }
                }
                arr_13 [i_1] = ((3217033602 ? -117 : 123));
            }
        }
    }
    var_15 = var_6;
    #pragma endscop
}
