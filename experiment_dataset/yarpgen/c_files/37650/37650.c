/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (((min((arr_2 [i_1]), (arr_2 [i_0]))) * ((((!(arr_0 [i_0] [12])))))));
                var_21 = 6780863009801550671;
                var_22 = (((((2988432316 >> (var_4 - 213127888)))) == (((min(1306534979, (arr_0 [i_0] [i_1]))) / (((arr_2 [i_1]) ? (arr_0 [i_0] [i_0]) : 1306534972))))));
            }
        }
    }
    var_23 = (min(var_5, (var_11 < -1306534979)));
    #pragma endscop
}
