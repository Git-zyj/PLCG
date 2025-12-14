/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202535
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        var_10 = (!4211147949275875128);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (+-1737361108379880755)));
                    arr_7 [i_2] [i_1] [i_0] [i_0] = (~1264412488643116400);
                    var_12 = (min(var_12, 1737361108379880755));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 21;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_13 = 17175674880;
                            var_14 *= 17580192566424989779;
                        }
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_20 [i_0] [i_7] [i_4] [i_5] [i_7] = (!7264888941554080884);
                            arr_21 [2] [i_4] [i_4] [i_7] [i_7] [i_4] [i_5 + 2] = 4611686018427387904;
                        }
                        arr_22 [i_0] [7] [i_3] [i_5] [i_3] [i_3] = 16709382965329670865;
                    }
                }
            }
        }
    }
    for (int i_8 = 4; i_8 < 9;i_8 += 1)
    {
        arr_25 [i_8] = 0;
        arr_26 [i_8] = 7748080802772905139;
    }
    var_15 = 4611686018427387904;
    #pragma endscop
}
