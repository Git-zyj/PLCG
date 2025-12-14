/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47427
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_10))) ? (var_10) : (3976242372U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30969)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (318724923U))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)128))))) ? (((/* implicit */int) ((_Bool) (short)24021))) : (((/* implicit */int) (short)30969))))));
    var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (short)-22233))), (((((/* implicit */_Bool) ((unsigned char) (short)-22233))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)-3407)))) : (var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */int) var_11);
                arr_4 [i_0] [i_1] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (~(17507136559343801898ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))));
            }
        } 
    } 
}
