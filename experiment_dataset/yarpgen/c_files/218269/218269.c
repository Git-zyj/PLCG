/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_7));
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = ((((((arr_5 [i_2 - 1]) ? (arr_0 [i_2] [i_1]) : (arr_2 [19])))) ? ((((arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 1]) & (arr_6 [i_2] [i_2 + 1] [i_2])))) : 1566605928));
                    var_15 = (min(var_15, ((((~(arr_0 [i_0] [i_0])))))));
                    var_16 = (arr_6 [2] [i_1] [i_1]);
                }
            }
        }
    }
    #pragma endscop
}
