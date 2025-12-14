/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((--622946981) / (((var_16 * 622946981) ? (((48108 ? var_0 : 622946972))) : (min(var_9, 15788323854132699838))))));
    var_19 = (((((~((var_6 ? 3672020323 : var_8))))) / ((3672020315 ? (((max(var_12, var_0)))) : ((var_1 ? var_4 : 33113))))));
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((max((arr_5 [i_1] [i_0]), (arr_3 [i_0])))) ? var_5 : (max(((var_2 ? var_16 : var_14)), (arr_3 [i_1])))));
                arr_8 [i_0] [12] = 4294967295;
            }
        }
    }
    var_21 = (max((max(((var_6 ? 16930 : var_3)), ((max(var_6, var_12))))), ((((16922 && var_1) << (1336857580 - 1336857561))))));
    #pragma endscop
}
