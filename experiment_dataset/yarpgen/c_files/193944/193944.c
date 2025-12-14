/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = var_2;
                var_14 = ((var_9 ? 76 : (((!(arr_2 [i_1 + 1]))))));
                arr_8 [i_0] [i_1 + 1] [i_1] = -1930584296825487152;
            }
        }
    }
    var_15 = var_7;
    var_16 = ((78 ? 17856254414848578644 : 0));
    #pragma endscop
}
