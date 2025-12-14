/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((((!(arr_0 [i_2 - 1] [i_1 + 2]))) ? (min(((-(arr_4 [i_2] [9]))), (((arr_2 [i_2] [i_1] [i_0]) ? (arr_5 [i_2] [i_2]) : (arr_1 [i_1]))))) : 255));
                    var_12 = (((arr_5 [i_2] [i_1]) ? (((((arr_3 [i_0] [i_0]) ? (arr_6 [i_0] [6] [i_2] [i_2]) : (arr_1 [i_1]))) * (((arr_6 [i_0] [i_1] [2] [i_2]) ? (arr_1 [i_0]) : 255)))) : (((max(16943864992918888509, var_4))))));
                    var_13 = ((((23 ? 11 : (~15))) <= ((min(-16124, 8)))));
                    var_14 = (max(var_14, ((((8375991893794183281 >> (237 - 197)))))));
                }
            }
        }
    }
    var_15 = (8375991893794183278 * 1);
    #pragma endscop
}
