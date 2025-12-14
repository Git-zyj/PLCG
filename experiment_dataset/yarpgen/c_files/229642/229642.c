/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 &= ((((((var_0 ^ (arr_0 [i_1]))))) ? ((~((max((arr_2 [i_1]), (arr_2 [i_0])))))) : ((99 ? -83 : 16382))));
                arr_5 [i_0] [i_0] [i_0] = (((~(arr_0 [i_1 + 3]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_18 = (((arr_2 [i_1 + 2]) / ((((min(2281750384966293544, 1))) ? ((~(arr_9 [i_3]))) : (arr_2 [i_1 + 2])))));
                            var_19 = (((arr_12 [i_3] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_1 + 3] [i_1 + 1]) ? ((min((((arr_8 [i_0] [i_0] [i_2] [i_3]) ? (arr_10 [i_3] [i_1 - 1] [i_2] [i_3] [i_0]) : (arr_8 [i_0] [i_1 + 2] [i_2] [i_2]))), (arr_7 [i_0] [i_0] [i_0] [i_3])))) : (arr_0 [i_2])));
                            arr_14 [i_2] = (arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]);
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_3] = (((((arr_10 [i_2 - 1] [i_1 + 2] [i_1 - 1] [i_1 - 2] [i_1 + 1]) * (~var_4))) - (((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_3 [i_2] [i_3]) : -1))));
                        }
                    }
                }
                arr_16 [i_0] = (arr_2 [i_1 - 1]);
            }
        }
    }
    var_20 = (((6193046758313849765 - 1179829301) ? 7675454376280293497 : ((max(-38, 3540038991240996605)))));
    #pragma endscop
}
