/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = (max(var_8, ((3221225472 % (min((arr_1 [10] [i_1]), 6392266284160299469))))));
                    var_13 = (109 + 1415694259751874645);
                    var_14 = ((((((7874867074374038598 - 0) - -5))) || (((-((1 + (arr_0 [i_0]))))))));
                }
            }
        }
    }
    var_15 = (min(var_15, ((min(((((var_0 % 1) && (var_1 / var_2)))), ((min(var_0, 15843865261199558988))))))));
    var_16 |= (((135776009 % 3193745779) > var_8));
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_17 [i_3 - 1] [i_4] [i_5] [i_5] |= ((1 > (max(((var_6 | (arr_11 [i_3]))), (arr_15 [i_3])))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_17 = ((var_1 << (((16137475065057851713 << 1) - 13828206056406151783))));
                                var_18 = ((~(13744632537505528991 > 15)));
                                var_19 -= (~-5);
                                var_20 = (((((((arr_13 [i_3 - 2] [i_4] [i_7]) / 2749511173)))) & (((1 && (arr_19 [i_3] [i_5] [i_5]))))));
                                var_21 = (!(((~(max((arr_10 [i_3] [i_4]), 2676277424))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (((19 + var_6) * (var_4 + var_3)));
    #pragma endscop
}
