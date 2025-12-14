/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 134213632;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (min((arr_6 [i_0] [i_0] [i_0]), (((arr_4 [i_0] [i_1 + 3] [i_2]) ? -1 : (arr_4 [i_0] [i_1 + 3] [i_2])))));
                    var_14 = ((((((arr_5 [i_0] [i_1 - 2] [i_2] [i_1 + 1]) ? (arr_5 [i_0] [i_0] [i_0] [i_1 + 2]) : -200997179))) ? (((arr_0 [i_0] [i_0]) ^ 65535)) : (arr_5 [i_0] [i_0] [i_2] [i_1 - 1])));
                }
                var_15 = ((-240 == (min(1, 8388607))));
            }
        }
    }
    #pragma endscop
}
