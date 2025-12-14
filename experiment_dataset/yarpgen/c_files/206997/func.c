/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206997
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */unsigned char) min(((unsigned short)30266), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)35265), (((/* implicit */unsigned short) (_Bool)0))))) > (((/* implicit */int) (unsigned short)35255)))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 2546156299U)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) 4294967295U))))))));
                var_16 &= ((/* implicit */unsigned int) var_3);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_10);
    var_18 = ((/* implicit */unsigned short) min((var_2), (((/* implicit */short) var_6))));
}
