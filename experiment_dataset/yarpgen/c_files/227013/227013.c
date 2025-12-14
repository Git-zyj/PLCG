/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += var_5;
    var_13 = ((var_4 | (((20 & 64491) >> var_4))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 -= (((arr_4 [i_1]) ? var_4 : ((~((803159844 ? (arr_1 [i_1]) : 61))))));
                arr_6 [i_0] [23] [23] = (((min(var_3, -1404965958)) == (((!(255 + var_4))))));
                arr_7 [i_0] [i_0] = (max(((-((149 ? -1 : (arr_1 [i_0]))))), 0));
            }
        }
    }
    #pragma endscop
}
