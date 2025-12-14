/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_0, var_9));
    var_19 = -32763;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 + 1] = -32764;
                    arr_8 [i_1] [i_0] [i_0] = (((arr_3 [i_0] [i_0]) != 65516));
                }
            }
        }
    }
    #pragma endscop
}
