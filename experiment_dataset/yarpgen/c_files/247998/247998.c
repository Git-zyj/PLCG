/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~873979468);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] = max((arr_0 [11]), ((((!var_3) || 262143))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((!4294967295) ? (max((max((arr_8 [i_0] [i_2] [i_2] [i_1]), var_7)), var_5)) : var_4);
                    arr_11 [i_0 + 1] [i_0] [i_0] = 4294967289;
                }
                arr_12 [i_0] = (((max(4294967295, (arr_5 [i_0] [i_0] [i_0])))) ? ((var_2 * (arr_4 [i_0] [i_0]))) : 0);
            }
        }
    }
    var_11 = var_9;
    #pragma endscop
}
