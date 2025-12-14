/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43218
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
    var_12 = ((/* implicit */unsigned short) -17LL);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1216403041)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_9))))) ? (min((-9191969004812625802LL), (((/* implicit */long long int) (unsigned short)18)))) : (((/* implicit */long long int) ((((-45935635) + (2147483647))) >> (((var_6) - (447693222U)))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)63213)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0] = ((((/* implicit */unsigned long long int) (-(arr_2 [i_0])))) ^ (((((/* implicit */_Bool) arr_2 [(unsigned short)4])) ? (16246577473932888192ULL) : (((/* implicit */unsigned long long int) 1023)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_9 [i_1] = var_9;
            arr_10 [i_1] = ((long long int) (unsigned char)21);
            var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        arr_11 [i_0] [i_0] = ((/* implicit */_Bool) max((max((2200166599776663427ULL), (((/* implicit */unsigned long long int) var_6)))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-95))))) ? (((/* implicit */unsigned long long int) min((1039), (-1028)))) : (((((/* implicit */_Bool) -1004)) ? (2200166599776663446ULL) : (((/* implicit */unsigned long long int) 1965529519))))))));
        var_15 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)93)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)210)))))))));
    }
}
