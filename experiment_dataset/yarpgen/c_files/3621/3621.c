/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((17449 ? -var_12 : ((var_7 ? 3333 : (arr_3 [i_0] [i_0])))));
        var_13 ^= (((arr_1 [i_0] [i_0]) ^ 17429));
        arr_5 [i_0] = var_4;
        var_14 = var_0;
        arr_6 [i_0] = (!var_5);
    }
    var_15 = 17429;
    var_16 ^= var_4;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            {
                arr_14 [i_1] [i_1] = 59;
                arr_15 [i_1] [i_2 + 3] = (min((((((arr_8 [i_1] [i_2]) - var_12)) | (((!(arr_9 [i_1])))))), ((-184211014 ? (min(var_5, 48074)) : ((var_9 ? 26031 : 8356))))));
                arr_16 [i_1] [i_1] [i_1] = ((((!(((313100639 ? 757897896 : -184210985)))))));
                var_17 |= (((~0) ^ (max(16634802017308347490, 48073))));
                var_18 = (max(var_18, ((((arr_10 [i_1]) | (((min(-1984785423, 185)))))))));
            }
        }
    }
    #pragma endscop
}
