/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_7, ((((((var_2 ? 12639621469670006103 : 576460752236314624))) || ((min(-9223372036854775799, 63))))))));
    var_19 |= ((var_16 >> ((((~(9223372036854775807 ^ var_13))) + 9223372032735858646))));
    var_20 |= (max(-9223372036854775784, 91));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((((((arr_2 [i_1 + 3] [i_1 + 3] [i_0]) || (arr_3 [i_0 + 2] [i_1 + 2]))) ? (arr_2 [i_0] [8] [8]) : (((!(arr_4 [i_0] [i_1 + 4]))))))) && var_12));
                arr_6 [i_0] = ((((min(((-9223372036854775781 ? (arr_0 [i_0]) : (arr_0 [i_0]))), 179))) ? var_7 : (arr_1 [i_0 + 3])));
                var_21 = 78;
                arr_7 [8] [i_0] [i_1 - 1] = ((((8214748723594319944 ? -9223372036854775797 : 18))));

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1 + 4] [i_2] [i_3] [6] [6] = ((((-var_13 ? ((78 ? 488 : 1)) : ((var_17 ? var_10 : (arr_1 [i_3]))))) % (arr_11 [i_4 - 1] [i_3] [4] [i_0 + 1])));
                                arr_16 [i_2] [i_0] [i_2] [3] [i_2] [i_2 - 1] [i_4] = 11746704210495014154;
                            }
                        }
                    }
                    arr_17 [1] [i_1] [i_0] = ((~((max(69, 1)))));
                }
            }
        }
    }
    #pragma endscop
}
