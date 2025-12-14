/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29496
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
    var_16 = ((/* implicit */unsigned short) max(((~((-(var_4))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0])) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) arr_2 [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2])))) : ((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0]))))));
        var_17 = ((/* implicit */int) max((((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))))), (min((var_14), (((/* implicit */long long int) arr_1 [13U] [i_0 - 2]))))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 - 2])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)23655)), (3816482613U)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (var_14)));
        var_20 = (!(((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (_Bool)1)))))));
        arr_7 [(unsigned short)10] = ((/* implicit */short) min((arr_5 [i_1 + 1]), (((/* implicit */int) (short)-22338))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_0), (((/* implicit */unsigned int) var_2))));
    var_22 = 2255448972U;
}
