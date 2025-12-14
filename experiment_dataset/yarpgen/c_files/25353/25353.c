/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25353
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= 6435840129411806450;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_0 - 1] &= 6435840129411806442;
                    var_11 = (min(var_11, ((((((-(arr_2 [i_0] [i_0] [i_0])))) ? ((((((arr_4 [i_2]) ? -27919 : -866555245))) ? (arr_4 [i_0]) : (arr_0 [i_1]))) : 65535)))));
                    var_12 = (arr_6 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
