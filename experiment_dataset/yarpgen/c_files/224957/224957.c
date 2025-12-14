/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (((((~(min(var_16, var_15))))) ? ((1 ? (var_15 > var_11) : (var_0 ^ var_17))) : var_2));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 += (((max(-455269906594813520, var_5))) ? (min((~1), (arr_0 [i_0 - 2]))) : (((2309282907 << (31744 - 31713)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_20 += (((((235 ? ((250 >> (112 - 105))) : ((min(220, 0)))))) >= (arr_7 [i_0] [i_1] [i_2] [i_3])));
                        var_21 *= ((var_6 >> (-1 + 16)));
                        var_22 ^= (arr_10 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0 - 1]);
                        var_23 = (((!(((-(arr_5 [i_3] [i_2] [i_1])))))));
                        var_24 -= (max(var_10, 3801218437));
                    }
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_4] = (max((max((max(var_17, var_12)), (((arr_11 [i_4]) ? 127 : (arr_8 [i_0]))))), -var_4));
                        var_25 *= (arr_3 [i_4]);
                        var_26 = (((((((min(var_9, var_10))) && ((min(0, (arr_5 [i_0] [i_1] [i_4]))))))) & ((((((arr_3 [i_0]) ? (arr_0 [i_4]) : (arr_2 [i_4]))) < (((var_7 ? var_16 : var_14))))))));
                        var_27 = (((var_7 - (arr_13 [i_0] [i_0] [i_0] [i_0 - 2] [i_4 + 3] [i_4]))));
                        var_28 &= (arr_9 [i_4]);
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_29 = (max(var_29, var_15));
                                var_30 = (min(((((arr_18 [i_0] [i_1] [i_6] [i_5 - 3] [i_6]) % var_0))), ((18446744073709551615 ? 1 : (min(-71, (arr_2 [i_6])))))));
                            }
                        }
                    }
                }
            }
        }
        var_31 -= (!65534);
        var_32 = 228;
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_33 &= (min(((((arr_21 [i_7] [0]) == (arr_6 [i_7])))), ((((arr_10 [i_7] [i_7] [i_7] [4] [i_7] [i_7]) ? 193 : 28672)))));
        arr_23 [i_7] = arr_2 [i_7];
        var_34 = (max(var_34, -121));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_35 = (arr_25 [i_8] [i_8]);
        var_36 = var_6;
    }
    #pragma endscop
}
