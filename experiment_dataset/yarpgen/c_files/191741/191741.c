/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (max((var_15 != 515347218), (((((min(var_14, (arr_3 [i_0])))) && (arr_2 [i_0] [i_0]))))));

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_7 [10] [16] [i_2] |= (max(((((arr_0 [i_2] [i_1]) ? (arr_4 [i_0]) : ((min(1, (arr_5 [i_1] [i_1] [i_1]))))))), var_15));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_0] [i_3] [i_3] [4] [i_3] = 0;
                                var_21 -= ((((((arr_11 [i_4 + 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 - 1]) : (arr_11 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1])))) || ((max((arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 + 1]), (arr_11 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4 + 1]))))));
                                var_22 = ((((max(((var_1 ? var_16 : (arr_0 [i_2] [i_4 - 1]))), 1281532492))) ? (arr_5 [i_0] [i_1] [i_4]) : ((((max(1, (arr_0 [i_2] [i_3])))) ? (arr_11 [i_4] [i_4] [i_0] [i_3] [i_4 + 1]) : ((0 << (arr_1 [i_0])))))));
                                var_23 = min((arr_4 [i_0]), (min((arr_2 [i_0] [i_3]), 579)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_2] [i_0] = ((((!(arr_3 [i_0]))) ? ((((((var_11 ? var_13 : (arr_3 [i_0])))) ? ((((arr_2 [i_0] [i_0]) != 1))) : (arr_11 [i_0] [i_0] [i_0] [1] [i_0])))) : ((-233628976 ? (arr_2 [i_0] [i_2]) : (((arr_9 [i_0] [i_0] [i_0] [i_1] [1]) ? var_2 : (arr_6 [i_2] [i_2] [i_0] [13])))))));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    var_24 = (max(var_24, ((((arr_16 [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [12] [i_0]) : (arr_16 [i_1]))))));
                    var_25 = (!var_7);
                }

                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    var_26 = (((arr_5 [i_0] [i_1] [9]) ? var_14 : (arr_20 [0] [i_0] [i_1] [i_6])));
                    arr_21 [i_0] [i_0] [i_0] [i_0] = 18;
                }
            }
        }
    }
    var_27 -= ((((!(var_3 || var_13))) ? var_11 : (-1 / -570)));
    #pragma endscop
}
