/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((((var_11 ? ((var_15 ? var_11 : var_8)) : var_15))))));
    var_17 = var_8;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_18 -= (((!0) ? (arr_0 [i_0 + 4]) : (((var_11 ? (arr_1 [i_0 + 4]) : var_8)))));
        arr_2 [i_0] = ((((min(-21, -1))) ? ((((arr_1 [8]) ? var_9 : 0))) : ((((~var_2) ? ((((-24781 > (arr_0 [i_0]))))) : -16)))));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [3] [i_2 - 1] [8] [i_1 - 2] [i_1] = ((((!(((-1911892936 ? -114225556 : (arr_8 [i_3] [i_1] [i_1] [i_0 + 1])))))) ? ((max(var_5, (arr_3 [i_1])))) : (((((((arr_6 [i_1] [i_3]) >= var_9)))) ^ ((5670205959455067042 ? (arr_1 [i_0]) : var_12))))));
                        arr_11 [8] [i_1] [i_2 - 2] [i_3] = (min((9 ^ 160), ((((arr_9 [i_1] [i_3]) ? 1456025839807001587 : ((~(arr_0 [i_1]))))))));
                        arr_12 [i_1] [i_1] [6] = (arr_6 [i_1] [i_1]);
                        var_19 = (min((arr_8 [i_0 + 1] [i_1] [i_1 - 1] [i_2 - 2]), (max((arr_3 [i_1]), (arr_3 [i_1])))));
                        var_20 -= ((((min(((2531282798 ? (arr_5 [i_3] [i_2 - 1] [i_3]) : (arr_1 [i_1 - 1]))), (((arr_8 [i_0] [i_3] [0] [i_3]) ? (arr_6 [i_3] [6]) : (arr_6 [i_3] [i_3])))))) ? (((~(((var_5 > (arr_4 [4] [4]))))))) : (((1 != 0) ? (((arr_6 [i_3] [i_3]) - 2582000934)) : var_5))));
                    }
                }
            }
        }
        arr_13 [2] [2] = ((((max(18446744073709551615, (arr_8 [i_0] [6] [6] [i_0])))) ? (((!(arr_4 [i_0] [i_0 + 1])))) : (((!(arr_7 [i_0] [8]))))));
    }
    var_21 = (((((~((200 ? var_5 : var_14))))) ? ((((17881 || var_9) ? 138 : ((var_11 ? var_14 : var_3))))) : ((~((-384558860 ? var_7 : var_9))))));
    #pragma endscop
}
