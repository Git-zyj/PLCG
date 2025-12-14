/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (((((var_9 == var_1) == (((9 || (arr_7 [i_0])))))) && (((((0 ? 31 : (arr_8 [i_0] [i_0] [i_0])))) || ((((arr_7 [i_2]) ? (arr_7 [i_0]) : (arr_0 [i_2]))))))));
                    var_21 -= (((((((((arr_1 [i_0]) ? var_7 : var_18))) ? (6070 | var_17) : (var_13 & var_3)))) ? (((((0 >> (((arr_8 [i_0] [i_0] [i_2 + 1]) - 15944995813757153535))))) ? (((arr_4 [i_0] [i_2] [i_2 - 1]) ? var_2 : 0)) : (((20 >> (var_15 - 3380258681)))))) : (((((((arr_7 [i_2]) & var_17)) == ((((arr_2 [i_1]) ? var_17 : var_8)))))))));
                }
            }
        }
    }
    var_22 = ((((((3223715085990191166 >= var_18) << (((var_15 - var_1) - 3380225562))))) ? ((((((var_19 ? var_6 : -1)) > ((2 ? var_2 : 1)))))) : (((var_6 + var_9) - ((var_10 ? 1 : 4048141436))))));
    var_23 = ((((var_10 & -1) ? (-1 | 3) : ((var_4 >> (var_17 - 64120))))) << (((((var_5 & var_8) << (((60822 ^ var_13) - 57353210683475447)))) - 8196)));
    var_24 = ((-1275366168 ? 0 : 1576754699));
    #pragma endscop
}
