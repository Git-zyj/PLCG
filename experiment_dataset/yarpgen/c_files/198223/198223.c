/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((min(var_10, var_2)) >= ((min((-127 - 1), 224)))))) * (((1 >= 151) % 65523))));
    var_13 = ((((max((max(224, 342543054)), (var_3 / var_2)))) || ((((var_0 && var_2) * (var_3 == var_5))))));
    var_14 ^= max((min((((var_5 + 2147483647) << (14600372401515377469 - 14600372401515377469))), (811522767 || var_6))), ((((var_2 & 2018038869) > (143 / -11395)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max((min(((max((arr_5 [i_0] [i_0] [0] [i_4]), (arr_0 [13])))), (max(75, 26502)))), ((min(73, 133)))));
                                var_16 = (min(var_16, ((((max((257473483 * 0), (max(262142, (arr_7 [i_4]))))) * ((((min(491468859, -2147483625)) * (171 * 113)))))))));
                            }
                        }
                    }
                    var_17 += (((max(((max(var_11, var_1))), (min(143, (arr_4 [i_1] [i_1]))))) & (((21180 ^ 4934) >> (((-342543054 | var_8) + 342524622))))));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_18 = (min(var_18, (((((min((min((arr_6 [i_0] [i_0] [i_5] [i_0]), var_3)), ((min(var_4, var_9)))))) << ((((((((min((arr_5 [i_0] [i_2] [i_2] [i_5]), var_9))) + 2147483647)) << ((((((arr_7 [9]) || var_9))) - 1)))) - 2147458955)))))));
                        var_19 = ((-933482835 - 88) % (max((max(var_6, 1048575)), (var_8 <= var_8))));
                        arr_15 [i_0] [i_1] [i_2] [i_5] |= (min((((max((arr_9 [i_0]), (arr_13 [i_1]))) | ((((arr_8 [i_1] [i_0] [i_0] [i_5] [i_5]) % var_3))))), ((((min(var_2, (arr_0 [i_0]))) != ((max(var_10, 120))))))));
                        var_20 = (min((max((max((arr_2 [i_0] [9] [i_5]), -2147483625)), ((min(var_2, var_4))))), ((max((31719 >= var_6), (var_9 * 168))))));
                    }
                    var_21 = (max((max((min((arr_9 [i_2 + 3]), var_8)), (((var_4 * (arr_10 [i_0])))))), (((((min((arr_6 [i_0] [8] [i_2] [i_1]), 2548))) | ((max((-127 - 1), 6522))))))));
                }
            }
        }
    }
    #pragma endscop
}
