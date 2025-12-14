/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_14 = (!((((arr_3 [i_0] [i_0] [i_1]) ? (arr_3 [i_1] [i_1] [i_0]) : var_5))));
                arr_4 [i_1] = 50331648;
                var_15 = (max(var_15, var_6));
                var_16 -= var_10;
                arr_5 [i_1] [i_1] = (min(-var_7, (arr_1 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_17 = (min(var_17, (((!(((var_4 ? 6 : var_10))))))));
                var_18 += var_4;
            }
        }
    }
    #pragma endscop
}
