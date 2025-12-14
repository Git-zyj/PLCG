/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= max((((var_11 ? var_12 : 18020055459827202794))), (((min(var_1, 10953496726105253502)) * var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((arr_4 [i_0] [i_1]) && 409625486));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_14 = ((((((arr_2 [i_2]) | 113))) ? (arr_2 [8]) : (arr_5 [i_1])));
                    arr_9 [i_0] [i_0] [i_1] = ((!(arr_4 [i_0] [i_2])));
                    arr_10 [i_1] = -409625486;
                    var_15 = (((((arr_2 [i_0]) && (((arr_2 [i_0]) || (arr_1 [i_0] [i_1]))))) ? (arr_3 [6] [i_2] [i_2]) : (min((((arr_1 [i_0] [i_0]) ? var_12 : (arr_2 [i_2]))), 2147483648))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_16 = (min(var_16, (max((arr_2 [i_0]), ((((arr_2 [i_1]) | (arr_4 [i_0] [i_3]))))))));
                    var_17 -= (((((!15196209930162212395) ? (max(var_5, (arr_1 [i_0] [i_1]))) : ((max(-1015807131, -81)))))) ? (((((((!(arr_4 [i_0] [1]))))) <= (arr_2 [i_1])))) : (arr_7 [i_0] [i_1]));
                    arr_13 [i_0] [i_1] [i_1] [0] = var_11;
                    arr_14 [i_1] = var_2;
                    var_18 = ((((min(((var_2 ? var_12 : var_9)), (!-1)))) ? (((((max((arr_11 [i_0] [i_1] [i_1] [i_3]), -24204))) && ((!(arr_0 [i_0] [i_0])))))) : (min((max((arr_7 [i_0] [3]), (arr_5 [i_1]))), (((!(arr_1 [i_0] [i_1]))))))));
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
