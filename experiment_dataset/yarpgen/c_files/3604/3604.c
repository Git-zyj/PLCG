/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (min(var_16, ((((~2988217051) >> (0 > var_12))))));
                arr_4 [i_0] = ((((((((~(arr_0 [i_0]))) != ((((arr_3 [i_0] [i_0] [i_0]) || (arr_0 [i_0])))))))) + 3168269215841636307));
                arr_5 [i_0] = (!2811611609457650137);
                var_17 = (min(var_17, var_9));
                var_18 = var_15;
            }
        }
    }
    var_19 = 4294967295;
    #pragma endscop
}
