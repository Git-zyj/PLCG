/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [8] [i_1] = -27;

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    var_17 = ((((((~(arr_8 [8] [i_1] [i_2 - 1]))) & -63)) % 14));
                    arr_10 [i_0] [10] [8] [2] = (max(var_13, ((((var_16 + var_6) ? ((var_15 ? 230 : 21)) : (var_1 && 240))))));
                }
                arr_11 [i_1] = (((((9564 ? (arr_7 [i_0 + 2]) : 32752))) && ((max(-4, (min(3770676061, 242)))))));
            }
        }
    }
    var_18 = var_6;
    var_19 |= ((var_1 && ((((max(255, (-2147483647 - 1)))) && 243))));
    /* LoopNest 2 */
    for (int i_3 = 4; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                var_20 -= ((!(((var_11 ? 54 : ((max(20, 39532))))))));
                arr_17 [i_4] = ((((((~0) ? (((min(var_9, var_8)))) : (max(3770676037, 14300))))) && ((max(524291208, ((127 ? 9462372989909626486 : 10244)))))));
            }
        }
    }
    #pragma endscop
}
