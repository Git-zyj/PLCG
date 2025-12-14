/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_17 ^= (min(((max((arr_1 [i_0]), (arr_1 [i_0])))), (max((arr_1 [i_0]), var_16))));
                arr_6 [i_0] [i_1 + 1] = (!(((var_16 & (var_10 <= var_15)))));
                arr_7 [i_0] [i_1 + 2] [1] = ((((min((arr_0 [i_0] [i_1 + 1]), (max(var_5, var_6))))) ? (!96) : (((min(var_2, (arr_2 [i_1 + 2])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_18 = (min(var_18, (((((min(((4 ? 126 : 159)), var_7))) ? var_7 : (min((var_12 && var_0), (min(var_13, (arr_12 [i_2] [i_2]))))))))));
                var_19 = (max(var_19, 210));
            }
        }
    }
    var_20 = min(var_14, ((min(45, -3232329883256267001))));
    var_21 = (((((((max(var_14, var_6))) ? ((max(var_3, var_12))) : 18749))) ? -var_4 : var_1));
    #pragma endscop
}
