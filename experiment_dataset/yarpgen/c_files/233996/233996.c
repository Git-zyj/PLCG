/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((3816936124491434982 << (16173659391729711046 - 16173659391729711042))) ^ 17075));
    var_15 = (max(1, var_12));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] = (max((((var_9 | var_4) ? (arr_1 [i_0] [i_0]) : (max(var_6, -26007)))), (((-6224011535384368264 ? 1 : 11633)))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                arr_9 [i_0] [i_1 + 1] [i_0] = ((5504 ? 14218 : (max(5156471077890055624, 2518073360))));
                arr_10 [12] [i_1 - 1] [i_0] = (((((56 ? 26007 : -10007))) ^ (arr_1 [i_0] [i_0])));
            }
            for (int i_3 = 1; i_3 < 21;i_3 += 1)
            {
                arr_14 [i_3] [i_3] = ((!(((25999 ? 11204550382363457995 : -8335141756373135043)))));
                var_16 = ((~(((((arr_6 [i_0] [i_0]) ? var_8 : 3544730429)) | (arr_1 [i_0] [i_0])))));
            }
            var_17 = (!1);
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_18 &= 1;
        var_19 &= (arr_7 [i_4] [i_4] [i_4]);
        var_20 = 1;
        var_21 = (min(var_21, (((var_11 ? ((((arr_17 [i_4] [4]) && -25998))) : var_4)))));
    }
    #pragma endscop
}
