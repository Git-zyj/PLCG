/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191140
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
    var_15 = ((/* implicit */unsigned long long int) var_11);
    var_16 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
    var_17 ^= ((/* implicit */signed char) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)26530)) ? (648002103) : ((+(((/* implicit */int) (unsigned char)221))))))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) max((var_19), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)228))) : (3862406551U)))) ? (((/* implicit */int) ((short) (unsigned char)207))) : (((/* implicit */int) (short)13396)))))))));
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483643)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) (unsigned char)64)))))));
        }
        var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)12291)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14352))))));
        arr_8 [i_0] = (-(((/* implicit */int) ((unsigned char) -512))));
    }
}
