/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_5;
    var_14 = ((((min(((min(var_7, var_12))), 23352))) && ((((max(var_0, var_2)) - ((var_7 ? 20905 : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = (((arr_3 [10] [4]) == (max(((((arr_0 [i_0]) < 38656))), (arr_3 [i_0] [6])))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 = (min((((min(9999, 15203219212875526644)) % ((((arr_7 [i_3] [i_1 - 1]) ? var_12 : (arr_5 [i_3 - 1] [i_0])))))), (((arr_7 [i_0] [i_1]) ? 1868448991440010351 : ((2280636485027115873 ? var_2 : (arr_8 [i_4] [i_3] [i_2] [i_3] [i_0])))))));
                                var_17 *= 6055911986661391648;
                                var_18 = (max(var_18, (arr_11 [10] [i_0] [i_0] [2] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = ((~(max(var_2, 55280))));
    var_20 = (~((((var_10 << (var_12 - 56484))) ^ var_0)));
    #pragma endscop
}
