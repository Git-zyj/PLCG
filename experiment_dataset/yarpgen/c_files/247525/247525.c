/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (((0 ? 18446744073709551615 : 13332680921517688067)));

                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_19 = ((67108352 ? (min((((~(arr_3 [i_1] [i_2] [i_1])))), ((5114063152191863576 ? 13332680921517688067 : 5114063152191863560)))) : (((((2411 ? (arr_8 [i_0] [i_1 - 2] [i_2] [i_3 - 1]) : 240))) % ((12061594311895091864 << (237 - 228)))))));
                        var_20 = (min(var_20, (((-(arr_7 [i_0] [i_1 + 3] [i_1 + 3] [5] [i_3 + 2] [i_3 - 2]))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_21 = (arr_5 [i_0] [i_0] [i_3] [i_3 + 1]);
                            var_22 = (arr_5 [i_0] [i_0] [i_3] [i_4]);
                            var_23 = -7883;
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_24 = var_16;
                            var_25 = 4178859969;
                            var_26 = (!116107326);
                            var_27 = 4178859958;
                        }
                        var_28 = (((arr_10 [i_0] [i_0] [i_3]) > ((max(var_17, (arr_7 [i_0] [i_0] [i_2] [i_3] [9] [i_1]))))));
                        var_29 = 13332680921517688071;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_30 = arr_17 [4] [i_6];
                    var_31 = ((((((!(arr_8 [i_6] [i_7] [i_8] [i_6]))))) == (max(((-(arr_8 [i_6] [i_7] [i_8] [i_8]))), ((var_4 * (arr_15 [i_8])))))));
                    var_32 = (max(var_32, (((min((arr_19 [i_8] [i_8]), (arr_12 [24] [i_6] [i_8] [i_7 - 1] [i_6] [i_7])))))));
                    var_33 = (min(13884, (min((min(1, -1768416362)), (arr_15 [i_7 + 1])))));
                    var_34 = ((+((max((8950621383093787068 != 9707631269175296612), (arr_19 [i_6] [i_7 - 2]))))));
                }
            }
        }
    }
    #pragma endscop
}
