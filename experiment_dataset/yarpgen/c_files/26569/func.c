/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26569
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
    var_11 = ((/* implicit */unsigned int) (unsigned short)39575);
    var_12 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] |= max((((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((var_8) << (((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) arr_0 [i_0])) >> (0U))))), (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (unsigned short)25107)) : (((/* implicit */int) min(((unsigned short)4), (((/* implicit */unsigned short) (unsigned char)203))))))));
        arr_3 [18LL] &= ((/* implicit */long long int) arr_0 [i_0]);
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */int) ((8106596092596433753LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) 3717733862634343938LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)40428)))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3596226832U)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25119))))))))))))));
    }
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 117108617)) ? (((/* implicit */int) (unsigned short)65532)) : (var_5)))))) ? (((/* implicit */int) var_10)) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((var_1) || (var_10)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6))))))))))));
    var_15 = ((/* implicit */long long int) var_7);
}
