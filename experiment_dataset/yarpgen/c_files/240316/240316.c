/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((max(((min(0, 1375570699))), 7313559766864079861))) ? ((~((65535 ? var_7 : 7836347505129623610)))) : var_3);
    var_13 &= var_1;
    var_14 = 4294967290;
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] &= 4294967282;
                arr_6 [i_0] [i_1] [i_1] = (min((arr_2 [i_1]), (((arr_2 [i_0]) ? -13560 : (arr_1 [i_1])))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_10 [i_0] [10] [i_2] [i_0] = (arr_4 [i_0] [i_1]);
                    arr_11 [i_0] = (min((arr_1 [i_0]), (max((arr_4 [i_2] [i_1]), (arr_4 [i_1] [i_0])))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_16 = (arr_14 [i_0] [i_1] [i_4 - 2] [i_4 - 1]);
                            var_17 = (max((min(17689833588067894033, (max(5580465528045419663, (arr_13 [i_0]))))), -5580465528045419664));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
