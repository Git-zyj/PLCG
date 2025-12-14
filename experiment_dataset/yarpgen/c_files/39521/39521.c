/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (-9223372036854775807 - 1);
                    arr_10 [i_0] = (max((((!(arr_2 [i_2 - 2] [i_2 - 2])))), ((3497168936 ? (arr_7 [i_2] [i_2]) : (max((arr_3 [i_2] [i_0]), (arr_6 [i_0] [i_0] [i_0])))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = var_8;
                }
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
