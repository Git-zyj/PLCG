/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223266
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [8U] [i_0]))))), (8883811491958081611LL)))) ? (((/* implicit */unsigned int) ((arr_3 [i_0 - 3]) ? (((/* implicit */int) (_Bool)0)) : (-508495032)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((3525817918U) <= (4U))))) | (var_4)))));
        var_21 -= ((/* implicit */unsigned long long int) (((~(arr_2 [i_0 - 1]))) << (((((arr_2 [i_0 - 2]) + (1372272079018042069LL))) - (35LL)))));
        var_22 += ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((13651354503986147002ULL), (((/* implicit */unsigned long long int) (unsigned short)37344)))), (((/* implicit */unsigned long long int) min((4294967295U), (((/* implicit */unsigned int) (unsigned char)6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30492)) ? (-1755986090) : (536870880)))) ? ((+(var_8))) : (arr_0 [i_0 - 3]))) : (((((((/* implicit */_Bool) (short)13535)) && (((/* implicit */_Bool) (short)-18)))) ? (((((/* implicit */_Bool) 3087853519022032046ULL)) ? (((/* implicit */unsigned int) -282965306)) : (604269476U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -837012127493094545LL)))))))))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) max((((/* implicit */unsigned long long int) (+(-725406025552091628LL)))), (((((/* implicit */_Bool) -725406025552091628LL)) ? (((unsigned long long int) (unsigned char)222)) : (((/* implicit */unsigned long long int) -934925032)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) (short)15560)) : (((/* implicit */int) (unsigned short)15344)))) == (((/* implicit */int) (unsigned char)221))));
        arr_6 [i_1] [20ULL] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) -7314078153837432249LL)) && (((/* implicit */_Bool) -3037391533150625467LL))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) : (1272138661U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (127)))) : (((/* implicit */int) (short)0)))))));
    }
    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (!(((_Bool) var_15)))))));
}
