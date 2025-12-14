/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_13 = (((((25079 >= (arr_1 [i_0])))) >> (var_0 + 13505)));
        var_14 = 4294967295;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            var_15 = (max(((((((-48501836 ? (arr_7 [i_1]) : -25092))) || (arr_4 [i_1])))), ((((max(var_4, (arr_5 [i_1] [20])))) << (var_8 - 200)))));
            arr_8 [i_1] = ((max(var_5, (arr_4 [i_1]))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_16 -= (((arr_11 [i_1]) ^ (arr_12 [i_1] [i_1] [i_4])));
                        arr_20 [17] [i_4] [i_4] [i_5] [i_5] = ((((var_4 ? 3549252777229652111 : (arr_17 [i_5] [i_3] [10] [1] [i_5]))) ^ 1));
                    }
                }
            }
            var_17 = (arr_11 [i_1]);
        }

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_18 += (((max(4784816189206212042, (arr_16 [i_1] [i_6] [i_1] [i_6]))) == (((-((25079 ? 25078 : -21611663)))))));
            var_19 = (min(-2147483633, (max((arr_21 [i_1]), (arr_21 [i_1])))));
        }
        for (int i_7 = 0; i_7 < 22;i_7 += 1)
        {
            arr_26 [i_1] [i_1] [i_1] = (max((arr_24 [i_1] [i_1] [i_7]), (max((((arr_13 [10] [1] [i_1]) * (arr_25 [12]))), ((var_0 ? 13268182524055964993 : (arr_13 [i_1] [i_7] [i_7])))))));
            arr_27 [20] [20] [i_7] = ((((max(-var_9, (max(2130303778816, 15920935773944891130))))) ? -25079 : var_3));
            var_20 = var_7;
            arr_28 [i_1] [i_7] = var_9;
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_21 = (max((((25 * 2130303778815) ? (max(2130303778816, var_0)) : ((max(var_12, var_0))))), ((((var_3 ? var_6 : var_6))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_22 = ((((max((arr_21 [i_1]), 805306368))) ? (-25078 | 1) : var_4));
                        var_23 = min(25076, -1548059811);
                    }
                }
            }
        }
        var_24 = (max(13, 1794008146));
    }
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 14;i_13 += 1)
            {
                {
                    var_25 -= ((((max((arr_34 [1] [i_11]), (arr_34 [1] [16])))) ? (((((~(arr_17 [i_11] [2] [i_11] [i_11] [i_13])))) ? (((((arr_16 [15] [i_12] [15] [i_12]) >= 1814485924)))) : (max(1284585349, (arr_9 [2]))))) : ((((!((max((arr_43 [i_11] [i_12]), (arr_44 [0] [1] [i_13]))))))))));
                    var_26 |= max((max(4294967286, ((((arr_37 [9]) | var_9))))), (arr_43 [i_11] [i_12]));
                    var_27 = (max(var_27, (((((max(((min((arr_12 [i_13] [i_12] [i_13]), (arr_39 [10] [8])))), (max(var_9, var_5))))) ? 2130303778811 : ((((max(var_11, (arr_9 [i_12])))))))))));
                    var_28 = (max(var_28, ((max((min(1, 1284585349)), var_3)))));
                }
            }
        }
        var_29 = arr_15 [i_11] [i_11] [i_11] [i_11];
        var_30 += (min(((~(min((arr_11 [i_11]), (arr_25 [i_11]))))), (((min(87, (arr_22 [i_11])))))));
    }
    /* LoopNest 3 */
    for (int i_14 = 0; i_14 < 16;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 16;i_15 += 1)
        {
            for (int i_16 = 0; i_16 < 0;i_16 += 1)
            {
                {
                    arr_56 [i_14] [i_14] [13] = var_4;
                    arr_57 [i_14] [i_14] [0] = (max((min((arr_15 [i_14] [i_16 + 1] [i_16] [i_14]), ((max(4294967271, (arr_52 [i_14] [i_15])))))), (!var_9)));
                    var_31 = (max(var_31, ((max(((max((!-25086), 25062))), 1196243464)))));
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 16;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 16;i_18 += 1)
                        {
                            {
                                var_32 = (max(((-1 ? (arr_16 [i_14] [i_15] [i_16] [i_17]) : (((min(0, 0)))))), 2480481366));
                                var_33 = (min(var_33, (((((((3010381947 == -25086) ? var_7 : ((max(939524096, 255)))))) ? ((min((arr_7 [i_14]), (-32767 - 1)))) : ((((max(var_8, (arr_59 [i_18] [i_18] [i_18] [i_17])))))))))));
                                var_34 |= var_10;
                                arr_64 [i_17] [i_15] [i_16] [7] [i_18] [i_16] [i_15] = (var_8 * var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_35 += ((((((min(var_7, var_1))) ? ((15365045970657354318 ? var_11 : 8001579616895866591)) : ((max(var_11, var_9))))) < var_0));
    var_36 = (max(var_36, (((!((max(-891307551, -1))))))));
    var_37 |= var_4;
    #pragma endscop
}
