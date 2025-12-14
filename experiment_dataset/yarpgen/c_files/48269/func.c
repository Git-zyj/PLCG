/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48269
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
    var_12 = ((/* implicit */int) ((((((((/* implicit */_Bool) 4194303)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4611686018427387904LL))) >> ((((+(5507687888925103709LL))) - (5507687888925103702LL))))) > (min((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((var_7) - (954390082U)))))), (((long long int) (short)2029))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1301064589U)) || (((/* implicit */_Bool) arr_3 [i_1])))) ? (((((/* implicit */_Bool) 535822336U)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)20128)) == (((/* implicit */int) (unsigned char)237)))))) : (((((/* implicit */_Bool) -4452253671333908318LL)) ? (6939662676893667686LL) : (((/* implicit */long long int) arr_0 [i_1])))))) : (arr_2 [i_0])));
                var_13 = ((/* implicit */unsigned char) arr_0 [i_0]);
            }
        } 
    } 
    var_14 = ((/* implicit */int) (short)6284);
}
