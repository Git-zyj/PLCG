/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = ((var_5 ? 16588860371122713569 : var_14));
        arr_3 [i_0] [i_0] = var_12;
        arr_4 [i_0] [i_0] = 2147483647;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_15 -= var_4;
        arr_7 [i_1] [i_1] = (255 % 255);
        var_16 ^= 2831210597;
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_10 [i_2] = ((var_2 ? 1857883702586838029 : var_7));
        arr_11 [i_2] = ((max(var_7, -348636981)));
        var_17 = ((~(min(((3629322841465339412 ? var_8 : var_1)), ((~(arr_9 [i_2])))))));
    }
    var_18 = ((((min(var_7, 7342287917482644960))) >= (((var_2 ? (!var_8) : var_6)))));

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_19 ^= ((-((((!(arr_13 [i_3] [i_3])))))));
        /* LoopNest 3 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_23 [i_4] [i_4 - 3] [i_4] = ((7342287917482644960 ? (20549 == 2741) : ((~((1 << (7342287917482644960 - 7342287917482644943)))))));
                        arr_24 [i_3] [i_3] [i_4] [i_5] [0] [i_3] = ((((((arr_18 [i_6]) ? 240 : (arr_13 [i_4 + 2] [i_6 - 3])))) ? 1978489493 : -46));
                        var_20 = (min(var_20, ((max(var_11, ((((min((arr_13 [i_3] [i_3]), var_10))) ? var_0 : 18446744073709551615)))))));
                    }
                }
            }
        }
        arr_25 [i_3] = (arr_17 [i_3] [i_3] [i_3]);
    }
    var_21 = ((-109327084 | ((20 ? var_6 : var_4))));
    #pragma endscop
}
