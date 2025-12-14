/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220571
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_10 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */short) (_Bool)1)), ((short)1))));
        var_11 = ((/* implicit */short) (_Bool)1);
        var_12 = ((/* implicit */unsigned long long int) 3604618518349931957LL);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (max((((/* implicit */long long int) (short)25262)), (7734457639778645633LL)))));
                var_14 ^= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 3604618518349931957LL)), (((unsigned long long int) (short)-25290))));
                var_15 = ((/* implicit */int) min(((+(11519659480322475703ULL))), ((-(6016865912128402695ULL)))));
            }
        } 
    } 
}
