/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (max(((((max(var_1, var_17))) ? ((max(0, 127))) : var_0)), (max(-65535, ((max(var_6, var_16)))))));
                    arr_7 [i_1] [i_0] = (max((((!((max(var_13, var_6)))))), (((max(var_1, var_9)) << ((var_17 ? var_8 : var_10))))));
                    arr_8 [i_2] [i_1] [i_1] [i_1] &= (max((max((max(var_1, var_6)), var_3)), (max(((max(var_3, var_15))), (max(var_7, var_1))))));
                }
            }
        }
    }
    var_19 = var_2;
    var_20 += ((491022095 / (max((4 * 65535), -0))));
    var_21 = (max((max(((38212 ? 3504349221625452518 : 287177919)), ((max(var_12, var_4))))), (((((max(var_0, var_5))) || ((max(var_6, var_13))))))));
    #pragma endscop
}
