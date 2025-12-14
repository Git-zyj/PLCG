/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216826
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
    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_9)) == (((/* implicit */int) var_16)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14)))) * (min((((var_11) ? (((/* implicit */int) (_Bool)1)) : (-999906946))), (((/* implicit */int) var_9))))));
    var_21 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_7)))) % (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (9588938480774520136ULL))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) (_Bool)0))))));
        var_23 = ((/* implicit */unsigned short) ((_Bool) arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [3] [(unsigned char)4])) ? (8857805592935031454ULL) : (((/* implicit */unsigned long long int) var_19)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = var_8;
        var_24 ^= ((/* implicit */unsigned long long int) ((2147483637) & (((/* implicit */int) (unsigned short)57676))));
        arr_7 [11] [(unsigned char)5] = ((/* implicit */long long int) min((-1023395512), (((/* implicit */int) (_Bool)1))));
    }
    var_25 = 101508374;
}
