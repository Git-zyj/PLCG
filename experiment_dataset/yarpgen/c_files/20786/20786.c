/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 1));
                var_13 = (((((arr_4 [i_1 - 1]) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1]))) % (((arr_2 [i_0] [i_1 + 2]) ? (arr_1 [i_1] [i_1 + 2]) : (arr_1 [i_1] [i_1 + 1])))));
                var_14 = ((((max(111, 1))) & 237));
                arr_5 [i_0] |= (((var_2 ? (arr_1 [i_1 + 1] [i_1 + 2]) : (arr_1 [i_1 + 1] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_15 &= ((((arr_7 [i_2]) ? (arr_7 [i_2]) : 1)) ^ (((arr_7 [i_2]) ? (arr_9 [i_3]) : (arr_7 [i_3]))));
                arr_10 [i_2] = ((((!(((var_3 ? 1 : (arr_7 [i_2])))))) ? ((1 ? ((max((arr_9 [i_2]), (arr_9 [i_2])))) : (((1 && (arr_0 [i_3])))))) : ((((-103 || var_5) || 104)))));
                var_16 = (max((arr_3 [i_2] [i_2]), (arr_3 [i_2] [i_2])));
            }
        }
    }

    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_13 [8] [8] = (~2047);

        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_17 [5] = (max(var_2, (((((1 ? var_8 : var_1))) ? (arr_14 [i_4]) : 63488))));
            var_17 = ((((min((var_5 << var_7), var_9))) ? ((max((min((arr_2 [i_4] [10]), var_6)), (min((arr_14 [i_4]), (arr_8 [i_5] [13] [i_4])))))) : (((max(145, var_9)) % ((33 << (arr_4 [17])))))));
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_18 = ((((min(((max(21264, -25753))), var_3))) ? 4778710 : (min((arr_9 [i_4]), ((-4500 ? 63 : 1114305864))))));
            arr_20 [i_4] [i_4] [i_6] = arr_2 [i_4] [i_6];
            var_19 = ((((!((min((arr_6 [i_4]), 1))))) || 1));

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                arr_25 [i_6] = ((((min(81, 16))) ? (((arr_21 [i_4] [i_6]) ? (!var_9) : (arr_1 [i_4] [i_6]))) : ((max(((max((arr_8 [i_4] [i_6] [i_7]), 1))), (max((arr_15 [i_6]), (arr_11 [i_7]))))))));
                arr_26 [i_6] [i_6] [i_7] [i_7] = (max(var_2, 3));
            }
            var_20 = ((min((arr_16 [i_6] [12] [i_4]), (17510 & var_2))));
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        var_21 = (((((((arr_1 [i_8] [i_8]) << (2016 - 2002))) <= (((arr_3 [i_8] [10]) ? (arr_18 [i_8]) : (arr_1 [i_8] [i_8]))))) ? (((!(arr_7 [i_8])))) : var_7));
        var_22 = ((-(arr_8 [i_8] [i_8] [i_8])));
        arr_31 [i_8] [i_8] = ((105 ? -4295 : 1));
    }
    for (int i_9 = 0; i_9 < 0;i_9 += 1)
    {

        for (int i_10 = 1; i_10 < 20;i_10 += 1)
        {
            arr_40 [i_10] [4] [i_10] = 94;
            var_23 = ((-(min(-592318804, 0))));
        }
        var_24 = (((((-39 & ((((arr_32 [1] [i_9 + 1]) || var_0)))))) ? ((max(1, var_8))) : (max((((arr_39 [2] [2]) & (arr_37 [0] [0]))), (arr_36 [20])))));
        arr_41 [i_9] = ((var_10 ? (arr_33 [i_9 + 1]) : (((arr_39 [14] [i_9 + 1]) ? (arr_37 [i_9 + 1] [1]) : 23584))));

        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_44 [i_9 + 1] = max((arr_36 [i_11]), (min((arr_32 [i_9] [i_11]), -1)));
            var_25 = ((((max((arr_39 [i_11] [i_9 + 1]), (arr_39 [i_11] [i_9 + 1])))) <= (max(139, 173372642))));
            var_26 = (((((max(1, (arr_34 [i_9]))))) ? ((((7659 || (arr_33 [i_9]))))) : ((((58400 ? (arr_43 [i_11]) : var_0)) << (((arr_34 [i_9 + 1]) + 17023))))));
        }
    }
    #pragma endscop
}
