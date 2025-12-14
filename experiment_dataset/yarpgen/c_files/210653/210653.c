/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] = 1099511365632;
                    var_20 = (max((max((((arr_6 [2] [i_1]) ? -5497044807121041198 : var_19)), ((max((arr_5 [11] [1] [i_1]), 5497044807121041198))))), (((!((((arr_8 [i_0]) ? var_8 : var_16))))))));
                }
            }
        }
    }
    var_21 = ((var_15 - ((((min(var_1, var_0))) + var_0))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_3] [i_3] = ((((min(5497044807121041197, -5497044807121041197))) ? (((255 ? 2662531509 : 5497044807121041198))) : (((((5497044807121041197 ? -5497044807121041197 : 5497044807121041197))) ? (((0 ? 1 : -5497044807121041198))) : (((arr_16 [4] [i_3] [i_3]) ? 4067180513691940123 : 0))))));
                    var_22 = (max(var_22, (((-5497044807121041198 ? (max((arr_7 [i_3] [i_4] [i_4 - 3] [17]), 0)) : (((min(17136, 48399)))))))));
                }
            }
        }
    }
    #pragma endscop
}
