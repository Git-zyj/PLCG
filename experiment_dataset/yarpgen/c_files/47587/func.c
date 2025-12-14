/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47587
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned char)2] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) (_Bool)1))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) (_Bool)1))))))));
        var_19 = (-((+(((long long int) (unsigned short)26679)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (_Bool)1);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned char)255))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))));
        var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_11 [i_2] = ((/* implicit */unsigned char) ((unsigned short) min((var_17), (((/* implicit */long long int) (_Bool)1)))));
    }
    var_23 = ((/* implicit */unsigned char) var_13);
}
