/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193885
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6217398337679071541LL)) && (((/* implicit */_Bool) -6326319724333541885LL)))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (1ULL) : (arr_4 [i_0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))) : (2397855746U))))));
            var_12 = ((/* implicit */unsigned short) min((((((((/* implicit */long long int) ((/* implicit */int) var_4))) != (-9223372036854775797LL))) ? ((-(arr_4 [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1961994335)))))), (((min((arr_4 [i_1] [i_1] [(unsigned char)2]), (arr_4 [i_0] [i_1] [i_1]))) * (((/* implicit */unsigned long long int) arr_5 [i_1]))))));
        }
    }
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_10))));
}
