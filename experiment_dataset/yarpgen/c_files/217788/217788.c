/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_19));
    var_21 = ((var_6 ? -723559210987265184 : ((((!((min(var_16, var_8)))))))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 = 9971;
                    var_24 = (max(var_24, ((min(((-8466175971601312434 ? 1 : 13)), (arr_4 [4]))))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_25 = (arr_2 [i_3] [i_3]);
        var_26 = (min(var_26, var_11));
        var_27 = 1;
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_28 = (arr_3 [i_4] [1] [i_4]);
        var_29 = (max(var_29, ((max(-2672007199807346487, 1603304716)))));
        var_30 = (min(var_30, (arr_13 [i_4] [i_4])));
    }
    #pragma endscop
}
