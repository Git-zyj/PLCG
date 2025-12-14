/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min((max(((var_12 ? var_12 : var_2)), 116)), (!var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (!48);
                    arr_6 [i_0] [i_1] [i_2] [i_0] = ((((min((min((arr_3 [i_0] [i_0]), 2147483647)), 48))) ? ((~((120 ? var_2 : 207)))) : (arr_1 [i_0])));
                    arr_7 [i_0] [i_1] [i_1] [i_2] = (((((((125 >> (var_8 - 1772720553))) <= (((arr_0 [i_0 - 1]) * 222))))) << (((arr_5 [4] [4] [i_0] [i_0 - 1]) - 38414))));
                }
            }
        }
    }
    var_18 += var_8;
    var_19 = ((((max(52139, (min(var_13, 207))))) ? (var_7 | var_3) : (12938234509416920355 > var_9)));
    #pragma endscop
}
