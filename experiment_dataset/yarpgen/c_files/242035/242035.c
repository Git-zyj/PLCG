/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((max(5355273525684545072, (max(var_12, 16169682843220823469))))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [10] [i_1 - 2] [i_1 - 1] [i_2 - 1] [i_0] = (arr_5 [i_0] [i_0] [0]);
                        arr_13 [i_1] [1] [i_1] [1] [i_0] = ((var_18 ? 16169682843220823464 : (arr_6 [i_0] [i_0])));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_20 = (((arr_3 [i_5 + 1]) ? (arr_6 [i_0] [i_4]) : 1635338864));
                            arr_24 [i_7] [i_7] = (-1409188398 ? var_1 : (arr_17 [i_7] [i_4] [i_5 - 2]));
                            arr_25 [i_5] [i_4] [i_4] [6] [5] = (!2625617179);
                            var_21 = 5260938739247568063;
                            var_22 = 15507913003727633934;
                        }
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            var_23 = (max(var_23, (arr_7 [i_8 + 1] [i_5 - 1] [7])));
                            var_24 = (((arr_8 [i_8] [i_5 - 1] [i_8 + 1] [i_5 - 1]) && -1409188406));
                            var_25 = var_9;
                        }
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            var_26 = ((~((((arr_3 [i_4]) && (arr_3 [i_0]))))));
                            arr_31 [i_9] [i_4] [i_9] [i_5] [i_9] = ((43242 ? (arr_30 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5]) : ((var_6 >> (((arr_9 [i_0] [i_4] [4]) - 3613618436458333459))))));
                            var_27 = 0;
                        }
                        for (int i_10 = 0; i_10 < 11;i_10 += 1)
                        {
                            var_28 = 19;
                            var_29 = (min(var_29, (((~(arr_7 [i_5 - 1] [i_5 + 1] [i_10]))))));
                            var_30 -= ((2659628431 ? (6349454051781466432 >= var_0) : ((~(arr_1 [i_6] [3])))));
                            var_31 = (max(var_31, (arr_5 [i_10] [4] [7])));
                        }
                        var_32 = (((arr_26 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_6]) << (((arr_26 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [0]) - 208116880))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = (arr_19 [i_0] [i_4] [i_5 - 2] [i_6]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
