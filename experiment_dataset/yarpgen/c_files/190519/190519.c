/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_20 -= ((+(min((min((arr_3 [i_0 - 1]), var_15)), ((max(28753, (arr_1 [i_0] [i_0]))))))));
        arr_4 [14] |= ((((min((arr_3 [i_0]), var_11))) & 0));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        arr_7 [i_1] = var_16;
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 21;i_4 += 1)
                {
                    {
                        var_21 = ((0 ? ((((var_19 > (arr_8 [i_1] [i_2] [i_3]))))) : ((((max(var_16, (arr_12 [i_1] [i_2] [i_3] [i_4])))) ? (arr_14 [i_1 + 2] [i_1] [i_2 - 2]) : var_3))));
                        var_22 = (max(7371, -2153557327682479720));
                        var_23 = 67108863;
                    }
                }
            }
        }
    }
    var_24 |= (((36773 ? 4294967295 : 4294967272)) << (4294967289 - 4294967267));
    var_25 = var_18;
    var_26 = ((var_5 ? (min(var_16, (min(var_8, var_5)))) : (((5408433583225248795 ? 6526 : 3217584564)))));
    #pragma endscop
}
