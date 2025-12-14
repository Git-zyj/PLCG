/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 *= (((max(7703887703536629567, (30 || 186)))) && (((((70 ? 182 : 1)) | (~241)))));
                    var_14 = (((((((74 ? 1 : 3746)) * (1 - 69)))) ? (((((max(62, 182))) ? 0 : 0))) : (max(8295493326747882394, 237))));
                    arr_8 [12] [i_1] [12] &= (min(((18446744073709551615 << (58763 - 58744))), 73));
                    arr_9 [i_0] [i_0] [i_0] = ((((min(((3784172904 ? 17557075797130091823 : 1)), (103 != 1)))) && ((((max(1, 18446744073709551615)) - (((1 ? 94032398 : 532676608))))))));
                }
            }
        }
    }
    var_15 = var_9;
    var_16 = (min((min(((3737973768 ? 194 : 1)), (~1))), var_12));
    #pragma endscop
}
