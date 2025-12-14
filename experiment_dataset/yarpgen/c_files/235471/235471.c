/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_14 -= (min((((((1803263408 ? (arr_2 [i_0]) : 443390371))) ? (((arr_0 [i_1] [i_0]) ? 2474796556 : (arr_5 [i_1] [i_1] [i_0]))) : (((-(arr_0 [i_0] [i_0])))))), (((-431854835 ? 72448799 : 72448799)))));
                arr_6 [i_0] [i_1] [i_0] = ((!(~864751512)));
            }
        }
    }
    var_15 = ((24086 ? 1567598894 : (!var_9)));
    #pragma endscop
}
