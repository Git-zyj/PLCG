/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = ((~((-31474 | (65523 ^ 2738697330)))));
                var_11 = (~((((max(18446744073709551611, 13))) ? ((1514819396422677037 ? 13456784607968815562 : (arr_0 [i_0] [i_0]))) : (((min(161, 70)))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 8;i_2 += 1)
                {
                    var_12 ^= 4236195122;
                    var_13 *= (arr_4 [i_0] [i_1] [i_0]);
                    var_14 = (2564139779 | 26646);
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 9;i_3 += 1)
                {
                    var_15 = ((!(((-(arr_0 [i_0] [2]))))));
                    var_16 = ((16931924677286874579 ? var_3 : (arr_8 [i_3 - 1] [i_3 - 1])));
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 7;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = (((arr_17 [i_4 + 3] [i_1] [i_5 - 2] [3]) || 65510));
                                var_18 = ((((((-37 && (arr_1 [i_0]))))) != -6485375489225050845));
                                var_19 = 255;
                            }
                        }
                    }
                    arr_21 [i_1] [i_0] [i_1] = ((16256 ? (arr_15 [i_0] [9] [i_1] [i_4 + 1] [9]) : (0 * 26646)));
                    var_20 = (((arr_12 [i_4] [i_4 + 3]) ? -45 : (arr_20 [i_4 + 2] [3] [3] [i_4 + 1] [3] [i_4 - 2] [6])));
                }
            }
        }
    }
    var_21 = (min((~4294967295), (~var_9)));
    #pragma endscop
}
