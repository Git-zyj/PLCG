/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(((0 ? var_5 : var_7)), (((var_3 ? -895575349 : 536870911))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (1152921435887370240 ? 895575363 : 3541158368);
                    arr_10 [i_0] [i_1] = ((var_9 ? ((((arr_8 [i_0] [i_2 - 1] [i_2 - 2] [i_2]) ? (~3729061060) : (arr_7 [i_0 - 1] [i_0] [i_1 + 1])))) : (((max(var_1, (arr_6 [i_0] [i_1] [i_0]))) | 895575349))));
                }
            }
        }
    }
    var_15 = var_12;
    var_16 = (((((-((var_0 ? 1 : -6058928826996934267))))) ? (((var_2 || (((var_2 ? var_0 : var_13)))))) : var_1));
    #pragma endscop
}
