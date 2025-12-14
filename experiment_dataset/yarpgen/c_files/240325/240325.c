/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (((((-((max(8, 65527)))))) ? (((var_0 ? 33840 : (((arr_1 [i_0]) ^ 39235))))) : ((((8601 < (arr_2 [i_0] [13]))) ? (!18446744073709551615) : (arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (56955 || 191);
                    arr_9 [i_0] [0] [i_2] = -39219;
                    var_11 = -510489085;
                }
            }
        }
    }
    var_12 = -47;
    #pragma endscop
}
