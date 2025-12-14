/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min(var_3, (max(2510246259, 144115179485921280)))));
        var_17 -= ((((min(16711680, 12011465259551341263))) && 52416));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((min((((~(arr_1 [i_0])))), (min(10310774338033747526, 4294967168)))) & ((min((4294967164 ^ var_4), ((((arr_6 [i_0]) ^ (arr_3 [i_0])))))))));
                    var_18 = ((-((var_7 + (arr_6 [i_0])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] |= (((~-10441) * -254));
                        var_19 = (var_10 == 1);
                    }
                    var_20 &= (max((max(1008, (arr_4 [i_2]))), (var_6 ^ 1)));
                }
            }
        }
        arr_11 [0] &= (min((((-1833 || (arr_1 [i_0])))), (((((4294967168 <= (arr_9 [i_0] [12] [i_0] [i_0] [i_0] [i_0])))) >> ((((max((arr_0 [15] [i_0]), 1))) - 149))))));
    }
    var_21 = (max(var_21, ((((min((max(var_6, var_10)), 1)) >> (((min((min(var_12, var_14)), var_1)) - 31233)))))));
    var_22 = var_8;
    var_23 |= (max(1, 233));
    #pragma endscop
}
