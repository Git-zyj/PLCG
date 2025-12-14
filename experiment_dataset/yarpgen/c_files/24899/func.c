/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24899
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
    var_17 = ((/* implicit */int) ((long long int) var_9));
    var_18 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_4 [4LL] = min((((((((/* implicit */_Bool) 1484377659)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (var_13))) / (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))), ((-(((int) arr_1 [i_0] [i_0])))));
        arr_5 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (min((-18LL), (((/* implicit */long long int) (short)26604)))))), (((/* implicit */long long int) ((_Bool) -1877528852968817193LL)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        arr_10 [i_1] = ((/* implicit */long long int) ((int) 849368473));
        var_19 = ((/* implicit */long long int) -449548761);
        var_20 ^= ((/* implicit */long long int) ((unsigned char) ((_Bool) (short)26596)));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4072589864820085192LL)) ? (6529084966558903842LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        arr_12 [i_1] = ((/* implicit */unsigned short) (-(arr_1 [i_1 - 2] [i_1 - 1])));
    }
}
