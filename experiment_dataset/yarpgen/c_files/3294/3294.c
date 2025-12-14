/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = (max(var_14, var_11));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((((11957 ? 0 : 3194806856748171368)) >= (min(3194806856748171368, (arr_1 [10] [18])))))) % ((0 - (arr_1 [4] [4]))))))));
        var_16 ^= ((((((arr_0 [i_0] [8]) << (63 - 60)))) ? (((!19234) ? (70 % 72) : (arr_0 [i_0] [18]))) : ((((~220) < (arr_1 [6] [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] &= ((-(min(-1, 3767496587))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] [i_1] = (min(((min((arr_9 [i_1 - 1]), (arr_3 [i_1 - 1])))), (arr_9 [i_1 + 1])));
                    arr_14 [i_3] [i_3] [i_1 - 1] = arr_9 [i_1];
                }
            }
        }
        arr_15 [i_1 + 1] = -978191664;
    }
    for (int i_4 = 1; i_4 < 13;i_4 += 1)
    {
        var_17 ^= (((((((!(arr_6 [i_4 - 1])))) % (arr_8 [i_4 + 1] [i_4 + 1]))) & 61));
        arr_18 [i_4] = var_5;
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    var_18 -= ((((!(((arr_11 [i_5] [i_5] [i_4]) && var_3)))) && ((min(978191676, (arr_21 [i_6]))))));
                    var_19 = ((~(((arr_5 [i_4] [i_4]) ? 1650340190 : ((((arr_25 [i_4] [i_5] [i_5]) ? var_9 : (arr_10 [i_4]))))))));
                    var_20 = ((~(~-8)));
                }
            }
        }
    }
    #pragma endscop
}
