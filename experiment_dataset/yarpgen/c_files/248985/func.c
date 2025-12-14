/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248985
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
    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (((((/* implicit */_Bool) var_7)) ? (max((7322769074731957310ULL), (7322769074731957316ULL))) : (((((/* implicit */_Bool) 10177449557583267500ULL)) ? (7322769074731957310ULL) : (6005375315398048311ULL))))))))));
    var_17 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) ((int) 7222310350385796527LL))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) / (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (+(((((/* implicit */_Bool) var_13)) ? (((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))))));
        arr_9 [6LL] |= ((/* implicit */unsigned char) ((unsigned int) 7322769074731957310ULL));
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((((/* implicit */unsigned long long int) var_6)) <= (arr_10 [i_2]))), (((_Bool) (signed char)-99)))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((((/* implicit */_Bool) ((unsigned long long int) 396640964897859341ULL))) ? (max((((/* implicit */unsigned long long int) arr_11 [i_2])), (var_8))) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 11718542387168415983ULL)) ? (7222310350385796542LL) : (((/* implicit */long long int) -2147483640)))))))));
        var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) max((arr_6 [i_2]), (((arr_11 [i_2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)153))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = (!(((/* implicit */_Bool) 2147483636)));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 8280679459867968997LL))));
    }
}
