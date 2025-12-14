/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196152
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
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_7))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_21 &= ((/* implicit */short) ((int) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_3 [10LL])))));
            arr_4 [(short)1] = ((/* implicit */_Bool) arr_3 [i_1]);
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((long long int) max((arr_0 [(unsigned char)8]), (((/* implicit */short) arr_2 [i_0] [i_0]))))) < (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
        var_22 = ((/* implicit */short) max((((int) arr_3 [i_0])), (((/* implicit */int) ((signed char) (short)0)))));
        var_23 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */int) (signed char)-21)) : (((/* implicit */int) (short)22))))) ? (((((/* implicit */_Bool) -355148633)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) arr_2 [i_0] [(signed char)2])))) : (2147483647))) * (((/* implicit */int) var_6))));
        var_24 *= ((/* implicit */signed char) arr_2 [i_0] [9ULL]);
    }
    for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1])))) == (((/* implicit */int) arr_7 [13ULL] [i_2 + 1])))))));
        var_25 = ((/* implicit */long long int) ((10921746734706838782ULL) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_2] [i_2 + 1])))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)87)) << (((((/* implicit */int) max((arr_7 [i_2 + 1] [i_2 - 1]), (arr_7 [i_2 + 2] [i_2 + 1])))) + (94))))))));
    }
}
