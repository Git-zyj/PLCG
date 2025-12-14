/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229286
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) 12425799504835315543ULL);
        var_18 = ((/* implicit */long long int) (!((_Bool)0)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)187);
        var_19 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2))))));
        var_20 ^= ((/* implicit */int) ((_Bool) var_12));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) ((-621325949) < (((/* implicit */int) (_Bool)1))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_22 = ((/* implicit */long long int) var_6);
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((7234237006300566676LL) << (((((/* implicit */int) (short)13319)) - (13319)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4057854526U)))))) : ((+(3721896885U))))))));
    var_24 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_0)) / (((/* implicit */int) var_4))))));
}
