/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = 993947104;
                var_12 = (((min(4294967293, 698128528)) < var_7));
                arr_6 [i_0] [i_1] = ((-9007199254740991 ? ((((((1 < (arr_4 [4] [i_0])))) % 237))) : (((((var_9 ? (arr_5 [i_0] [i_1] [i_1]) : (arr_2 [i_0])))) ? (((arr_0 [i_1]) - 203)) : ((((arr_4 [i_0] [i_1]) << (((((arr_0 [i_0]) + 3871353178643119988)) - 27)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_2] [i_2] [i_3] = ((((((arr_1 [i_0] [9]) ? (min(4807906304093082707, 127)) : (arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1])))) ? ((((((65535 ? (arr_11 [i_0]) : var_8)) < var_8)))) : ((((max((arr_1 [i_0] [i_1]), 31))) ? (arr_1 [0] [i_1]) : (max((arr_3 [i_0] [i_0]), (arr_4 [i_3] [i_2])))))));
                            arr_14 [11] [i_1] [i_2] [i_3] = -120;
                            arr_15 [i_0] [i_2] [i_2] [13] [2] = ((((min(-487047620423365068, 326125184))) ? (((((var_2 >> (-61 + 86)))) ? (arr_12 [i_3] [9] [6] [i_3] [i_3] [i_3]) : 24)) : (arr_4 [2] [i_1])));
                            arr_16 [9] [i_1] [i_2] [5] = ((20 ? (((!((((arr_3 [i_0] [i_0]) ? 4074866635 : 1)))))) : var_1));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
