/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((18 ? 13673 : 18));
    var_14 = (max(-2, 16990583414526463408));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_1] = ((((((arr_3 [4] [18] [18]) ? (min(12497880301360843949, 16368)) : -3785867713547585790))) ? (((6368 ? 14960520654041893691 : 6343))) : ((((((arr_7 [22] [3] [3] [22]) ? var_0 : var_5)) % var_11)))));
                    arr_10 [14] [19] [3] [i_2] = (max(((((((arr_5 [1] [i_1]) ? -1 : var_12))) ? (arr_6 [12] [i_1] [9]) : var_7)), var_7));
                    var_15 = ((156 ? 8695419026706054888 : 2307478118));
                }
            }
        }
    }
    var_16 |= (min(39611, 496));
    #pragma endscop
}
