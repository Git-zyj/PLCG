/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((((!(!32256))) && ((max(8011153664879377036, (arr_4 [i_1 + 2] [i_1 + 1]))))));
                arr_8 [i_0] [i_1] [i_0] = -127;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_16 [i_3] [i_2] [i_1 + 1] [i_3] = (max(23277, 2));
                            arr_17 [i_0] [i_0] [i_2] [i_2] = ((((min(var_16, var_4))) && -32257));
                            arr_18 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = (min((((((arr_12 [i_0] [i_0] [i_0]) == var_1)))), (min((arr_11 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_1 + 1]), ((((arr_5 [i_3] [i_1] [15]) > 32270)))))));
                            arr_19 [i_1] [i_0] [i_3] = (max(((((32470 ? 6289 : 70)) | (arr_4 [i_1 - 1] [12]))), (arr_5 [i_0] [i_0] [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
