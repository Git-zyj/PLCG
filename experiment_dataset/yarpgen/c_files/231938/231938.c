/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((min(var_5, (arr_0 [i_1])))) ? (25045 - 966973154) : (-25046 / 966973154)));
                arr_7 [i_0] [i_1] [i_0] = (((min((((var_4 ? -25045 : 482))), (((arr_3 [1] [i_1]) | 1)))) ^ (((arr_2 [i_1] [i_0]) ? (arr_3 [i_1] [i_0]) : (3327994142 != 18614)))));
                arr_8 [i_0] [i_0] [i_1] = (((min(var_2, 4086096210140218996)) * (1 < -483)));
            }
        }
    }
    var_11 = var_7;
    #pragma endscop
}
