/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_3] = (min(((min((min(-4255885562216089366, (arr_5 [i_0] [i_0] [i_0] [i_0]))), (arr_4 [i_3 + 1] [i_2 + 1] [i_2] [i_2])))), ((((((arr_5 [i_2] [i_1] [i_2] [i_3]) ? (arr_2 [i_0] [i_3]) : (arr_0 [i_1] [i_3])))) ? ((1 * (arr_2 [i_2] [i_3]))) : ((min((arr_4 [9] [9] [9] [i_3]), -9223372036854775807)))))));
                            var_18 -= ((((((((1373749756 + (arr_3 [i_0])))) ? (1 * 1) : (((arr_7 [i_1] [i_1] [i_1] [1]) + (arr_3 [i_0])))))) ? (((max((arr_4 [i_0] [i_1] [i_2 + 1] [i_3]), 6900)))) : (((((arr_4 [i_2 - 1] [i_2 - 1] [i_1] [i_0]) >= -42)) ? (arr_1 [11]) : (arr_1 [i_1])))));
                            arr_9 [i_0] [i_1] [9] [i_3] = ((~(max(8255417255134740503, (arr_1 [i_2 - 1])))));
                            arr_10 [i_0] [9] [i_2] [i_3] = (max(((((-11456 + 2147483647) >> (-9223372036854775779 + 9223372036854775783)))), (((arr_4 [i_2 - 1] [i_3] [i_3] [i_3]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1]) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] [0] = ((((((arr_3 [i_1]) ? ((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : 84))) : (max((arr_1 [i_0]), (arr_4 [i_0] [3] [i_0] [i_1])))))) ? ((max(1, (arr_6 [i_0] [i_0] [i_0] [i_0] [i_1])))) : (-32767 - 1)));
                var_19 = (1 <= 13268524760770388522);
                arr_12 [i_1] [i_0] [i_0] = (511 + 3648037376);
            }
        }
    }
    var_20 = ((((max(9223372036854775807, -1367539275)) <= (0 > 45667))));
    #pragma endscop
}
