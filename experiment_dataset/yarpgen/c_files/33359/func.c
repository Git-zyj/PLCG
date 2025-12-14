/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33359
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
    var_15 *= ((/* implicit */unsigned char) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)53))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (unsigned short)65535);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2577366994U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))));
    }
}
