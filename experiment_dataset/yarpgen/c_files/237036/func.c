/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237036
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
    var_18 |= ((/* implicit */unsigned char) (-(18446744073709551595ULL)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_19 += ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)173)) | (((/* implicit */int) (unsigned char)82)))) / (((/* implicit */int) (unsigned char)74))));
        var_20 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_3 [i_0]), (arr_3 [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (unsigned short)65524))));
        var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60)))))), ((~(((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_1])) < (((/* implicit */int) arr_0 [i_1] [i_1])))))));
        arr_8 [(unsigned char)10] [(unsigned char)0] = ((/* implicit */long long int) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 25LL)) ? (var_10) : (((/* implicit */long long int) var_14))))) && ((_Bool)1))))));
        var_23 |= ((/* implicit */int) var_13);
        var_24 &= arr_2 [5ULL];
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775805LL)) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) arr_3 [i_1]))))) || (((/* implicit */_Bool) arr_4 [i_1]))));
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_10) : (((((/* implicit */_Bool) 3ULL)) ? (var_8) : (((/* implicit */long long int) var_7))))))) ? (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned char)88)) || (((/* implicit */_Bool) var_17)))), ((!(((/* implicit */_Bool) (unsigned char)128))))))) : (((int) (~(((/* implicit */int) var_4)))))));
}
