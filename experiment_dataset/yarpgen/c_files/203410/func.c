/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203410
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 426629692973190179LL))))), (arr_1 [i_0]))))));
        var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [0LL])) ? (-426629692973190179LL) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), (arr_2 [(_Bool)1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [(_Bool)1])) != ((~(((/* implicit */int) arr_2 [(unsigned char)8])))))))) : (((((((/* implicit */_Bool) arr_2 [10LL])) && (((/* implicit */_Bool) arr_1 [0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [20U]))) != (var_14))))) : (6295810770692346609LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1] [i_1]))))))))) : ((-((~(-6295810770692346610LL)))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) arr_0 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) < (((((/* implicit */_Bool) 1073741824)) ? (((/* implicit */long long int) var_9)) : (arr_1 [i_1])))))))));
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (unsigned short)2))));
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -426629692973190179LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 6295810770692346609LL)) || (((/* implicit */_Bool) 426629692973190175LL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1730762359U)))))));
}
