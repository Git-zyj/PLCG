/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 += (min(((var_15 == (arr_11 [i_4 + 1] [i_2] [i_0 - 3] [i_0] [i_2] [i_0]))), (var_3 != 18446744073709551604)));
                                var_19 = ((-(arr_6 [i_4 - 2])));
                            }
                        }
                    }
                    var_20 ^= (min(7, -6));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_2] [i_0] [i_5] [i_6] = -7;
                                var_21 = ((~((((min(-6, var_13))) ? ((1708008358 ? 3146125354923240637 : -14849)) : (arr_15 [i_0 + 1] [i_5 + 4] [5] [i_5] [i_5 + 4] [i_6 - 1])))));
                                arr_22 [i_0] [14] [5] [i_5] [i_0] = (((((~(arr_9 [i_5 + 3] [i_5 - 1] [8] [i_5 + 4])))) ? var_1 : var_7));
                                arr_23 [i_0] [i_0 - 1] [i_0] [i_2] [i_0] [i_6 - 1] = var_1;
                            }
                        }
                    }
                    var_22 = var_2;
                    var_23 = (((min((min(var_6, var_12)), (((-8086272215276647541 ? 1 : var_8))))) > 10395));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            {
                var_24 *= ((((max(((min(var_1, var_16))), ((46845 ? 1 : -204360592))))) - ((~(arr_15 [10] [i_7] [10] [i_7] [i_7] [i_7])))));
                arr_28 [i_7] [6] [i_7] = ((+(((((var_17 ? (arr_4 [i_8]) : 255))) ? 64116 : ((min(var_10, var_15)))))));
                var_25 -= 12;
            }
        }
    }
    var_26 &= ((((~(~var_4))) % ((min(-31, 1)))));
    var_27 &= var_17;
    #pragma endscop
}
