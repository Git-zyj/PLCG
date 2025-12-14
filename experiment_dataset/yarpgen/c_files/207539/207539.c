/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (((((min((arr_3 [i_1]), 10176))) ? (arr_4 [i_0]) : (((arr_2 [1] [14]) ? (arr_1 [i_1]) : 53625)))));
                var_18 = ((((((5801608033691451135 ? 23885 : 3181)) << ((((-1 ? var_15 : -20539)) - 1854)))) >= (((!(((37412 ? var_1 : 45157))))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_19 = (3660620901 && 23858);
        arr_8 [i_2] = var_8;
        var_20 = (max(var_20, (((29826 ? (max(13944640645527683285, 1976755387)) : (((((arr_5 [i_2] [i_2]) && (arr_5 [i_2] [i_2]))))))))));
        var_21 = (((((1953442338288692761 - 429222008) ? (arr_6 [i_2] [1]) : 7771)) ^ (((((arr_7 [i_2]) >= var_13)) ? ((max((arr_6 [22] [22]), 41678))) : ((max(-8842, var_2)))))));
    }
    for (int i_3 = 1; i_3 < 9;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = 65519;
        arr_12 [5] = max(((((((23898 ? (arr_10 [i_3]) : 15099528129154148999))) || ((((arr_6 [i_3] [i_3]) ? (arr_1 [11]) : 127)))))), (~994079304));
        arr_13 [i_3 - 1] = (arr_0 [i_3 + 2]);
    }
    #pragma endscop
}
