/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_12 = (max((max(((-872266419 ? var_10 : 46)), (min(-872266417, 872266420)))), ((((max(96, -872266421))) ? (max(872266418, -815107886)) : -872266421))));
                arr_4 [i_0] [i_1] [i_1] = 45388;
                var_13 = 63;
            }
        }
    }
    var_14 = ((((!((min(65527, 1)))))));
    #pragma endscop
}
