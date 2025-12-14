/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41315
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) ((arr_2 [(_Bool)1] [17U]) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)1])) : (min((((14851179446461576937ULL) - (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)11])) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (3595564627247974702ULL)))))));
        var_21 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)0)), (arr_3 [6LL] [i_0]))), (((long long int) arr_2 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        arr_8 [(short)16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [11LL]))));
        var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)0))));
    }
    var_23 = ((/* implicit */unsigned int) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (signed char)61)) : (((/* implicit */int) (short)4095))))), (max((((/* implicit */unsigned long long int) (short)-12013)), (15639332013164983299ULL)))))));
    var_24 *= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) max((var_19), (((/* implicit */long long int) (_Bool)0))))), (3595564627247974703ULL))), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_7)) - (((/* implicit */int) (short)-12013))))))));
}
