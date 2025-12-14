/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (4294967276 / var_4);
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (max(var_12, ((min((max((!0), var_4)), ((((arr_0 [i_0 + 1]) == (arr_0 [i_0 + 2])))))))));
                var_13 ^= (((min(25, (arr_1 [i_0 + 2] [i_1 - 2]))) == (((arr_2 [i_0 + 4] [i_0 + 3] [i_1 - 2]) ? 1187086454 : 136))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((186 ? 1 : 279));
                                var_15 = (max(var_15, ((min(1, (((((14016 ? (arr_7 [i_2]) : 8176)) == 1))))))));
                                var_16 |= (-127 - 1);
                            }
                        }
                    }
                }
                var_17 += (max(((-(arr_9 [6] [i_1 + 1] [i_1] [i_1 - 3] [i_1] [22] [22]))), (8166 == 120)));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_16 [4] = ((-(arr_1 [i_5] [i_5])));
        var_18 = (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        arr_19 [i_6] = ((-31 ? ((((!185) == 111557142))) : (arr_4 [8])));
        var_19 += ((((((((arr_1 [i_6] [i_6]) ? 185 : 8176)) / var_7))) / ((-(min((arr_6 [i_6] [i_6] [i_6] [1]), var_2))))));
    }
    #pragma endscop
}
