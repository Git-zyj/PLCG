/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (+-808085945);
                var_16 = ((var_13 ? (~var_14) : ((15289 ? var_14 : 9))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_17 = (((arr_3 [i_1 + 1]) ? 2147483647 : (arr_3 [i_1 - 1])));
                    var_18 |= ((808085959 ? 46440 : -808085940));
                    var_19 -= ((var_7 == ((var_15 ? (arr_6 [i_0]) : var_11))));
                    arr_10 [i_0] [i_0] [i_0] [i_2] = (var_4 ? (arr_1 [i_0] [i_1 - 1]) : var_15);
                }
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
