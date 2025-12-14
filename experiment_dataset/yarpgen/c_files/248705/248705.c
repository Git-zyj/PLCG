/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!((min(3466, var_4)))))) < ((var_17 ? (var_6 > var_10) : -1))));
    var_20 = (min(var_20, (~var_1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = ((~(min(9607909099679948935, ((((arr_2 [8]) ? 3985111578 : var_9)))))));
                    var_22 += ((((min(4194303, ((((arr_2 [i_0]) > (arr_2 [i_0]))))))) / (((((~(arr_3 [i_1])))) ? var_15 : (~18)))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 *= (((min(var_2, var_18)) | (var_6 & 159109217)));
                        var_24 += ((((58 % (var_18 != 1165904332))) * (var_6 % 4)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
