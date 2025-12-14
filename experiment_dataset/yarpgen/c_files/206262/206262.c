/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206262
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = var_5;
                arr_6 [i_0] = var_5;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 ^= ((var_9 ? (((arr_1 [i_1 - 1] [i_2 + 1]) ? (arr_10 [i_1 - 1] [i_2 + 1]) : -1896543672300945645)) : (arr_1 [i_1 - 1] [i_2 - 1])));
                            arr_12 [i_3] [18] [i_1] [9] = ((!((max(var_2, (min(1896543672300945644, var_10)))))));
                        }
                    }
                }
            }
        }
    }
    var_12 = (min(var_12, (min(-17200, 1896543672300945644))));

    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    arr_22 [i_5 + 1] [i_5 + 1] = (((arr_18 [i_5 + 1] [i_5 - 1] [i_5 + 2]) ? (((!(arr_18 [i_5 + 2] [i_5 + 1] [i_5 + 2])))) : ((var_10 ? (arr_18 [i_5 + 2] [i_5 - 1] [i_5 + 1]) : (arr_18 [i_5 - 1] [i_5 - 1] [i_5 + 1])))));
                    arr_23 [i_5 + 2] [i_6] = (min(((((max(var_6, (arr_14 [i_4] [i_5])))) ? 9775628112840844852 : var_8)), (arr_17 [i_5])));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                {
                    arr_28 [4] [i_8] [i_8] [20] = var_4;
                    arr_29 [i_8] [i_8] = var_2;
                }
            }
        }
        arr_30 [5] = (((((~0) ? (((max(var_9, 19612)))) : ((var_4 ? var_5 : (arr_20 [i_4] [8] [8] [i_4])))))) ? (((((var_6 ? -9 : (arr_21 [i_4] [i_4] [i_4] [i_4])))) ? var_1 : var_8)) : ((((min(31981, var_9))) ? 17779 : var_1)));
        arr_31 [16] = ((((min((max(4294967294, -2309952830645718470)), (arr_24 [i_4] [i_4] [i_4])))) ? (((~2309952830645718469) ? (max(137438953471, 5086)) : var_1)) : ((((arr_20 [i_4] [i_4] [i_4] [i_4]) ? var_5 : var_4)))));
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
    {
        var_13 = (((~var_4) ? (max((min(9775628112840844852, -2309952830645718465)), ((min(var_6, var_9))))) : -5590367015860478429));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                {
                    var_14 = (max(var_14, (((var_4 ? var_5 : ((var_5 ? (arr_18 [i_9] [i_10] [i_11]) : (arr_18 [i_10 + 1] [i_10 - 1] [0]))))))));
                    arr_38 [i_9] [i_10] [i_10] [i_10] = var_0;
                    var_15 = (min(var_15, var_8));
                    var_16 = (min(var_16, ((max(((((((arr_13 [i_11] [i_9]) ? 8 : var_9)) >> ((((var_2 ? var_9 : var_4)) - 33533))))), (max(((70 ? var_8 : -868177353434321186)), (((16153 ? 16003 : 4912))))))))));
                }
            }
        }
        arr_39 [i_9] = (max(((max((arr_32 [i_9]), (arr_32 [i_9])))), (min(18034912696726119711, 220))));
        arr_40 [i_9] = -1954288927;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 10;i_14 += 1)
                {
                    {
                        var_17 = (min(var_17, (((((arr_10 [i_9] [i_9]) ? var_1 : var_7))))));
                        arr_50 [6] [i_9] = ((~(max((8456638763157207730 & 7168), 72))));
                        arr_51 [i_9] = (max(2251799813685248, -683002271280966275));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1) /* same iter space */
    {
        arr_55 [i_15] = var_2;
        /* LoopNest 2 */
        for (int i_16 = 2; i_16 < 9;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 10;i_17 += 1)
            {
                {
                    arr_63 [i_15] [i_15] [i_17] [i_17] = (max((max(-53, var_6)), var_6));
                    var_18 = (~var_6);
                    arr_64 [i_15] [i_17] [i_15] |= var_1;
                    var_19 = (min(var_19, ((max((min((arr_41 [i_15] [i_17]), var_1)), (((var_0 ? (arr_20 [i_15] [i_16 + 1] [i_17] [5]) : (arr_45 [i_15] [i_16 - 1] [i_17])))))))));
                }
            }
        }
    }
    #pragma endscop
}
