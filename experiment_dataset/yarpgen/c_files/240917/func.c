/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240917
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_0 [i_0 - 1] [i_0 + 1])) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) * (arr_0 [i_0] [9ULL]))))))))));
        arr_3 [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_1 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1428969221003057899ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) : (max((arr_1 [i_0 + 1]), (arr_0 [(short)5] [i_0]))))) : (((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))) : (arr_1 [0LL]))) + (((arr_0 [i_0 - 1] [(unsigned short)10]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
        var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-59)), (arr_1 [i_0 - 1])))) ? (arr_1 [i_0 + 1]) : (arr_1 [(signed char)9])));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (arr_0 [i_0] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) <= (((((/* implicit */int) var_1)) % (((/* implicit */int) var_7))))))) : (((((/* implicit */int) (unsigned short)65535)) & (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)65534))))))));
}
