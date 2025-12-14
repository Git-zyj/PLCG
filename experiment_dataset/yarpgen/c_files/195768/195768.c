/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (min(((((((0 + (arr_3 [i_0] [10] [i_0])))) ? var_1 : (~2047)))), (((~var_12) ? (arr_0 [i_0]) : ((21 ? 141 : 7019024497410722056))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_12 [14] [i_0] [i_0] = (((((var_11 - var_10) && (arr_11 [i_0]))) ? (((((arr_0 [i_2]) ? 125 : (arr_5 [i_0] [i_0] [i_0] [0]))) | (((!(arr_5 [i_0] [i_1] [i_3] [16])))))) : (max((arr_10 [i_0] [i_0] [i_0] [3] [i_4]), ((max(50938, var_9)))))));
                                arr_13 [10] [i_1] [i_2] [i_0] [i_4] = (arr_0 [i_0]);
                                arr_14 [i_0] [4] [1] [i_0] [i_0] = ((194 ? (arr_0 [i_0]) : (min(((3820790882029441089 ? var_9 : 22615)), var_0))));
                                arr_15 [i_0] [i_4] [i_0] = (arr_3 [i_0] [i_1] [i_0]);
                                arr_16 [0] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0] = (((((min((arr_3 [i_0] [i_1] [i_0]), -3820790882029441089)) + 9223372036854775807)) << ((((((((164 ? 3820790882029441089 : -557166870330611038))) || -22616))) - 1))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = ((!((max((((arr_8 [i_5] [6]) ^ -22603)), ((-1 ? var_0 : (arr_3 [12] [i_5] [10]))))))));
        arr_20 [i_5] = var_5;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_6] [i_8] = ((~0) <= (arr_21 [i_7]));
                    arr_31 [i_6] [i_7] [9] = (arr_9 [i_6]);
                    arr_32 [i_6] [i_7] = ((((~(!var_3))) / ((((min(0, -44419220))) ? ((var_10 >> (((arr_28 [18] [5]) - 1117542008967783192)))) : (arr_9 [i_8])))));
                }
            }
        }
        arr_33 [6] [6] = (max((((7 ? 1 : 1))), (((((var_2 ? -7740891608437903404 : var_8))) ? (arr_21 [i_6]) : 25461))));
    }
    var_15 = ((-((((max(var_11, 1))) - var_10))));
    #pragma endscop
}
