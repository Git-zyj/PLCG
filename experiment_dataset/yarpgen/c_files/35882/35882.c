/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = 1;
                    var_18 = min(17727, (arr_3 [i_1] [i_2 + 1] [i_2]));
                    arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0] = (3489221240180593975 / var_3);
                    var_19 = (max((max(-391415677, var_5)), var_10));
                    arr_9 [i_0] [3] [14] [1] = (!var_14);
                }
            }
        }
    }
    var_20 = ((var_0 ? ((((var_5 ? 1456544547463910200 : 6508839124835936202)) - var_7)) : ((var_6 ? ((var_6 ? 6508839124835936202 : var_6)) : ((11937904948873615420 ? 11937904948873615409 : var_9))))));
    var_21 = ((((var_0 * 0) ? (11522697934416601079 + var_9) : (min(6634359101042083857, -17734)))));
    var_22 = var_11;
    var_23 = var_11;
    #pragma endscop
}
