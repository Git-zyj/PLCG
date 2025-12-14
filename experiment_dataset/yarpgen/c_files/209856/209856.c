/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((7830501906930265003 ? ((0 ? 12 : ((255 ? 3143551406399405696 : 0)))) : 35165)))));
    var_20 = (4 | 11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (((((((7747008866233721306 ? 3437451884763558792 : 255))) ? 5 : (~3437451884763558792))) << (26790 - 26744)));
                var_22 = (max((!2955854636), 244));
            }
        }
    }
    #pragma endscop
}
