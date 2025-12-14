/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_16 = (max(var_16, ((min(((((max(var_7, var_12))) ? (arr_2 [i_0] [i_0]) : (min((arr_2 [i_0] [i_0]), var_3)))), -var_6)))));
        arr_3 [i_0] = (min(((9286739433354994066 ? 9550958187482396950 : (arr_2 [i_0] [i_0]))), ((min(1959631178, (arr_0 [i_0]))))));

        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            var_17 *= (min(((~(9550958187482396969 >= var_12))), ((-(arr_6 [i_1 + 1] [i_1] [i_1])))));
            arr_8 [i_0] [i_0] [i_1] = ((((arr_5 [i_1 - 2] [i_0]) ? (~2681140112) : (arr_7 [i_0] [i_1 - 1]))) / 10034);
        }
        var_18 = (((24011 << (((2681140112 & 3823006499) - 2211345141)))) << (((((arr_7 [i_0] [i_0]) ? (((~(arr_5 [i_0] [i_0])))) : -14869319269361845959)) - 18446744073709551586)));
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_14 [i_2] [5] [i_2] = (arr_11 [i_2] [i_2] [i_3]);
            arr_15 [i_2] = (~9550958187482396950);
            arr_16 [i_2] = (((arr_13 [i_2] [i_2] [i_2]) ? var_12 : var_9));
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_19 = (arr_24 [i_4] [i_6 + 2] [0] [i_6 - 1] [i_6 + 1]);
                            arr_25 [i_2] [i_3] = (((64883 - var_0) ? 26224 : (arr_18 [i_3] [i_4] [i_2])));
                            var_20 = (((max((arr_17 [3] [i_2]), ((((arr_17 [i_2] [i_3]) <= (arr_24 [i_2] [6] [i_2] [i_3] [i_2])))))) <= (((((((arr_17 [4] [i_3]) > 240))) + ((((arr_10 [i_2]) < var_14))))))));
                        }
                    }
                }
            }
        }
        arr_26 [i_2] [i_2] = ((~(947609992 && 1)));
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        arr_29 [i_7] [i_7] = ((~(max(3086, (~12939075356401924761)))));
        arr_30 [i_7] = (2681140096 == -947609993);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 21;i_9 += 1)
            {
                {
                    var_21 = ((((~(arr_27 [i_9] [i_7]))) > (min(-var_5, (min(var_8, var_0))))));
                    var_22 &= max(((~(min(var_14, 0)))), (max((arr_28 [0] [i_8]), var_0)));
                }
            }
        }
    }
    var_23 = (max(var_23, ((((((var_10 ? var_3 : 416941358867406888))) <= (((((var_4 ? 16 : var_0))))))))));
    var_24 = 3078111988398485031;
    var_25 = (0 & var_0);
    #pragma endscop
}
