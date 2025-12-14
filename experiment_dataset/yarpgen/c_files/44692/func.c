/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44692
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
    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_9))))))) : (min((((((/* implicit */_Bool) -4586887853137069994LL)) ? (692503655400737000LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (_Bool)1))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((942313585565322408LL) / (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) max(((!((_Bool)1))), ((_Bool)1))))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), ((_Bool)1)));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_8))))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))))));
                    arr_9 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_2 [(unsigned char)16])))) ? (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0 - 4] [i_0])))) : (((/* implicit */unsigned long long int) (~(var_8))))))) ? (((int) (signed char)110)) : (((/* implicit */int) arr_6 [i_0 - 2] [i_1 - 1]))));
                    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])), (min((var_11), (arr_1 [i_0 + 3])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((-4897450350502567050LL), (((/* implicit */long long int) (_Bool)1))))))));
    var_20 = ((/* implicit */long long int) var_13);
}
