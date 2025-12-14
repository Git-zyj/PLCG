/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49352
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)6), (((/* implicit */unsigned short) (unsigned char)50)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)37))))) : (2603677200467639883ULL)));
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) (_Bool)1);
        var_18 = ((/* implicit */signed char) ((max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0]))))))) * (((((/* implicit */_Bool) (short)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (18446744073709551611ULL)))));
    }
    var_19 = ((/* implicit */unsigned short) var_11);
}
