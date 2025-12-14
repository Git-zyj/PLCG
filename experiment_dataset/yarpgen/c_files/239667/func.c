/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239667
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
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) max((-1824480739283385416LL), (((/* implicit */long long int) var_11)))))))) < (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [12U] [i_1]))));
                arr_6 [i_1] |= ((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_0]), ((!(((/* implicit */_Bool) 1838897253U))))));
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) 252201579132747776ULL))))))));
                arr_7 [(short)15] = ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned short)57392), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) ((var_8) <= (11180839959778107003ULL)))) : (((((/* implicit */int) (unsigned char)226)) >> (((((/* implicit */int) arr_1 [i_0] [i_1])) + (95))))))) >> (((((/* implicit */int) arr_0 [i_0])) - (18095)))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)124)) - (((/* implicit */int) (unsigned char)30))))) ? (((/* implicit */int) (short)8061)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))));
    var_22 = ((/* implicit */short) max((var_18), (((/* implicit */unsigned int) min((((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8154))))), ((!(((/* implicit */_Bool) var_6)))))))));
}
