/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-(min((min(var_10, 64)), var_14))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (((arr_2 [i_0]) ? ((((arr_0 [9]) == ((-1 ? -6644 : 4641962019623948984))))) : (~2298)));
        var_17 = (max(var_17, 65535));
        arr_3 [i_0] = (max(2130405830068056574, 229));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((34715 ? -6119994660593344746 : 1));
        var_18 = 18446744073709551608;
        var_19 = arr_5 [i_1];
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 = (((arr_8 [i_3 - 4] [i_3 + 1]) == (arr_8 [i_3 + 3] [i_3 + 2])));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_21 = ((~(24671 != -21454)));
                                var_22 = 107;
                                var_23 = (!0);
                                var_24 += (((arr_20 [i_5]) ? 95 : (arr_17 [i_3] [i_2] [i_5] [i_4] [i_5])));
                                var_25 = 21816;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_26 = (min(var_26, 160));
                                var_27 = 38528;
                                var_28 = ((((!(arr_10 [9] [9] [10])))) <= ((21780 ? (arr_21 [2] [i_2] [i_6] [i_7]) : (arr_18 [i_1] [i_1]))));
                                var_29 -= (~-32027);
                                var_30 = ((((25576 ? 3947030983 : 55540)) ^ -28597));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (((arr_24 [i_1] [13] [i_1] [i_1] [i_1] [i_1] [i_1]) | (arr_21 [i_1] [i_1] [i_1] [i_1])));
    }
    var_32 |= 1;
    #pragma endscop
}
