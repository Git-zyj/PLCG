/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_18 ^= (((((var_6 > (arr_5 [5] [5] [i_2] [i_2 + 1])))) + ((max(-48, (arr_5 [19] [i_2 + 1] [i_2] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, -1027357320));
                                arr_13 [i_0] [i_4] [i_3] [i_3] [i_4] = ((+(max(var_8, (((arr_3 [i_0] [i_1 - 2]) ? (arr_0 [i_0] [i_1]) : 59539))))));
                                arr_14 [i_4 - 1] [i_3] [i_1] = (arr_11 [i_0] [i_0] [i_3] [i_3 - 1] [i_4] [i_3]);
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = (((((((((arr_0 [i_1 + 2] [i_4]) ? var_0 : -1522))) ? var_0 : (2049228943 + 41)))) || ((((arr_5 [i_0] [i_3 - 1] [i_3 - 1] [i_4 - 1]) ? 9223372036854775807 : (arr_8 [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 1]))))));
                            }
                        }
                    }
                    arr_16 [14] [i_0] [i_2 + 2] = (arr_9 [i_0] [i_0] [18]);
                }
            }
        }
    }
    var_20 = ((((var_17 || (24219 >= var_4))) ? var_16 : ((var_10 + (min(13383888735296180664, 596068550))))));
    var_21 = (min((min(var_2, var_10)), var_13));
    var_22 = (((((((var_14 ? var_2 : var_0))) ? (((var_9 << (15144198523590315522 - 15144198523590315521)))) : var_6)) % ((max(((var_1 ? var_11 : 59539)), 34970)))));
    var_23 = (((var_11 != -var_3) / var_6));
    #pragma endscop
}
