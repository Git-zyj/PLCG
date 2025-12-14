/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202999
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 13213583567629551958ULL))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_16 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (unsigned short)35560)) ? (3405532528181719496LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] &= ((/* implicit */long long int) ((((3271383106U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-6828))))) <= (min((3425626056U), (((/* implicit */unsigned int) (unsigned short)35560))))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((~((+(13213583567629551983ULL))))) << (((((/* implicit */int) var_1)) + (14068))))))));
}
