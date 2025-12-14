/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((18473 ? 4294967295 : 12)) >= -var_0)));
                var_17 = (((min((arr_4 [i_1]), 56958))) * ((max(2714078553, var_14))));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_18 = max(((max((var_6 || 33), var_10))), (min((~-32766), 18446744073709551615)));
                    var_19 = ((~(~21336)));
                }
            }
        }
    }
    var_20 = var_10;
    var_21 = (!11244);
    #pragma endscop
}
