/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((39 ? var_8 : (2822461490231998463 < var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [5] = ((((206 / (min(2115020824, -2147483621)))) << (1852 - 1828)));
                arr_5 [i_0] = ((((((((-91 ? 0 : (arr_2 [i_0] [i_1] [0])))) ? (((9454 ? 629733367 : 44044))) : (max(206, 4874728012698879263))))) ? ((min((((!(arr_0 [i_0] [i_1])))), (max((arr_0 [i_0] [9]), (arr_0 [i_0] [i_0])))))) : (!-2752868818469907076)));
            }
        }
    }
    #pragma endscop
}
