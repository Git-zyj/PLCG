/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29141
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */long long int) (!(var_5)))), (((long long int) (short)19180)))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (max((((/* implicit */unsigned int) (_Bool)1)), (3366429987U)))));
    var_22 = ((/* implicit */unsigned short) max((((signed char) min(((unsigned short)30912), ((unsigned short)34622)))), (((/* implicit */signed char) var_12))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [(unsigned short)10] [(unsigned short)10])), (((((/* implicit */_Bool) (unsigned short)30937)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0 - 1] [i_0])))) ? (((((/* implicit */int) (short)6960)) & (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0 - 3])))) : ((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
}
