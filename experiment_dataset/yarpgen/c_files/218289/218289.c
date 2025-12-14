/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((23 >= (!var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 = (((((1570760762391250055 == (arr_3 [i_1 + 1] [i_1 - 1])))) >= (((!(!1570760762391250055))))));
                var_13 = 1879171560;
                arr_4 [i_1] [i_0] = ((((min((~-5210165980206190204), (arr_3 [i_1 - 1] [i_0])))) ? var_10 : ((var_6 ? (arr_0 [4] [4]) : 1570760762391250055))));
            }
        }
    }
    #pragma endscop
}
