/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [17] [i_0] = (arr_0 [i_1 + 1]);
                arr_7 [i_0] [i_0] = (((((!((!(arr_3 [i_1 - 1] [18])))))) / var_9));
            }
        }
    }
    var_14 = ((((((!(!var_4))))) >= ((min(var_5, var_9)))));
    var_15 *= ((~(((((63 ? 1 : 45194)) >= ((1 >> (20345 - 20321))))))));
    #pragma endscop
}
