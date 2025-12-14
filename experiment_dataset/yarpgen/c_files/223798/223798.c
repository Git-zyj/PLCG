/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 |= ((((((arr_3 [i_0] [i_0]) ? (~var_1) : (-1696664267 > var_12)))) < (max((arr_1 [i_0]), (arr_3 [i_0] [i_0])))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = (max(var_19, (((~(arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]))))));
                        arr_11 [1] [i_1] [i_1] = ((~(min(var_9, ((1 - (arr_3 [i_0] [i_1])))))));
                        var_20 &= (((~(255 || -795670510))));
                        arr_12 [i_2] [i_0] [9] [i_3] [i_1] = (max(255, 253));
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_4 = 3; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_18 [i_1] [i_1] [i_4] [i_4] [i_5] = ((((((arr_4 [i_0] [i_1 - 1] [i_0]) ? 4501400604114944 : (((7 <= (arr_1 [i_0]))))))) ? (max(((4 ? (arr_10 [16] [i_4] [i_1 + 1] [i_0] [i_0]) : 0)), (arr_14 [i_1] [i_4] [i_1]))) : ((((var_2 ? 3 : -795670501)) << (((((arr_13 [i_1]) ? (arr_14 [i_0] [i_1] [i_1]) : (arr_0 [i_4 - 3]))) - 135))))));
                        arr_19 [i_0] [3] [i_1] [i_1] = ((~((max((arr_14 [i_1] [i_1] [i_1]), (arr_3 [i_1] [i_5]))))));
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_21 = (min(var_21, (((~(arr_17 [i_0] [16] [i_0] [i_0] [i_0] [i_0]))))));
                var_22 = (max(var_22, ((var_0 ? ((65385 ? 268435455 : 253)) : 253))));
                arr_25 [i_6] = (-1073741824 ? (arr_16 [i_0] [i_6] [i_7] [i_0] [i_7] [i_0]) : -795670501);
            }
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 18;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 19;i_9 += 1)
                {
                    {
                        var_23 = 795670511;
                        var_24 = (min(var_24, (1 != 1)));
                        var_25 = ((~(min((~-1), ((((arr_16 [i_9] [i_8] [i_6] [i_6] [i_0] [10]) && var_5)))))));
                    }
                }
            }
            var_26 = (((795670509 ? (arr_13 [i_6]) : ((-1937852345 ? var_8 : 190)))));
        }
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            arr_33 [i_10] [i_10] = (max((~3), ((((((((arr_21 [16] [i_10]) && (arr_22 [i_10]))))) > (((arr_4 [0] [i_10] [i_0]) ? 60091 : (arr_3 [i_0] [i_10]))))))));
            arr_34 [i_0] [i_10] [i_10] = (((((min(12288, 0)))) % (~4294967279)));
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_27 = (((arr_5 [i_0] [i_0] [i_0]) ? ((~((94 ? (arr_29 [i_11] [i_11] [i_0] [i_11] [i_0]) : var_9)))) : (((((~1) >= ((((arr_32 [i_0] [i_11] [i_0]) > (arr_29 [i_11] [i_11] [i_0] [i_11] [i_0]))))))))));
            arr_37 [i_0] [i_0] [i_0] |= (((arr_15 [i_11] [17] [i_0] [i_0]) % (max((((var_12 ? (arr_28 [i_0] [i_0]) : -1))), (arr_0 [i_0])))));
        }
        arr_38 [13] = ((~(((arr_8 [i_0] [i_0] [i_0]) / (arr_8 [i_0] [i_0] [i_0])))));

        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_28 -= (((~((min((arr_14 [i_12] [i_12] [i_12]), var_9))))));
            var_29 &= (arr_15 [i_12] [i_12] [i_0] [i_0]);
        }
    }
    for (int i_13 = 0; i_13 < 23;i_13 += 1)
    {
        var_30 = ((((min((arr_42 [i_13]), (arr_42 [i_13])))) ? ((max((arr_42 [i_13]), (arr_42 [i_13])))) : (22981 >= 0)));
        arr_45 [i_13] [i_13] = ((~((~(var_2 & 1)))));
    }
    var_31 = (max(var_31, ((((max((var_7 + var_12), ((max(var_10, var_10))))) != ((((((max(var_15, 22981))) || (-8386457709094696839 % 1))))))))));
    #pragma endscop
}
