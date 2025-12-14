/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_13, var_18))) << (var_3 + 136)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [i_1] [i_2] [i_3] [i_3] = 16733234466084557911;
                                var_20 = 64741;
                                var_21 = 64741;
                            }
                        }
                    }
                    var_22 += max((arr_7 [i_0] [i_0 + 1] [i_1] [i_1] [i_2 + 1] [i_2 + 2]), (!var_15));
                    var_23 = (min(var_23, ((max(74, 799)))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    arr_14 [i_1] [i_1] = ((var_11 ? var_8 : -28519));
                    arr_15 [i_0 + 1] [i_0] |= (((arr_7 [i_0] [i_0] [i_0 - 1] [i_5 + 2] [i_5 - 1] [i_5]) ? (arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_5 + 2] [i_5 - 1] [i_5 + 4]) : (arr_7 [2] [2] [i_0 - 1] [i_5 + 2] [i_5 - 1] [i_5 - 1])));
                }
                var_24 = 56;
            }
        }
    }
    var_25 |= var_6;
    var_26 = ((var_16 ? (((max(2032, 794)))) : ((var_1 ? ((var_9 ? 724021066 : var_16)) : var_3))));
    #pragma endscop
}
