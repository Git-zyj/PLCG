/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [10] [i_0] [i_1] = (max((((!(((var_7 ? var_7 : var_0)))))), (max((!var_9), ((var_1 ? (arr_2 [i_0]) : var_3))))));
                var_10 = (((arr_2 [i_0]) ? var_5 : (((var_7 ? (!13715205062377676795) : ((((arr_1 [i_0] [i_1]) > (arr_3 [i_0] [i_0])))))))));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    var_11 = (min(var_11, (arr_1 [10] [i_1 - 1])));
                    var_12 = (max(var_12, (arr_2 [i_0])));
                    var_13 = (max((((((!(arr_1 [i_0] [i_0])))))), ((~(max(0, 13066129478835185940))))));
                    var_14 += var_4;
                }
            }
        }
    }
    var_15 = (max(((-(max(18446744073709551597, 2580320576492414599)))), var_5));
    var_16 += (!var_7);
    #pragma endscop
}
