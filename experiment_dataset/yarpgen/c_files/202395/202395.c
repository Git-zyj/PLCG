/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = ((!(!var_6)));
                    var_18 += ((~var_7) ? -var_9 : var_3);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_19 = var_15;
                    var_20 += var_0;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_21 = var_0;
                                var_22 = (((((var_10 ? var_14 : var_10))) ? (!var_8) : (max(var_3, 1040187392))));
                            }
                        }
                    }
                }
                arr_22 [i_3] = (((!var_10) ? (var_13 >= -7870084208855025167) : var_0));
                arr_23 [10] [i_3] = (((var_10 > var_9) == (~var_5)));
            }
        }
    }
    #pragma endscop
}
