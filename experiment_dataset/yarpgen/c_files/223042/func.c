/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223042
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) 1001809771442481136LL);
        var_17 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)33421))));
    }
    for (int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned int) ((unsigned short) (short)0))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1] [i_1 + 3]))))))))));
        arr_7 [i_1] = ((/* implicit */int) (short)0);
    }
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12)));
}
