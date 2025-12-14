/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248201
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_1))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (~((-(((/* implicit */int) ((unsigned char) 9579773514184923588ULL))))))))));
    }
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (((~(((/* implicit */int) ((unsigned char) (unsigned char)242))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
}
