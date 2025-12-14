/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 >> ((((var_9 ? ((16560293992032150267 ? 23507 : 2997742913621887077)) : (((15449001160087664539 ? var_6 : -241))))) - 23479))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 *= (((((max((arr_5 [i_0] [1] [5]), var_7)))) ? (-2147483647 - 1) : 0));
                var_13 = (!-1);
            }
        }
    }
    var_14 = (min(var_14, (((!(((2130184943798267245 / var_7) || (~var_3))))))));
    #pragma endscop
}
