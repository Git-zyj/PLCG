/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = var_9;
                        arr_13 [i_0] [i_2] [i_1] [i_0] = -8969713445347187671;
                        var_14 += ((-13703 ? 82 : 458752));
                    }
                    var_15 = -21065;

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_16 = (max(var_16, ((((8969713445347187671 ? 82 : var_8))))));
                        arr_18 [i_4] [i_2] [i_0] [i_4] &= ((~((4840921403052752674 ? 255 : 9223372036854775807))));
                        arr_19 [i_0] [i_0] [i_1] [i_2] [i_4] [i_0] = 8969713445347187643;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_17 += ((((-(arr_1 [6] [i_5]))) ^ (min(var_1, var_8))));
                        arr_22 [i_0] [i_1] [i_2] [i_5] &= (((max(((14 ? var_5 : var_3)), ((min(107, -107))))) > var_7));
                    }
                    var_18 = (arr_6 [i_2] [i_1] [i_1] [15]);
                }
            }
        }
    }
    #pragma endscop
}
