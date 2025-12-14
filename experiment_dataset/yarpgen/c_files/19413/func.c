/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19413
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */short) (~(-8338420899610057513LL)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) 866883997);
                    var_17 = ((/* implicit */_Bool) -7307877906368118610LL);
                }
            } 
        } 
    }
    var_18 |= ((/* implicit */int) (_Bool)1);
}
