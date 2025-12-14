/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205041
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (var_17)));
    var_21 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) var_8))))));
        var_23 = ((/* implicit */unsigned long long int) (-((~((-(((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_24 += ((unsigned long long int) ((unsigned short) var_12));
            var_25 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) var_5)))));
        }
    }
}
