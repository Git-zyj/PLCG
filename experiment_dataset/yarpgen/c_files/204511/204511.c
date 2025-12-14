/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_16 -= 80;
                    var_17 = ((var_10 + ((((max(var_10, var_14)) >= (((arr_8 [i_2 - 1]) >> (4210790424126374976 - 4210790424126374952))))))));
                    arr_9 [i_2] = 4294967295;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] = (((var_6 - 1218679003) + ((4190569889 ? 63 : 4294967295))));
                    var_18 = var_7;
                    var_19 *= (max(17141, (arr_3 [i_3] [i_3])));
                }
            }
        }
    }
    var_20 = var_3;
    var_21 = (((((11421457484853248924 ? (2 & 2584126) : (((var_10 ? var_11 : (-2147483647 - 1))))))) && ((max(((var_2 ? var_6 : 3510607191)), var_5)))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            {
                arr_25 [i_7] [i_7 - 1] = 240;
                var_22 |= 2147483647;
                arr_26 [i_7] = (32767 && 73);
            }
        }
    }
    #pragma endscop
}
