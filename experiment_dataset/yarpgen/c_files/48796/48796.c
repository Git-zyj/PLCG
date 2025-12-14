/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((((((var_5 < var_7) ? var_2 : (max(var_7, 0))))) || 2452009348086647151)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_11 = (min((((25310 * (arr_4 [i_0])))), ((var_5 ? var_5 : -94))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_12 = (((arr_5 [i_0] [i_0]) ? (((var_5 ? ((((arr_1 [i_0]) - -17595))) : var_9))) : (max((max((arr_5 [i_0] [i_1]), var_3)), ((min((arr_6 [i_0] [i_0] [i_0] [16]), 25336)))))));
                    arr_9 [i_0] [i_0] [i_2] = (min(((~((min(var_0, var_6))))), ((~((var_8 ? 1073740800 : -755970989))))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = (((((arr_6 [i_0 - 3] [i_0] [i_0] [i_0]) < var_8)) ? (arr_6 [i_0 - 3] [i_0] [i_0] [i_0]) : (((!(arr_6 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))));
                    var_13 = ((~(((((var_0 ? var_7 : var_4))) ? (arr_7 [i_0] [i_0] [i_0]) : 40200))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_14 += ((0 ? 3287881642 : 69));
                    var_15 ^= (max((max((min((arr_6 [i_0 - 2] [i_1] [i_3] [i_3]), -5613732120475738418)), (~-35))), (((~(arr_1 [i_0 + 1]))))));
                    var_16 += var_8;
                    arr_13 [i_0] [i_0] [i_0] = var_4;
                }
                var_17 ^= ((((~(!25303)))) ? var_9 : (((((var_6 && var_9) == ((min(var_8, (arr_8 [i_1])))))))));
            }
        }
    }
    #pragma endscop
}
