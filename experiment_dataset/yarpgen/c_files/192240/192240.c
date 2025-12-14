/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_18 -= ((!((!(((var_4 >> (var_7 + 82))))))));
                    var_19 = (arr_0 [i_2 + 1] [i_0]);
                    arr_8 [i_0] [12] &= var_7;
                }
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    var_20 = var_11;
                    arr_11 [1] [i_1] [i_0] = (~var_9);
                }
                var_21 = (((((arr_9 [i_0]) ? (arr_9 [i_0]) : (arr_6 [i_0])))) ? ((((arr_6 [i_0]) ? var_4 : (arr_6 [i_0])))) : (~2559868964));
            }
        }
    }
    #pragma endscop
}
