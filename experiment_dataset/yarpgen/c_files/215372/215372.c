/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] = var_3;
                    arr_9 [i_0] [i_1] [i_1] [i_2] = min((min((var_3 < var_11), ((4069262233281729516 ? 4069262233281729513 : 4026531266)))), var_1);
                }
            }
        }
    }
    var_17 = (min(var_17, ((((((1 ? 0 : -646529856))) ? (((((var_5 ? 4026531246 : 1651490662))) ? ((min(var_6, var_0))) : ((min(var_11, 45))))) : (242016150 != 18446744073709551615))))));
    #pragma endscop
}
