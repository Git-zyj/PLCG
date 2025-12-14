/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = max(2147352576, 18446744073709551615);
    var_15 = var_3;
    var_16 = ((!(((18446744073709551615 ? 18446744073709551605 : 18446744073709551615)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = ((~(((!(arr_0 [i_2 + 1]))))));
                    var_18 ^= min(4, (((!(arr_2 [i_2] [i_2 + 1] [i_2 + 1])))));
                    arr_6 [i_0] [5] [i_2] = 3901797022956198199;
                }
            }
        }
    }
    #pragma endscop
}
