/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= ((min((((var_11 ? 62669 : var_8))), ((var_1 ? var_1 : 9068312358324549318)))));
    var_16 = (min(((((var_6 / var_12) - ((max(var_11, var_6)))))), 13074447289428869867));
    var_17 = 9068312358324549318;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = (-9068312358324549311 == -2038492335);
                    var_18 = 65535;
                    var_19 = (max(var_19, var_4));
                    var_20 = ((((max(1, 0))) ? var_1 : (max(((((arr_1 [i_0]) / var_12))), (((arr_8 [i_1]) ? 2147483647 : (arr_9 [i_0] [i_1] [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
