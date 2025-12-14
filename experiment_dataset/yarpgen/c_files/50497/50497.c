/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max(((max((~6992), var_11))), (((max(6995, var_12)) % var_4)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
        {
            var_14 &= (arr_4 [i_0] [i_0] [1]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_15 = (min(var_15, (((((arr_7 [i_0] [i_1] [i_2] [i_3]) << (((arr_12 [1] [i_1] [i_1] [i_1] [i_1] [i_1]) + 640083623))))))));
                            var_16 = ((-(arr_8 [i_1] [i_3])));
                            var_17 = (max(var_17, (((~(arr_6 [i_1] [i_1] [i_3] [i_4]))))));
                            var_18 += (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [4]) / ((~(arr_7 [i_1] [i_1] [14] [i_3])))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
        {
            var_19 = (min(var_19, ((max((arr_4 [i_0] [4] [i_5]), (min((arr_13 [i_0] [i_0]), (arr_4 [i_5] [i_5] [i_5]))))))));
            var_20 = (min(var_20, (arr_10 [i_5] [0] [i_5] [i_5] [i_5] [i_5])));
        }
        arr_16 [i_0] [i_0] = (min(((((255 || -1) || (arr_7 [i_0] [13] [i_0] [i_0])))), (min(14660, (15785838491781218322 && 27)))));
        arr_17 [i_0] [9] = ((((~((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [14]), -1))))) + (arr_4 [i_0] [2] [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_21 = 7019;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_29 [i_6] = ((!(arr_13 [i_6] [i_8])));
                    var_22 = (((arr_11 [i_6] [i_6] [i_7] [i_7] [i_8] [i_8]) ? (arr_11 [i_8] [i_7] [i_7] [i_7] [i_7] [9]) : (arr_11 [i_8] [14] [i_7] [i_7] [i_7] [i_6])));
                    var_23 = (arr_24 [i_6] [i_7] [i_8]);
                    var_24 = (arr_9 [i_7] [i_7] [i_7] [i_7] [2]);
                    var_25 = (arr_14 [i_6] [i_6]);
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        var_26 = (min(var_26, ((((((arr_32 [i_9]) ? 255 : (arr_32 [i_9]))) % ((~(arr_32 [0]))))))));
        var_27 = (((((-4383724182550149749 & (min(46, 14349106093037750580))))) ? (((max(7019, 8191)))) : ((((14664 / (arr_32 [11])))))));
        var_28 = (((arr_31 [18] [15]) || ((((max((arr_31 [i_9] [i_9]), 10599675490100461286))) && (arr_31 [4] [2])))));
    }
    var_29 = (min(var_29, (((((var_4 || (((var_11 ? var_12 : 136))))))))));
    var_30 = var_12;
    var_31 += ((-(max(var_8, var_11))));
    #pragma endscop
}
