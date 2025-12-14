/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196763
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
    var_13 = max((((/* implicit */long long int) (~(((/* implicit */int) (short)32767))))), (((var_5) ? (((((/* implicit */_Bool) 1215339426882275288ULL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52794))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) var_2);
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-16641))))))), (((unsigned long long int) (_Bool)1))));
            }
        } 
    } 
}
