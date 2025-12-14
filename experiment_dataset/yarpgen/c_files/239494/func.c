/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239494
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
    var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
        arr_2 [i_0] = ((/* implicit */_Bool) 3012971275U);
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1987277803) % (850513353)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) : ((~(5567670260267987475ULL)))))) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) var_14))));
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) var_1);
    }
    for (short i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */int) (unsigned short)57597)) : (((/* implicit */int) (signed char)0)))))))));
        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_13)) ? (-2061975683) : (((/* implicit */int) (signed char)-17))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) 1845390484997345750ULL)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)39))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) var_7);
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned short) ((14392543207659086833ULL) >> (((var_6) - (989340936989236033ULL)))));
        arr_15 [i_2] [i_2] = ((/* implicit */unsigned int) (_Bool)1);
        var_19 = ((/* implicit */_Bool) ((arr_7 [i_2]) ? (((/* implicit */unsigned long long int) var_11)) : (18446744073709551596ULL)));
    }
    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (signed char)47)) & (((/* implicit */int) var_7))))));
    var_21 = ((/* implicit */_Bool) var_6);
}
