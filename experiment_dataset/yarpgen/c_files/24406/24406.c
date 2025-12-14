/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = var_14;
                var_16 = (-((min((max(1784, 255)), 9625))));
                var_17 = ((!(((((255 ? var_3 : 225)) | ((55894 ? -1421634599 : 255)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (((((var_9 >= (((var_10 ? var_7 : 1759))))) ? (18446744073709551602 | 255) : 1414224900)))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 *= (((max(20178, (-32767 - 1)))));
                            var_20 = ((((((arr_8 [i_2 + 1] [i_3] [i_2 + 1]) ^ (0 | 9625)))) ? (((!((min(1, var_10)))))) : ((1 ? (arr_14 [i_2 - 1]) : (arr_14 [i_2 + 1])))));
                            var_21 = ((~((min(55910, 1)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
