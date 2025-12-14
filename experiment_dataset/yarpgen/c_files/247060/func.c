/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247060
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)28672))))) * (arr_0 [i_0 - 2])));
        var_13 = ((/* implicit */unsigned int) ((arr_2 [i_0 + 2]) >= (var_5)));
    }
    var_14 = ((/* implicit */unsigned short) max(((-(var_0))), (((/* implicit */long long int) ((4294967295U) + (((unsigned int) (unsigned char)128)))))));
    var_15 = ((/* implicit */unsigned int) var_1);
}
