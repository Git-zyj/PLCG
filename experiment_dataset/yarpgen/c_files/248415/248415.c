/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248415
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(var_11, 736344811)));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((+(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        arr_5 [i_0] = (arr_0 [i_0] [i_0]);
        var_19 ^= 9223372036854775807;
        var_20 = (arr_2 [13] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (!0);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 21;i_3 += 1)
            {
                {
                    var_22 = (((arr_11 [i_2 + 3]) - (arr_11 [i_2 - 2])));
                    var_23 = (max(var_23, 65526));
                    var_24 = ((+(((arr_12 [22] [i_2] [22] [i_2]) ? 144 : (arr_8 [i_1] [i_3])))));
                }
            }
        }
        var_25 ^= (arr_8 [i_1] [i_1]);
    }
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        var_26 = (((~(((arr_13 [i_4]) & (arr_16 [i_4]))))));
        arr_17 [i_4] = 6590;
    }
    var_27 = var_11;
    var_28 = ((min(((508 ? -9223372036854775807 : var_5), ((max(-56, 100663296)))))));
    var_29 = var_15;
    #pragma endscop
}
