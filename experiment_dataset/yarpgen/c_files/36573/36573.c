/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((((((arr_0 [i_0 - 1] [5]) && (arr_0 [i_0 - 1] [i_1])))) == ((var_11 ? (arr_4 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_19))));
                    var_20 -= (((((var_2 / (arr_1 [i_0 - 1])))) - ((18446744073709551614 ? 255 : 9223372036854775807))));
                }
            }
        }
    }
    var_21 = ((var_9 - (2147483647 > 10)));
    #pragma endscop
}
