/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_8;
    var_17 = (max((max(73, ((var_8 ? 24633 : 182)))), var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (arr_5 [i_0] [i_0] [i_0]);
                    var_19 = (max((var_12 & 0), ((((arr_0 [i_0]) ? (arr_0 [i_2]) : (arr_0 [i_0]))))));
                    var_20 = var_10;
                    arr_9 [i_0] [1] [i_1] [i_2] = ((((arr_6 [i_0] [i_1] [i_2] [i_1]) & (arr_6 [i_0] [i_1] [5] [i_1]))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] |= (max(var_5, (max((((arr_2 [3]) ? var_11 : 0)), ((((arr_4 [i_2]) | 16384)))))));
                }
            }
        }
    }
    var_21 = var_15;
    var_22 = var_2;
    #pragma endscop
}
