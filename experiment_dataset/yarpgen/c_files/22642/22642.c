/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 3511992527;
    var_18 |= var_11;
    var_19 = 2951370263;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (~var_12);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 += var_14;
                                var_22 = ((4294967289 == (((min(var_12, (arr_12 [i_3] [i_3] [i_3]))) >> ((((var_4 ? 782974796 : (arr_7 [i_1] [i_1]))) - 782974792))))));
                                arr_16 [i_1] = var_2;
                                var_23 = (((((var_0 && ((!(arr_14 [i_0] [i_1] [i_0] [i_3] [i_3])))))) / var_3));
                            }
                        }
                    }
                    var_24 = max(((((arr_10 [i_1]) || ((((arr_13 [i_0] [i_1] [i_1] [i_2] [i_0]) ? var_9 : 202)))))), (arr_6 [i_2]));
                }
            }
        }
    }
    #pragma endscop
}
