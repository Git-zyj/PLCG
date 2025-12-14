/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((((arr_2 [i_0] [i_1]) & (arr_1 [i_0])))))));
                var_18 = ((34687 <= ((-2577129392545574015 ? 1145180741170981989 : var_12))));
                var_19 = ((!(arr_0 [i_0])));
            }
        }
    }
    var_20 = ((~(min(((var_15 ? var_1 : var_9)), var_11))));
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_21 *= (((8014611956542165280 & 3836572140) ? (((((var_3 >> (var_7 + 2756459359336294632)))) ? (arr_8 [5]) : (arr_5 [i_2] [i_2]))) : 6632550958502944577));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_13 [i_2 - 4] [i_3] [i_3] [i_2 - 4] [i_4] [i_5] = var_8;
                        arr_14 [i_4] [i_3] [i_3] [8] = var_8;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_22 [i_4] [i_4] = (arr_11 [i_2] [5] [i_4]);
                            arr_23 [i_2 - 3] [i_4] [i_2] [i_6] [i_7 - 1] = var_6;
                            arr_24 [i_2] [i_3] [i_4] [i_6] [i_4] [i_7] = (((arr_18 [i_4]) ? (((arr_1 [i_6]) ? var_7 : 33553408)) : 17804));
                        }
                        arr_25 [i_2] [i_3] [i_3] [i_3] [i_4] [i_3] = ((arr_9 [i_2] [i_2 + 1] [i_2] [i_2 - 3]) ? (arr_12 [i_2] [i_2] [i_2] [i_2 + 2] [i_2] [i_2 - 2]) : (arr_12 [i_2] [i_2] [6] [i_2 - 3] [i_4] [i_4]));
                    }
                }
            }
        }
    }
    var_22 = (~((var_0 ? var_12 : var_6)));
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            {
                                arr_41 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [0] = -var_10;
                                var_23 = (max(var_23, (((-286682363530266938 >= (((+(((arr_6 [10] [11] [i_12]) ? var_1 : 65535))))))))));
                                var_24 = ((arr_11 [i_9] [i_9] [i_9]) ? (((arr_36 [i_8 + 1] [i_9] [i_9] [i_11] [i_12] [11]) ? var_9 : (arr_36 [i_8] [6] [i_8 - 1] [i_8 + 1] [i_8] [12]))) : ((((((var_9 ? (arr_17 [i_8] [i_12]) : (arr_5 [i_9] [i_8]))) <= -3759422980398427806)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 3; i_13 < 12;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 10;i_14 += 1)
                        {
                            {
                                var_25 = ((12 ? var_10 : var_7));
                                arr_49 [i_8] [i_14] [i_10] [i_13] = var_2;
                            }
                        }
                    }
                    var_26 = ((((min(var_8, (min(2147352576, -1145180741170981989))))) ? 3848925663 : 3801540592));
                    var_27 = ((((8014611956542165280 ? (arr_33 [i_8] [i_8] [i_10]) : (arr_33 [i_8 + 1] [i_9] [i_10]))) > (arr_33 [i_8 + 1] [i_9] [4])));
                }
            }
        }
    }
    #pragma endscop
}
