/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0 + 3] [i_0] = (min(255, ((4398046511103 ? 18446739675663040512 : 255))));
                arr_5 [i_0 + 3] = ((var_10 / ((((2398306155 ? 2 : 230)) * (((arr_2 [i_1]) * (arr_0 [i_0 + 1] [i_0 + 3])))))));
                var_16 = (((arr_1 [i_0]) ? (arr_2 [i_1 - 1]) : ((-((21 ? 4398046511104 : (arr_0 [i_0] [i_1])))))));
                var_17 = ((((1896661152 - (arr_0 [2] [11]))) * ((((arr_1 [i_0 + 2]) ^ (arr_3 [i_0 + 2] [i_1 - 1]))))));
            }
        }
    }
    var_18 = var_1;
    var_19 = (-212570424 == var_9);
    var_20 = (min(4398046511104, (((235 <= 1971778100404494967) ? (1 - 1) : 1))));
    #pragma endscop
}
