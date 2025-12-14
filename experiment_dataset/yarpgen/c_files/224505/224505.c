/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((~(min((max(-8277821500295840805, -8277821500295840805)), (((29050 << (-115 + 118))))))));
                var_20 = (max((-29055 == 1), (((!-1234689916) ? (~62) : ((1234689908 ? 29052 : 24386))))));
            }
        }
    }
    var_21 = ((~(max(194, (~33)))));
    #pragma endscop
}
