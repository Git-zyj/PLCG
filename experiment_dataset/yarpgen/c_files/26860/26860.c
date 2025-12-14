/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((!((((var_4 / var_0) >> (((max(255, var_6)) - 224)))))));
    var_13 = (min(var_13, (((((!2770950133) == ((var_5 ? var_8 : var_5)))) ? var_11 : var_6))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 += ((~((var_9 / (arr_0 [i_0])))));
            var_15 = (((((~(arr_1 [i_1] [i_1])))) && 3973462270692193454));
        }
        var_16 = (max(var_16, ((((((arr_0 [i_0]) ? (arr_4 [i_0] [13]) : var_4)) <= (arr_1 [i_0] [i_0]))))));
        arr_5 [i_0] = 29182;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 += (((((var_7 ? (((arr_6 [i_2]) ? var_8 : 172)) : (((var_2 && (arr_7 [i_2]))))))) >= ((var_7 & (arr_7 [i_2])))));
        var_18 += 14473281803017358169;

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                var_19 = (max(var_19, -var_9));
                arr_14 [i_3] [i_3 + 1] = (((((89 ? (arr_11 [i_4] [i_3 - 1]) : ((((arr_6 [i_2]) >= var_2)))))) ? (min((max(var_11, 3973462270692193447)), ((var_0 ? (arr_11 [i_2] [i_2]) : var_5)))) : -4949164757006706514));
            }
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_18 [i_3] = ((((!(((511 ? 3973462270692193454 : (arr_16 [i_5] [i_3] [i_5])))))) ? ((0 ? ((135 ? var_10 : (arr_15 [i_2] [i_2] [i_2] [i_2]))) : var_8)) : ((((var_11 && (arr_12 [i_5] [2] [18] [7])))))));
                var_20 = (max((((42347002 ? 26 : (arr_10 [i_5])))), (((arr_6 [i_3]) ? ((var_11 ? var_11 : var_3)) : var_0))));
            }
            arr_19 [i_3] [i_3] = (((-4949164757006706494 >= var_10) ? (((max(var_9, (min(-126, 0)))))) : 768));
            var_21 += (arr_6 [i_2]);
            arr_20 [i_3] [i_3] = var_10;
            arr_21 [i_3] = (i_3 % 2 == 0) ? ((max(3973462270692193454, ((((((arr_16 [i_3 - 1] [i_3] [i_3]) + 2147483647)) >> (arr_9 [i_3 + 1]))))))) : ((max(3973462270692193454, ((((((((arr_16 [i_3 - 1] [i_3] [i_3]) - 2147483647)) + 2147483647)) >> (arr_9 [i_3 + 1])))))));
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            arr_25 [i_6] [i_2] = ((((max((((!(arr_22 [i_2] [i_6])))), (arr_23 [i_2] [i_2] [i_2])))) ? var_0 : ((var_8 ? (arr_6 [i_2]) : (((var_8 | (arr_9 [i_2]))))))));
            var_22 = (((!(arr_22 [i_6] [i_6]))));
            arr_26 [i_2] [i_6] = ((((((arr_13 [i_2] [i_2] [i_6] [i_6]) ? 585046723 : 914623709))) ? ((((arr_13 [i_2] [i_6] [i_6] [i_6]) >= (arr_13 [i_6] [i_2] [i_2] [i_6])))) : ((var_11 ? (arr_10 [i_2]) : (arr_13 [i_2] [i_6] [i_6] [i_6])))));
        }
    }
    #pragma endscop
}
