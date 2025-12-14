/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198397
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
    var_19 = var_18;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_20 *= (!(((/* implicit */_Bool) var_14)));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(4294967295U)));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [14ULL])))))));
    }
    for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)238))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)255), ((unsigned char)255))))) : (((((/* implicit */_Bool) arr_2 [(unsigned char)0])) ? (((/* implicit */unsigned long long int) var_11)) : (var_1))))))));
        arr_7 [8U] |= ((/* implicit */unsigned long long int) (-(arr_3 [(unsigned char)10])));
        arr_8 [i_1] = (+(9007199254740992ULL));
    }
    for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
    {
        arr_12 [20LL] &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
        arr_13 [2LL] |= ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1))))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))) ? (min((((/* implicit */long long int) max((var_10), ((unsigned char)28)))), (arr_5 [i_2]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((unsigned int) (unsigned char)248)))))));
        arr_15 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)54))));
    }
}
