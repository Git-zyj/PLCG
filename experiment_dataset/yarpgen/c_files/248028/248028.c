/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!(var_8 != var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_1] [i_2] = (((-127 - 1) ? (((((((var_1 != (arr_2 [i_0]))))) != (arr_10 [i_0] [i_1] [i_2] [i_2] [3])))) : 24638));
                                var_13 = (max(var_13, (((-(1 != 1))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [i_0] [i_0] = ((-255 ? -51942159 : (arr_5 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2])));
                    arr_14 [i_2] [i_1] [i_1] = (((((0 ? (arr_4 [i_1 + 2] [i_1] [i_2]) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) ? (~127) : (arr_4 [i_1 - 1] [i_2] [i_2])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_14 = (!1);

                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_22 [i_6] &= 4257461624;
                    var_15 = (max(var_15, (((((!(-100 != 0))) ? var_10 : var_8)))));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_26 [i_6] |= 60;
                    var_16 = (((2 != 18446744073709551600) ? 193 : 1));
                    arr_27 [i_5] [4] [i_8] [i_5] = 1;
                    var_17 ^= ((max((913966280 != 60), 784180761)));
                }
            }
        }
    }
    var_18 = ((var_3 ? (!13547387106170906545) : ((-30 ? (max(16971649691979221123, 134)) : var_4))));
    var_19 = (((1746210751 != 15669184776289693278) ? (~37505673) : (max(var_2, var_4))));
    #pragma endscop
}
