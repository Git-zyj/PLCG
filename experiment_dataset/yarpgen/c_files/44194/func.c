/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44194
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [(unsigned short)9] [i_0] [(unsigned short)9] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-17))))));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (!((!(((/* implicit */_Bool) (signed char)-6)))))))));
            arr_7 [i_0] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1])))))));
        }
        var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11))))))), ((~((~(0U)))))));
    }
    var_14 = max((((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned short)61440), (((/* implicit */unsigned short) (short)-19874)))))))), (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)9))))), ((-(144115170895986688ULL))))));
    var_15 = ((/* implicit */int) (-((~((~(144115170895986671ULL)))))));
    var_16 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((+(((/* implicit */int) var_2)))))))));
}
