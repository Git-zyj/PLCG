/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_6, (var_9 ^ var_6))) | (((((max(9493, 211))) ^ (~var_6))))));
    var_19 += (max(211, ((((max(1820332708647690580, var_11)) <= -1152921504573292544)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_20 = (min(((~(arr_6 [i_0]))), (((!((min(var_0, 125))))))));
                    var_21 = 160;
                    var_22 += (((((~(~1)))) ? ((((var_12 || (63 * 9480))))) : (max(18602497380960911, 5506684588611264841))));
                }
            }
        }
    }
    var_23 += ((var_10 ? -var_0 : (-97 - 96)));
    #pragma endscop
}
