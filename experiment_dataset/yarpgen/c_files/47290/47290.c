/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((min(var_1, (arr_3 [i_0 - 1] [i_0 + 1]))));
                var_11 = (min(((((64743 ^ -19) | 86))), (arr_2 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        var_12 = (max(var_12, (((111 & (~var_3))))));
        var_13 ^= ((((5226660961284547622 ? 13220083112425003994 : 913921655)) - (arr_1 [i_2] [i_2])));
        arr_8 [i_2] = (!((((arr_2 [i_2]) / (arr_4 [i_2])))));
    }
    var_14 = 0;
    #pragma endscop
}
