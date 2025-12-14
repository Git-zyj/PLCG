/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_14 = (((((((var_11 ? 6351942473693824265 : var_2))) | (((arr_3 [i_1] [i_0]) & 13932897817400447478)))) ^ (~496)));

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    var_15 = ((((((arr_4 [i_0] [i_1] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_2 [i_2 + 3] [i_1 + 1] [i_2 - 1])))) || ((min((!65535), (max((arr_1 [i_1]), (arr_6 [i_0] [i_1]))))))));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (min(9223372036854775807, -6351942473693824269));
                }
                arr_8 [i_0] [i_1] [i_1] = (arr_4 [i_0] [i_1] [i_1]);
            }
        }
    }
    var_16 *= var_7;
    var_17 = 2;
    #pragma endscop
}
