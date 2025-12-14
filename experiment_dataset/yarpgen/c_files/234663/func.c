/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234663
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
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) var_0))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned short) (~((-(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0])))))));
        var_18 += ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)237))))));
        var_19 |= ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-124))) : (((-4825455783784445199LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) 4218988859U))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_2 [(unsigned short)9] [i_0])), (arr_1 [i_0] [i_0 - 2]))))))) : (((min((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])), (arr_1 [i_0] [i_0]))) & (((/* implicit */int) var_14))))));
        var_21 = min((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_1 [i_0] [i_0]))) >> ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (arr_1 [1U] [i_0 + 1]) : (arr_1 [i_0] [i_0 + 2]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_5 [7U] [i_1] = ((/* implicit */unsigned int) -1999735709);
        var_22 = (+((+(((/* implicit */int) arr_0 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) arr_1 [i_1] [i_2]))));
            arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) arr_7 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) 4825455783784445198LL)) ? (-909935893) : (((/* implicit */int) (unsigned short)42486))))));
        }
        var_24 += ((/* implicit */unsigned long long int) var_2);
    }
    var_25 = ((/* implicit */int) (unsigned char)0);
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_9), (((/* implicit */unsigned short) var_6)))), (var_9)))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) (unsigned char)57)), (var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1999735692)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2))))) == (2065159938U))))));
}
