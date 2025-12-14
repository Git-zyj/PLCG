/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = var_7;
                    var_15 = (((((!(arr_3 [i_0] [i_0])))) * (((((var_9 << (var_6 - 15700789569488338120)))) ? (18446744073709551615 > 18446744073709551615) : (arr_4 [i_2])))));
                    var_16 = (min(56, ((((arr_1 [i_0]) && -30110)))));
                    arr_9 [3] [3] [i_2] [i_0] = ((!(((((!(arr_8 [2] [2] [i_2 - 2] [2]))) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 2] [13]) : (arr_4 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
