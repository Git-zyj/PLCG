/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242978
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_1 [i_0])), (var_12)))) ? (((var_11) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)13)))) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_2 [i_0] [i_0])))))))) : ((+(arr_2 [i_0] [i_0])))));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_11))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_4)))) ? (((/* implicit */unsigned long long int) (~(2147483647U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 415252835435050601ULL)))))) * ((+(arr_2 [(_Bool)1] [(signed char)6])))))));
        var_23 -= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_1]))))), (((long long int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_18)) <= (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_6 [i_1] [i_1])) - (83)))))));
    }
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_2)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16)))))));
    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_13))))) : (((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((var_17) && (var_11))))))) : (min((315956373U), (((/* implicit */unsigned int) (_Bool)1))))));
    var_26 = ((/* implicit */signed char) var_15);
    var_27 = ((/* implicit */_Bool) ((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(1151195006U)))) : (((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
}
