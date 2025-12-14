/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197916
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((1801479856) ^ (((/* implicit */int) (unsigned short)2215))));
        arr_3 [(signed char)4] = ((/* implicit */unsigned long long int) max(((-(-1801479857))), (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))));
        var_20 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)57)) ? (5553722050129940880LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */short) ((unsigned int) (~(((2150711170U) >> (((((/* implicit */int) (unsigned short)61677)) - (61675))))))));
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1])))))));
        arr_6 [i_1] [i_1] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 817174229U)) ? (((/* implicit */unsigned int) 2131480468)) : (4294967295U))), ((+(3801926280U)))));
    }
    var_24 = ((/* implicit */signed char) (-(1801479871)));
}
