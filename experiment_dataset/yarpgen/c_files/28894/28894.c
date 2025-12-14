/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = (max(((~((min(56034, 203))))), var_0));
                        arr_10 [i_0] [i_0] = var_5;
                    }
                    var_12 &= (max((min(var_3, var_3)), (((9248 ? ((2959394341 ? 139 : var_7)) : ((var_8 ? 123 : var_3)))))));
                    arr_11 [20] [20] [i_2] [i_2 - 2] = ((((max(((var_9 ? var_2 : -6518506732793121630)), ((var_4 ? 15336061877655949160 : var_4))))) ? (7077900043136988069 + -118504132469220658) : var_8));
                }
            }
        }
    }
    var_13 = ((((184 ? 107 : 5999839024881809287))));
    var_14 = 15336061877655949160;
    #pragma endscop
}
