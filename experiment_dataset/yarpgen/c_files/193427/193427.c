/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((!(!var_13)));
        arr_2 [0] = min((max(var_12, 7274)), (((!((min((arr_0 [i_0]), 3925395062171209652)))))));
        var_18 = (!-var_9);
        var_19 = ((-1009369444 ? 7272 : 7279));
        arr_3 [i_0] = ((!(~var_8)));
    }
    var_20 = ((((max((min(var_1, var_7)), (((var_16 ? var_1 : var_13)))))) ? ((~((var_6 ? 9043295282777507716 : var_0)))) : (!var_15)));
    var_21 = ((7274 ? var_15 : (max(var_13, 5251979260952593523))));
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_22 = ((((((((13194764812756958092 ? -5334411805119619228 : var_10))) ? ((13194764812756958093 ? var_7 : 4294967286)) : (!var_15)))) ? (max((~-2251799813685248), (~var_2))) : ((min(-var_4, ((15266 ? 15290 : 9)))))));
                arr_8 [i_2] [12] [i_1 + 1] = ((!(((-(min(var_7, (arr_1 [0]))))))));
                var_23 *= (min(((var_7 ? var_4 : 58262)), (((!(~512))))));
                arr_9 [i_2] [5] = (min(((((max(2251799813685232, -1))) ? (((arr_7 [i_2] [1] [i_1]) ? 4551 : (arr_6 [i_1] [i_1] [i_1]))) : (((!(arr_6 [i_1] [5] [i_2])))))), (max(1407727467, 1))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 15;i_5 += 1)
            {
                {
                    arr_19 [i_3] [i_4] [i_5] = ((((min(((var_11 ? (arr_4 [i_5]) : var_2)), (arr_16 [i_5 - 1] [i_5 - 1] [i_5 - 1])))) ? ((((min(1, (arr_16 [i_3] [i_3] [i_3]))) ? (arr_12 [i_5 - 1] [i_5 + 1]) : var_10))) : (max((min((arr_10 [3] [i_4]), (arr_0 [i_3]))), (arr_6 [5] [i_3] [i_3])))));
                    var_24 = (max(((-((7264 ? 17421 : 16001259455747418724)))), (((!((((arr_12 [i_3] [i_4]) ? 35022 : var_7))))))));
                }
            }
        }
    }
    #pragma endscop
}
