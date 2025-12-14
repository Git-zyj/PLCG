/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5098
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((9510535481247358065ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) != (((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) 2147483647)) ^ (-1LL))))))));
        var_15 |= ((/* implicit */unsigned short) ((signed char) max(((_Bool)1), (arr_0 [i_0] [(_Bool)1]))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((1105270820007904975ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)9)))))))));
        var_16 += ((/* implicit */signed char) 281474976694272LL);
    }
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) (_Bool)1);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned short) ((int) (unsigned short)18)));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        arr_9 [i_2 + 1] = ((/* implicit */unsigned long long int) arr_7 [i_2]);
        var_18 = ((/* implicit */_Bool) (~(((unsigned int) arr_0 [i_2] [8LL]))));
    }
    var_19 += ((/* implicit */unsigned int) var_1);
}
