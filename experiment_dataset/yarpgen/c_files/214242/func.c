/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214242
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
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [(unsigned short)14] [(signed char)19] = ((/* implicit */unsigned long long int) (((((~(0U))) < (max((((/* implicit */unsigned int) var_4)), (4294967295U))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((3271797492U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                arr_8 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) << (((arr_6 [i_1]) + (1788580630))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) << (((((((arr_6 [i_1]) - (1788580630))) + (1062094937))) - (3)))))));
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3U)))) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51551)) || (((/* implicit */_Bool) 2610170845U))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */signed char) ((-6508189106129726696LL) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */unsigned int) var_2)) : (var_3)))) ? (max((-4313996349786045045LL), (((/* implicit */long long int) 2769372988U)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))));
}
