/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32263
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
    var_14 = ((/* implicit */long long int) max((var_14), (var_13)));
    var_15 = ((/* implicit */long long int) max(((unsigned char)15), (((/* implicit */unsigned char) (_Bool)0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) var_12);
                var_17 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 8196293407963676229LL)) ? (9309037485409911257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))) / (((/* implicit */int) max(((unsigned char)178), (((/* implicit */unsigned char) (_Bool)0)))))));
            }
        } 
    } 
}
