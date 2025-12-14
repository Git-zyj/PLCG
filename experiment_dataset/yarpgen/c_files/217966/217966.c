/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= max(((max((62362 >= 65520), var_19))), (((32 * 65525) + (max(1719552767, 21)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_21 ^= (arr_3 [i_2]);
                        arr_15 [i_1] [i_1] [i_1] [i_3] = (!9);
                        var_22 = arr_8 [i_1] [i_2 + 1] [i_2] [i_3];
                        var_23 = (var_8 && var_11);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                    {
                        var_24 = (max((min(-var_4, var_0)), (((arr_9 [i_1] [i_1] [i_2 + 1]) ? 241 : var_19))));
                        var_25 = (min(var_25, ((((((8092887773330201110 ? 3 : 9))) ? var_19 : ((var_9 ? (arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_4]))))))));
                        var_26 = ((((min(((-2266772045552616308 ? 2266772045552616309 : 3)), (arr_17 [i_0] [i_2] [i_4])))) ? -2266772045552616294 : (min(2266772045552616327, (arr_19 [i_0] [i_0] [i_0] [i_1] [i_2] [10])))));
                        arr_20 [i_0] [i_1] [i_2] [i_4] = (arr_9 [i_1] [i_2] [i_4]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_27 += (min(2, 2266772045552616326));
                                var_28 = (((arr_19 [i_0] [i_1] [i_2] [i_5 - 1] [i_6] [i_6]) | (((!1) % ((23 ? (arr_2 [0]) : (arr_25 [i_0] [i_0] [i_5] [i_0])))))));
                                arr_26 [i_0] [i_1] [i_2] [i_5] [i_1] = ((((max(57, -32749))) ? 31744 : var_12));
                                var_29 -= (((((7794946348181890124 ? 65535 : 4068993143))) ? ((min((arr_7 [i_0] [i_0] [i_0]), (arr_13 [i_0] [i_0] [i_0])))) : (((((min((arr_14 [i_0] [i_1] [6] [i_5]), var_13))) ? var_6 : ((1 ? var_10 : var_11)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
