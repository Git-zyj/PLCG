/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221572
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_14))))) && (((/* implicit */_Bool) min((((unsigned int) 8003257650382799981LL)), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [17ULL] [i_0] [i_0])))))))))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((_Bool) min((-8003257650382799981LL), (((((/* implicit */_Bool) var_6)) ? (8003257650382799981LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_21 = (((!(((((/* implicit */int) var_15)) <= (var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8003257650382799981LL)))) ? (((((var_10) + (9223372036854775807LL))) << (((((/* implicit */int) var_16)) - (55))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_18)), (var_6)))))))) : (max((((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8003257650382799981LL)) ? (var_7) : (((/* implicit */int) var_13))))))));
    var_22 = ((/* implicit */unsigned int) max((var_0), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_15)), (var_12)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (536739840U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_14))))) * (((((/* implicit */unsigned long long int) ((((arr_8 [i_2]) + (2147483647))) << (((((/* implicit */int) var_12)) - (45)))))) % (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
        var_23 = ((/* implicit */signed char) min((15249695239016627356ULL), (((/* implicit */unsigned long long int) -8003257650382799981LL))));
        var_24 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) var_15))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 6269562146989187456LL)) : (var_19))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50116)) ? (-1880243327) : (((/* implicit */int) (unsigned short)15420)))))));
        arr_10 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) var_16)), (arr_8 [i_2])));
        arr_11 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_2)))), (arr_8 [(unsigned char)22])))) && (((/* implicit */_Bool) arr_8 [i_2]))));
    }
}
