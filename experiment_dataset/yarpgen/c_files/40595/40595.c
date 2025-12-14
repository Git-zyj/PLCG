/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((4095 ? 1701499646 : 0)));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_11 *= var_4;
                                var_12 ^= 187;
                                var_13 = 8040800701209984896;
                                var_14 = (max(var_14, ((max(109, -1765051027868206151)))));
                                var_15 *= -240;
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_16 ^= ((max((min(var_3, 61)), 1701499646)));
                        arr_19 [i_0] [i_1] [i_1] [i_0] = 0;
                        var_17 = (max((arr_16 [i_1 - 1] [i_2] [i_2] [14] [i_5]), -var_3));
                        var_18 = (min(var_18, -23231));
                        var_19 = (max(((65525 ? var_10 : var_2)), 0));
                    }
                    var_20 = (min(var_20, ((max((2594235878 | -2039971146), 6167978285570570430)))));
                    var_21 = (!0);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    var_22 = ((((109 + ((89 ? 69 : 1469309696)))) / (--2337430109134078567)));
                    arr_28 [i_7] [i_7] [i_7] = (((((458215856 ? var_8 : 0))) ? var_3 : ((((0 / (arr_6 [i_6] [i_7] [i_8]))) % (arr_20 [i_8])))));
                    var_23 = min(-1997098897894688363, (((23231 + 6018324361522859512) ? (arr_8 [i_7] [i_7 - 1] [i_6]) : (((max(0, 68)))))));
                }
            }
        }
    }
    var_24 ^= (37565 % -1);
    #pragma endscop
}
