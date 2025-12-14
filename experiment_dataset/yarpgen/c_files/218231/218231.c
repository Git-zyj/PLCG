/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_10 = (min(var_10, -var_9));
                    var_11 = (max(var_11, 63));
                    var_12 = (((arr_5 [i_0] [i_0]) ? (arr_5 [i_2] [i_1]) : 0));
                    arr_10 [i_0] [10] [i_2] [i_2] = (+((1 ? (arr_2 [i_0]) : (arr_4 [4] [i_0]))));
                }
                var_13 = (max(var_13, ((((max((arr_4 [i_1] [i_1]), var_6))) || -1316083998477500334))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
