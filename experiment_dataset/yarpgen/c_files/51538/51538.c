/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((var_13 ? 206 : (var_6 && var_3)))) >= (min(var_10, ((max(-4885451169008387837, var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((max((arr_1 [i_0]), (((arr_4 [4] [i_1]) ? (arr_1 [0]) : var_10))))) ? -1 : (~-1)));
                arr_6 [i_0] [3] [i_1] = arr_2 [i_0];
            }
        }
    }
    var_19 = (min((max(11431093848274490820, (~var_3))), (min(((var_10 ? var_11 : 11431093848274490826)), ((((-32767 - 1) ? -1512492243 : 18)))))));
    #pragma endscop
}
