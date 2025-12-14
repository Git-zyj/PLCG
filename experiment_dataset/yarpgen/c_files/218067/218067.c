/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~((max(-30, var_13)))))) ? (((min(4194303, -30)))) : (~9479)));
    var_15 = ((((min(var_9, (min(var_3, var_10))))) ? -var_13 : (((max(var_13, -3))))));
    var_16 = (min(var_16, ((((((min(16, 2870602730)))) ? 3944164772 : 3515067602)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (max((max(((max(var_12, (arr_8 [i_0] [i_0] [i_0] [i_2 + 4])))), (arr_10 [i_0] [i_1] [i_0]))), (((var_0 != var_12) ? (!var_12) : (min(var_5, (arr_2 [i_0])))))));
                    var_18 = arr_1 [i_0];
                    var_19 |= ((((((max((arr_0 [i_0]), var_10))) > (((!(arr_7 [i_2] [i_1] [i_0])))))) ? (((var_4 ? -262080 : (var_11 <= var_7)))) : (((max(17029621138179020644, (arr_3 [i_0]))) / var_3))));
                }
            }
        }
    }
    #pragma endscop
}
