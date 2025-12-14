/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((min(3, 3)) % ((var_5 ? 255 : 3589756662)))) <= ((202 ? -124 : 13))));
    var_11 = var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 = 37312;
        var_13 = (((7 - (arr_1 [i_0]))));
        var_14 = (arr_1 [16]);
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = (min(177, var_9));
        arr_5 [6] [16] = ((min(((min(239, var_3)), (arr_2 [i_1])))));
        arr_6 [i_1] [i_1] = (((((!((min((arr_3 [i_1]), var_0)))))) ^ (((-9197640078646157707 <= ((((arr_2 [i_1]) ? 4294967292 : var_9))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_15 *= (64001 || 20);
        arr_9 [18] = (arr_7 [i_2]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_21 [i_2] [i_3] = var_5;
                        arr_22 [i_4] = (!98);
                        arr_23 [i_2] [i_3] [i_2] = ((69 && (arr_14 [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
