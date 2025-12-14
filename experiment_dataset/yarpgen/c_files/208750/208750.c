/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= (min((((((min(var_3, var_9))) == (min(249, 5237878321332967278))))), (var_8 | -5237878321332967278)));
    var_14 = (max(var_14, (((((((((var_4 ? var_3 : var_1))) || var_11))) <= (min(((5237878321332967301 ? var_5 : var_3)), (0 | 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = ((var_1 == ((var_1 - (5237878321332967295 % var_5)))));
                arr_5 [i_0 - 2] [i_0 - 2] [i_0] = (((arr_0 [i_0]) + var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            {
                var_16 = (max((((-5237878321332967256 ? (((5237878321332967286 ? 218 : 765762536))) : (1 | 5237878321332967316)))), ((var_6 + (arr_10 [i_2] [4])))));
                var_17 = (-2147483647 - 1);
            }
        }
    }
    #pragma endscop
}
