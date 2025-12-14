/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((var_1 <= -4503599627370496) ? var_15 : var_17)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 = 123;
                    var_22 = (((max((max((arr_7 [i_1] [i_1] [i_1]), -9169)), 20668))) ? (min((arr_6 [i_0] [i_1] [i_1]), (((-18585 ? (arr_3 [i_1]) : 95))))) : (((((~255) <= (max(1162683665502154556, (arr_3 [i_0]))))))));
                    var_23 |= (max(((((1 ? (arr_1 [2]) : (arr_4 [i_0] [14] [i_2]))))), ((-572695491 ? 71 : 19068))));
                }
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
