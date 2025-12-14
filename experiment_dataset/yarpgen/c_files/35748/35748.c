/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((min(215, 7221854780457672343))) ? var_0 : (~1))) ^ var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((min(((1083 ? 8 : 11224889293251879277)), -var_1)) - (min(18446744073709551594, 7221854780457672336))));
                var_21 = (min(var_21, var_17));

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_4 [i_2] [i_2]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = (min((!20), (((arr_11 [i_0] [i_1] [i_0] [i_3]) ? 11224889293251879297 : (arr_1 [i_0])))));
                        var_22 = ((((min((arr_2 [i_2 - 2] [i_2]), 4))) ? (arr_2 [i_2 + 1] [i_2 + 1]) : (max((arr_2 [i_2 - 2] [i_2]), 11224889293251879291))));
                    }
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    arr_16 [i_1] [i_1] [i_1] = (max(11224889293251879273, 11224889293251879278));
                    arr_17 [i_0] [i_0] [i_0] = ((~((max((min((arr_15 [i_0] [i_0]), (arr_14 [i_0]))), (arr_3 [i_1 - 1] [i_1 + 3]))))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    arr_21 [i_0] [i_0] [i_0] [i_5] = (arr_6 [i_1] [i_1]);
                    var_23 &= (((arr_10 [i_0] [i_0] [i_0] [i_1] [i_5 - 2] [i_0]) ? 1 : var_2));
                }
            }
        }
    }
    var_24 = (min(var_11, ((((min(var_7, 190))) ? ((max(var_3, 1))) : ((11224889293251879278 ? var_0 : 63))))));
    #pragma endscop
}
