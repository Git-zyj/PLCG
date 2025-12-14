/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (8186078981002124447 < 127);
    var_11 = var_3;
    var_12 = 2147483638;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (max((max(0, ((var_7 ? (arr_0 [i_0]) : var_0)))), ((((((var_0 - (arr_0 [i_0])))) || ((max((arr_1 [i_1 + 2] [i_0]), 104))))))));
                var_14 = (((arr_2 [i_0] [i_0] [i_1 - 2]) ? (max((arr_1 [i_0] [i_1]), (arr_2 [11] [i_1 - 4] [i_1 - 2]))) : (arr_1 [i_0 + 1] [i_1])));
                arr_4 [i_0] [i_0] [i_0] = ((11861581402229635573 ? (arr_2 [i_0 - 2] [i_0 + 1] [i_1]) : ((((3 < (max(4294967275, 11175404170299579289))))))));
            }
        }
    }
    #pragma endscop
}
