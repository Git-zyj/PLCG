/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248561
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
    var_10 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (signed char)123))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) var_5)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)62231)) : (((/* implicit */int) (signed char)-1))));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_13 ^= ((/* implicit */unsigned long long int) (+(((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) var_6);
        arr_7 [(unsigned char)5] [i_1] |= ((/* implicit */unsigned short) (signed char)114);
    }
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)212)) % (((/* implicit */int) (signed char)-60))));
}
