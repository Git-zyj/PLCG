/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, ((max((min(17057, 2660143938)), (~var_1))))));
    var_12 = (max(var_6, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((4235506367245127739 ? -26190 : -92));
                arr_6 [i_0] = -8782;
                arr_7 [i_0] [i_1] = arr_0 [i_0];
            }
        }
    }
    var_13 = (((var_8 ^ 981197602) ? (((min(var_5, -4876895217184417623)) ^ var_3)) : (min(var_2, (var_3 ^ 3313769701)))));
    #pragma endscop
}
