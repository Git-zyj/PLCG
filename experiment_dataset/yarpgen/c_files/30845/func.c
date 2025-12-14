/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30845
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = max(((!(((/* implicit */_Bool) (unsigned short)7510)))), (((((/* implicit */_Bool) 14123067716720381948ULL)) && (((/* implicit */_Bool) (unsigned short)46354)))));
        arr_4 [i_0] = min((min((((/* implicit */long long int) (unsigned short)46354)), (((long long int) (unsigned short)2674)))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (var_15)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) == ((-9223372036854775807LL - 1LL))))) : ((~(((/* implicit */int) (short)8217))))))));
        var_20 ^= ((/* implicit */short) ((max((var_9), (((/* implicit */long long int) arr_2 [i_0])))) < (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)46364))))) : (-5728732647078059217LL)))));
        var_21 -= ((/* implicit */short) (-9223372036854775807LL - 1LL));
    }
    var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_6)), (var_12)));
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (~(arr_6 [i_1])));
        var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_6 [i_1]) : (((/* implicit */long long int) arr_5 [i_1])))), (((/* implicit */long long int) ((unsigned char) arr_5 [i_1])))));
    }
}
