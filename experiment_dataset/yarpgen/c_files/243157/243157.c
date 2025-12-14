/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_11));
    var_14 = (min((!var_10), (((max(var_11, var_7)) << (var_6 - 225)))));
    var_15 = 47107;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [5] = (min((((!(arr_2 [i_0])))), (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = (((arr_2 [i_0]) ? ((~((var_4 << (47107 - 47104))))) : (((min(var_4, var_3))))));
        var_16 = var_9;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] = ((((((arr_6 [i_1]) | 1))) ? (((~18407) ? (((arr_6 [i_1]) | 32761)) : (((((arr_2 [i_1]) + 2147483647)) >> (153 - 144))))) : (32761 + var_6)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_17 = (((((max(7, var_3)))) < -var_8));
                    var_18 = ((-((-(arr_12 [i_2 + 1] [i_2 + 1])))));
                    arr_13 [7] [i_2 + 1] [i_3] = 1;
                    arr_14 [i_1] [i_1] [i_2] [10] = (arr_2 [i_3]);

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_19 [i_1] [15] [i_1] [i_4] [i_4] = min((max((max((arr_11 [i_1] [11] [i_3] [i_4]), var_12)), (arr_10 [12] [i_2] [i_2 + 3]))), ((((((var_2 >> (509055210248679703 - 509055210248679688)))) ? ((max(var_4, var_1))) : 8))));
                        var_19 = var_9;

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_22 [0] [i_2] [i_3] [i_4] [i_4] [i_2] [i_4] = ((~(arr_1 [i_1])));
                            var_20 *= 20006;
                            var_21 = (min(var_21, ((((((arr_5 [i_2 - 1]) || (arr_12 [i_2 + 4] [i_2 + 3]))) ? (((!(arr_5 [i_2 + 1])))) : (((!(arr_11 [i_2 + 2] [i_2 - 1] [i_2 + 4] [i_3])))))))));
                            var_22 *= (((((!((6791759008322921090 && (arr_6 [i_2])))))) > ((((((min(7, -1))) + 2147483647)) << ((((3760304824423566330 ? var_3 : var_3)) - 31916))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            var_23 = 10;
                            arr_26 [i_1] [i_2] [i_3] [i_4] [i_4] = 0;
                            arr_27 [i_1] [i_2 + 4] [i_3] [i_3] [i_4] [i_2 + 4] = ((var_11 < (arr_21 [i_6] [i_6] [i_6] [i_6 + 1] [1])));
                            var_24 = ((var_9 ^ (((arr_7 [i_1]) % var_6))));
                        }
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 8;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_25 = (min(var_25, (((1 ? ((max((arr_17 [i_7] [i_8 - 1] [i_8 - 1] [i_8 + 2]), (~var_10)))) : ((((min(-1, 31672))) ? (max(3689002053, 33887)) : (((arr_11 [i_9] [i_9] [i_9] [i_9]) ? var_2 : (arr_23 [i_7] [13] [i_8] [i_8 + 1] [i_7] [i_9] [i_9]))))))))));
                    var_26 *= ((-((((min(3373, -20919))) ? (arr_25 [i_7] [i_7] [14] [i_9] [i_9]) : (209 && 53)))));
                    arr_38 [i_7] [i_8] [1] = 3897773185831739619;
                }
            }
        }
        arr_39 [i_7] = (max((max((arr_37 [i_7] [i_7] [i_7] [i_7]), (arr_7 [i_7]))), 192));
    }
    for (int i_10 = 0; i_10 < 13;i_10 += 1)
    {
        var_27 = ((~(~var_1)));
        var_28 = (max(2764026371882940153, (((var_9 ? (((min(245, 53473)))) : ((1 ? (arr_6 [i_10]) : 4567142443570740912)))))));
    }
    #pragma endscop
}
