/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 &= (max((arr_2 [i_2]), (arr_6 [i_1])));
                    var_19 = 228;
                    arr_8 [i_0] [1] [i_2] [19] = 65535;
                    var_20 = (arr_4 [i_0]);
                    var_21 = var_8;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_22 = (max(var_22, ((((max((-9223372036854775807 - 1), var_4))) ? var_5 : 4398046248960))));
                    arr_19 [i_3] [i_3] [i_3] = var_10;
                }
            }
        }
    }
    var_23 = ((((var_2 >= (((max(70, var_13)))))) ? (max(8754752780477649293, 18446739675663302655)) : var_0));
    #pragma endscop
}
