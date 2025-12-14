/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_11 = ((1 / var_2) ? (((((-9223372036854775807 - 1) ^ 12741176080392368287)) - 1568850805527484947)) : 1);
                    var_12 = (1 - -9223372036854775794);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_13 = var_1;
                    var_14 = var_0;
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    arr_13 [i_0 + 1] [i_0 + 1] [i_0 - 1] = 59;
                    var_15 = ((((1 ? (((-9223372036854775807 - 1) - -23311)) : (9223372036854775798 == 251)))) || var_8);
                    var_16 = 2395589497;
                }
                arr_14 [i_0] [3] = ((((18446744073709551615 + (var_1 / var_5))) + var_5));
                var_17 = (((var_3 | -9931) ? (((255 << (((((-9223372036854775807 - 1) - -9223372036854775784)) + 41))))) : ((-32762 ? 2 : 767241248623711217))));
                arr_15 [i_0] = -var_9;
            }
        }
    }
    #pragma endscop
}
