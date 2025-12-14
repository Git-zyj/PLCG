/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244439
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
    var_12 -= ((/* implicit */unsigned short) (short)-21206);
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((var_7), (((/* implicit */long long int) (short)21192)))), (var_7)))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((long long int) (short)21188)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3148313421348445160ULL)) && (((/* implicit */_Bool) 15298430652361106456ULL))))) : ((-(((/* implicit */int) var_3))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) 426367047)) : (0U))))))) && (((/* implicit */_Bool) (short)21188))));
        var_14 &= (-(((unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0 - 2] [i_0])), (1616045695787534787ULL)))));
        arr_4 [i_0] = ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1] [i_0 - 1]))) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (-426367048)))))) >> (((((((/* implicit */_Bool) (unsigned short)54830)) ? (((/* implicit */int) (unsigned short)54830)) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0])) : (arr_1 [i_0] [i_0]))))) - (54821))));
        var_15 = ((/* implicit */long long int) (_Bool)1);
    }
}
