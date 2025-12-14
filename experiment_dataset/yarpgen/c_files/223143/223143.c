/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min((min(var_4, 2949467602772929473)), (((-469076465857557521 ? var_6 : var_5)))))) ? ((((min(var_0, var_7))) ? var_2 : ((var_7 ? 2949467602772929458 : 15497276470936622139)))) : ((((!(((var_7 ? var_0 : var_5)))))))));
    var_12 = (((!var_2) ? var_6 : var_1));
    var_13 = (min(((-(min(var_3, -469076465857557515)))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = ((-((max(var_10, var_3)))));
                    arr_8 [i_0] [i_1] [9] = (max(-469076465857557514, -469076465857557521));
                }
            }
        }
    }
    #pragma endscop
}
