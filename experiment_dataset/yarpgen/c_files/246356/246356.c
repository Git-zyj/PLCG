/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((arr_1 [i_0]) * ((((var_15 < (arr_1 [i_0])))))))));
        var_20 = (!4294967295);
        var_21 = ((arr_0 [i_0] [i_0]) + 4472564954696617848);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_22 = (((((max((arr_3 [i_1] [i_1]), var_9))) > -8892112896199782197)));
        arr_7 [i_1] [i_1] = (((arr_0 [i_1] [i_1]) && ((min((arr_5 [i_1] [i_1]), (arr_6 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_23 = (arr_9 [i_1] [i_1]);
                        var_24 = ((((((max(18446744073709551615, (arr_8 [i_1])))))) | (max(8892112896199782197, 255452435))));
                        arr_19 [i_1] [i_1] = (min((((arr_13 [i_1] [i_2] [i_3] [i_4]) | (arr_5 [i_4] [i_2]))), -255452454));
                        var_25 &= (max(((6174736059376252988 && ((max(25346, 15181))))), ((((var_2 || (arr_4 [i_3]))) && ((25346 || (arr_11 [i_4] [i_3] [15] [i_1])))))));
                    }
                }
            }
        }
        arr_20 [3] [i_1] = arr_3 [i_1] [i_1];
    }
    var_26 &= -1524186963;
    var_27 = (min((((var_18 / 18446744073709551615) * (var_13 * var_2))), (((max(var_19, 31)) ^ 0))));
    #pragma endscop
}
