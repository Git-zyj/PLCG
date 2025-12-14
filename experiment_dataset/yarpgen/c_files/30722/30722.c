/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = ((((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) != (((((var_0 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_1] [i_0])))) ? 8922858207147629552 : (max((arr_3 [6] [i_1]), var_5)))));
                var_10 = (arr_2 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_2] = (((((((-(arr_1 [i_1] [7])))) ^ ((1421012050 ? 3422379834 : -1798076146511983220)))) * ((((!(arr_8 [i_0] [6] [i_2] [i_3] [i_3])))))));
                                var_11 += (~var_4);
                                var_12 ^= (((((arr_9 [i_1] [3] [i_2] [i_1] [17]) ? (((!(arr_5 [i_0] [20] [20])))) : (((var_6 <= (arr_8 [13] [i_2] [i_2] [i_2] [i_2])))))) / (min(((((arr_5 [i_0] [i_4] [i_2]) != (arr_8 [8] [i_1 + 1] [i_1] [8] [i_1])))), (~65535)))));
                                var_13 = (min((((arr_9 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1]) ? (arr_3 [i_3] [i_2]) : (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) | var_8)))), ((~(((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 15 : (arr_0 [5])))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] = (((max(((5504003867524017282 ? (arr_1 [i_1] [8]) : (arr_7 [i_0] [i_0] [i_0] [i_0] [12]))), (arr_1 [i_1] [i_1 - 1]))) <= (385179179 * 1421012045)));
            }
        }
    }
    var_14 ^= var_8;
    #pragma endscop
}
