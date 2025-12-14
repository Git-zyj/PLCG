/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249952
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned char)77)) < (((/* implicit */int) (unsigned char)174))))), ((~(1280694862)))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)77))))) | (max((((/* implicit */unsigned long long int) 945525325)), (var_10)))))));
        arr_3 [i_0] [10ULL] = ((/* implicit */int) min((((((-1978760607635290722LL) ^ (((/* implicit */long long int) 2147483630)))) & (((/* implicit */long long int) ((/* implicit */int) ((511ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((16241916901264151816ULL) - (16241916901264151805ULL)))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) (+(-1978760607635290727LL)))) : (((2204827172445399793ULL) & (((/* implicit */unsigned long long int) 2147483630)))))) < (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)0)), (max((var_2), (((/* implicit */long long int) var_1)))))))));
        var_12 = ((/* implicit */int) (~((+(((((/* implicit */_Bool) var_4)) ? (18446744073709551596ULL) : (2204827172445399793ULL)))))));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))))) ? (min((((/* implicit */long long int) var_11)), (min((((/* implicit */long long int) var_9)), (-6919830768719216518LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) + (((/* implicit */int) (!(((/* implicit */_Bool) 2204827172445399794ULL))))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) (short)11842))));
        arr_10 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((var_2) / (-1458664940700126381LL))) : (((/* implicit */long long int) (+(15U))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) == (var_2))))));
    }
    var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */int) max(((unsigned char)253), ((unsigned char)15)))), ((~(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)177)), (var_1)))) ? (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) (short)-11028))))) : (max((((/* implicit */unsigned int) var_4)), (3363240716U)))))));
}
