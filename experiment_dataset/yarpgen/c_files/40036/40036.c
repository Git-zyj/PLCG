/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_10 >= (((!(((-40 ? var_7 : 0))))))));
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((1964792707147697437 ? 105 : -12211));
                arr_4 [i_0] [i_0] = ((-(min(((-32 ? -49 : 40716)), ((-12196 ? var_9 : var_9))))));
                var_19 = (!var_3);
            }
        }
    }
    #pragma endscop
}
