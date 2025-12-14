/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_13 = ((var_11 % (min(3996815162153873637, var_12))));
                    arr_7 [i_0 - 2] [i_2] [i_0 - 2] [8] = ((~((var_12 | ((max(var_4, var_10)))))));
                    arr_8 [i_2] [i_1] [i_2 + 1] [i_2] = (-(max(3996815162153873637, 21)));
                    var_14 = ((var_11 ? (((!(arr_1 [i_0 + 2])))) : (!3145669633)));
                    var_15 = (max(-17408562429883466660, (((max((arr_6 [i_0 + 1] [i_0 + 1]), var_5)) * ((3996815162153873653 / (arr_4 [i_2] [i_1] [i_1] [i_1])))))));
                }
            }
        }
    }
    var_16 = var_0;
    #pragma endscop
}
