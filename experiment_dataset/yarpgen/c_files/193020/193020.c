/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((arr_1 [i_0]) ? 72057456598974464 : (arr_1 [i_0])));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_20 ^= 93;
                    var_21 = (arr_4 [i_0]);
                }
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    var_22 -= var_17;
                    arr_13 [i_0] [i_0] [i_3] = (arr_9 [i_0]);
                }
            }
        }
    }
    var_23 = ((((~(!var_2))) < 33786));
    var_24 = var_5;
    #pragma endscop
}
