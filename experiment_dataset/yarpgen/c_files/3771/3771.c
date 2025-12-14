/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min((!-38), 19))));
    var_18 = (max((-var_5 != 48172), (((((var_1 ? var_15 : 5049048784104934941))) ? var_6 : 13397695289604616675))));
    var_19 = (507935692 % 34036);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 |= (((((56 & 248) ? ((max((arr_3 [i_0 + 1] [i_1]), (arr_4 [i_0 + 1] [8])))) : 150)) + ((-1991832509 ? var_10 : (arr_3 [i_1 + 1] [i_0 + 2])))));
                    var_21 = (max(93, (var_15 != var_12)));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_22 = 106;
                        var_23 = (arr_4 [i_1 - 1] [i_0 + 1]);
                        var_24 = (max(var_24, (((((((arr_3 [i_0 + 2] [i_1 + 1]) ? 4038380535 : (arr_3 [i_0 + 1] [i_1 + 1])))) ? var_9 : (arr_6 [2] [i_0 + 1] [i_0 - 1] [10]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
