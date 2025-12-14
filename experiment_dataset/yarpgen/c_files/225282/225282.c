/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225282
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (2981233430 | 8);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_21 ^= (((8238669531248270647 ? 2981233430 : 2981233456)));
                    var_22 = ((((1313733866 | 15372235399869387215) ^ -8756009324409699080)));
                    var_23 ^= ((3318974868 && ((((((65535 ? -1267223279 : 0))) ? ((0 ? -3663481678688182578 : 1313733849)) : (((2981233430 ? 1 : 7))))))));
                }
            }
        }
    }
    #pragma endscop
}
