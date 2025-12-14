/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 4503599627370492));
    var_15 = ((var_11 && (4503599627370462 * 18446744073709551595)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 &= (min(1, (arr_4 [i_0 - 3])));
                    arr_6 [i_0] [7] [1] [i_2] = ((((max((arr_0 [i_0] [i_0]), (arr_0 [i_0 + 1] [i_1])))) ? (min(0, (arr_2 [i_0 - 4] [i_0 + 3] [i_0 - 2]))) : ((~(arr_4 [i_0 - 3])))));
                    arr_7 [i_2] = ((((~(arr_0 [i_0 - 2] [i_0 - 2]))) | (max((arr_0 [i_0 + 3] [i_0 - 1]), (arr_0 [i_0 - 3] [i_0 - 1])))));
                }
            }
        }
    }
    var_17 *= var_13;
    #pragma endscop
}
