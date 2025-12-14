/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22996
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
    var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) || (var_5))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)322)))))) < (var_17)))) : (((/* implicit */int) var_0))));
    var_21 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_22 = ((/* implicit */signed char) (short)-322);
        var_23 = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_24 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)322)), (15010410921596082992ULL)))));
        var_25 ^= ((/* implicit */unsigned char) ((short) arr_3 [16] [i_1]));
    }
    var_26 = ((/* implicit */signed char) max((((long long int) (~(((/* implicit */int) (short)29194))))), (((/* implicit */long long int) ((unsigned int) (short)-2454)))));
}
