/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1) /* same iter space */
    {
        var_18 = (min(var_18, ((max((var_7 > var_7), (max((min(4654234226401765251, 961093120546905944)), var_15)))))));
        var_19 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] [i_1 - 1] = var_13;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = ((~((max(var_15, 31)))));
            arr_9 [i_1] |= 20896;
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_21 = (max(var_21, (var_10 * var_2)));
            arr_12 [i_1] [i_3] &= ((((+(max((arr_4 [i_1]), 21)))) >> var_6));
            var_22 = (max((arr_10 [i_1 + 3]), var_16));
            var_23 = min(((min((var_7 || var_4), -22457))), (max((min(-961093120546905926, var_1)), (min(var_11, var_1)))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 += var_7;
                var_25 = (var_1 / var_16);
            }
            var_26 = var_14;
        }
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_27 = var_10;
                var_28 ^= arr_18 [i_8];
            }
            var_29 = ((var_12 << (var_17 - 61)));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                var_30 = (arr_29 [i_10]);
                var_31 = (var_10 | var_11);
            }
            arr_32 [i_6] [i_9] = var_14;
            var_32 = (((((min(var_16, var_4)))) && ((((var_8 || var_17) ? (var_11 && var_6) : 1442893777894949663)))));
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_33 = 1;
            var_34 = ((((var_14 ? 1 : var_8)) << (1442893777894949652 - 1442893777894949638)));
            var_35 = (arr_24 [i_6 + 1] [i_11] [i_11] [i_11]);
        }
        var_36 ^= (((((((((arr_8 [i_6] [i_6 - 2]) ? (arr_11 [i_6] [i_6]) : var_13)) <= (min(var_10, var_3)))))) % ((-(max((arr_30 [10] [i_6 - 2] [2] [10]), 2552931188))))));

        /* vectorizable */
        for (int i_12 = 1; i_12 < 10;i_12 += 1)
        {
            var_37 = -1442893777894949637;
            arr_37 [i_6] = (((!var_6) ? (arr_5 [i_6]) : ((3712446045 ? 1 : var_7))));
            var_38 = var_9;
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                var_39 = (arr_25 [i_6] [i_6 + 1] [i_6]);
                var_40 = (max(var_40, (((((441027837 || ((min(var_11, 961093120546905938))))) ? (((!((min((arr_18 [i_14]), (arr_33 [i_14] [i_13] [i_6]))))))) : var_6)))));
            }
            var_41 = var_16;

            for (int i_15 = 1; i_15 < 8;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 12;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 12;i_17 += 1)
                    {
                        {
                            arr_49 [i_6] [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6 - 1] = (max((((arr_19 [i_6]) ? (arr_7 [i_6]) : 1)), (((arr_28 [2] [i_6 - 2] [2] [9]) / (arr_2 [i_6])))));
                            arr_50 [i_13] [i_13] [i_15] [i_13] [i_17] [i_16] [i_6] = var_16;
                            var_42 ^= ((~(min(16679208779937682625, (arr_11 [i_6 + 1] [i_6 - 2])))));
                            var_43 = var_2;
                        }
                    }
                }
                var_44 = (6134665575355401439 >> (961093120546905952 - 961093120546905898));
                var_45 = var_8;
            }
            var_46 = (((((arr_46 [2]) || 35)) && (var_5 || var_12)));
            var_47 = (max(var_47, ((min(((max((arr_8 [i_6 - 2] [i_13]), (arr_8 [i_6 + 1] [i_13])))), (arr_8 [i_6 + 1] [8]))))));
        }
    }
    for (int i_18 = 2; i_18 < 17;i_18 += 1)
    {

        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            var_48 = (max(var_48, ((((((17 ? (arr_53 [8] [8]) : var_5)) == (arr_54 [i_18] [16] [i_19])))))));
            var_49 = arr_55 [i_18];
        }
        for (int i_20 = 0; i_20 < 18;i_20 += 1)
        {
            arr_59 [i_18] = ((~((((max(35, (arr_58 [i_18] [i_20])))) ? (((arr_56 [i_18]) / (arr_58 [i_18] [i_20]))) : (arr_58 [i_20] [6])))));
            var_50 = (min(var_50, ((min(16, ((var_11 ? (arr_55 [8]) : (arr_51 [i_20]))))))));
            arr_60 [i_18] [i_20] = 69;
        }
        for (int i_21 = 0; i_21 < 18;i_21 += 1)
        {
            var_51 = (arr_54 [i_18] [i_21] [i_21]);
            var_52 = (max((((((((arr_51 [i_18]) && var_4))) % var_3))), var_1));
            var_53 &= (((((var_2 & (~var_4)))) ? (arr_51 [i_18]) : (~var_13)));
        }

        for (int i_22 = 0; i_22 < 18;i_22 += 1)
        {
            var_54 = (max(var_54, (arr_53 [i_18 - 2] [i_18 - 2])));
            var_55 = var_17;
            /* LoopNest 3 */
            for (int i_23 = 0; i_23 < 18;i_23 += 1)
            {
                for (int i_24 = 3; i_24 < 15;i_24 += 1)
                {
                    for (int i_25 = 0; i_25 < 18;i_25 += 1)
                    {
                        {
                            var_56 = ((1 ? ((((((!(arr_53 [14] [i_22]))))) % (arr_54 [i_23] [14] [i_23]))) : (arr_51 [i_22])));
                            var_57 = 56096;
                        }
                    }
                }
            }
        }
        for (int i_26 = 0; i_26 < 1;i_26 += 1)
        {
            var_58 = ((-((max((arr_61 [i_18 - 2] [i_18]), (arr_61 [i_18 + 1] [i_18]))))));
            arr_78 [i_18] = (arr_67 [17] [i_18] [i_26]);
        }
        arr_79 [i_18] [i_18] = ((var_17 ? var_2 : (arr_77 [i_18] [i_18])));
        var_59 = 1;
    }
    var_60 = (min(var_60, ((((var_13 ? var_2 : ((min(var_7, var_6)))))))));
    #pragma endscop
}
