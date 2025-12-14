/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208588
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
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 7; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_1))));
        arr_2 [i_0 - 1] [i_0] = (-(((((/* implicit */_Bool) (signed char)-85)) ? (5197659513944436845ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-80))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) 6)) / (1474482890U))) / (((((/* implicit */_Bool) (unsigned short)63316)) ? (1474482897U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)85)))))))), (max((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned short)29591))))));
        arr_4 [i_0] [(_Bool)0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-23))));
    }
    for (short i_1 = 2; i_1 < 7; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) - (var_7))))))));
        var_21 = ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21))) : (arr_1 [i_1 + 2]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 3]))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((max((max((((/* implicit */unsigned long long int) (short)-6162)), (arr_1 [i_1 + 3]))), ((-(var_6))))) != (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1])))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) 2820484388U);
        var_23 = var_9;
    }
    for (long long int i_3 = 3; i_3 < 12; i_3 += 2) 
    {
        arr_14 [i_3 + 3] = ((/* implicit */long long int) var_0);
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 + 3])) ? (((((/* implicit */_Bool) 1474482896U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-64))) : (var_6))) : (((/* implicit */unsigned long long int) 2147483641)))))))));
        var_25 |= max((max((((/* implicit */long long int) arr_13 [i_3 + 1] [i_3])), (((long long int) var_15)))), (((/* implicit */long long int) var_1)));
        var_26 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (8742416908694041534LL))) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)94))) : (arr_8 [i_3] [i_3]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) arr_9 [i_3 + 3]))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) != (((/* implicit */int) (unsigned char)0))))))))));
        arr_15 [i_3] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_9 [i_3]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                var_27 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5]))) : (7235307031956314222ULL))))))));
                var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) var_1)))))), (((((/* implicit */_Bool) arr_18 [i_4])) ? (((748590217869825795ULL) | (((/* implicit */unsigned long long int) 9223372036854775797LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -739518721)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
