/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_10 = (((((((max(12, var_1))) ? (~-476920920) : 105))) ? (((arr_0 [i_0 - 2] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : 0)) : ((min(var_4, var_0)))));
        var_11 = -9;
    }
    var_12 = (!(((-((192 ? 12314995055991789163 : 3362977638))))));
    var_13 = var_3;

    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((!((max((var_4 % var_5), var_7)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_14 = (max(var_14, ((max(((((arr_3 [i_1]) < var_6))), (min((var_8 < var_4), 0)))))));
                    var_15 *= (max(var_6, ((max((((!(arr_6 [i_1] [i_2])))), var_7)))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 10;i_7 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_6] = (((1 % var_5) ? ((((arr_5 [i_5] [i_5] [i_7]) <= (((arr_9 [i_4] [i_6] [i_6] [i_7]) - var_5))))) : var_5));
                        var_16 -= (((!((min(var_5, (arr_12 [i_7 + 3])))))));
                        var_17 = (~var_1);
                        var_18 = ((((!(arr_14 [0]))) ? ((var_2 >> (var_6 - 3075438209))) : (((!-1) ? var_2 : -302304434))));
                    }
                }
            }
        }
        var_19 = (((arr_2 [i_4]) <= (((var_1 * var_0) ? (arr_21 [8] [10] [i_4] [i_4] [8]) : (arr_7 [0])))));
    }
    var_20 = ((+(((!-923852242) ? 29 : ((-43 ? 0 : 6831405423469885938))))));
    #pragma endscop
}
