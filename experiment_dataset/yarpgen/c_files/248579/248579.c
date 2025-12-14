/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min((var_12 ^ var_4), ((max(var_6, var_3)))));
    var_15 -= (!(!var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_0] [16] = ((((((arr_7 [17] [i_1] [i_2]) ^ (arr_3 [i_0]))) * (arr_7 [i_1 + 2] [i_1 - 1] [i_2]))));
                    var_16 += (((arr_5 [i_0]) || ((((var_8 >= 120) ? (arr_1 [i_1 + 2] [i_1]) : ((27 ^ (arr_10 [i_2 - 1] [i_2] [i_1] [i_0]))))))));
                    var_17 = (min(var_17, ((((((!(arr_3 [i_0])))))))));
                }
            }
        }
    }
    var_18 = ((72 ? 11890121482044324674 : 72));
    #pragma endscop
}
