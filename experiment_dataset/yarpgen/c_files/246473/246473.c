/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((max((max(0, var_6)), (~8059464007816128310)))) ? var_9 : var_3));
    var_11 = ((!(~59733)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] = (!(((8059464007816128308 * ((((arr_4 [i_0 - 1]) >> (var_7 - 15897))))))));
                arr_6 [i_0] [i_0] [i_0] = ((((((8059464007816128310 ? (arr_2 [i_0 + 2]) : (arr_4 [i_0]))) == (((arr_2 [i_1]) + var_5)))) ? (~10387280065893423314) : 10387280065893423305));
            }
        }
    }
    #pragma endscop
}
