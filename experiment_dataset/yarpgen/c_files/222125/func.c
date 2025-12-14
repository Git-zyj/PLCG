/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222125
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
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)57)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1057241000419272058ULL)))))))) << (((((/* implicit */int) (signed char)67)) - (66)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) var_5))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) max(((short)-6834), (((/* implicit */short) ((((/* implicit */unsigned long long int) -10LL)) == (4368504943410491818ULL)))))))));
    }
    for (int i_1 = 3; i_1 < 17; i_1 += 3) 
    {
        arr_5 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) (-(((long long int) 281200098803712ULL))));
        arr_6 [2LL] |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2])) > (((/* implicit */int) arr_4 [i_1 - 2])))))));
    }
}
