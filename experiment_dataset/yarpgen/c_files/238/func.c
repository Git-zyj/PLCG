/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238
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
    var_19 = ((/* implicit */short) var_13);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29954))) : (14164221741062686974ULL)));
        arr_3 [i_0] = ((/* implicit */_Bool) min((min(((short)29959), (((/* implicit */short) (signed char)(-127 - 1))))), (((short) (signed char)60))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)29959)) >> (((((/* implicit */int) (signed char)32)) - (16)))))) ? (((/* implicit */int) arr_1 [11LL])) : (((/* implicit */int) arr_0 [6] [6]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) 1570873740733736385LL);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_11 [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1000684608822506877LL)) ? (((/* implicit */int) arr_10 [i_1] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_1]))));
            var_21 &= ((/* implicit */short) arr_6 [i_1] [i_2]);
            var_22 = ((/* implicit */short) ((unsigned int) var_12));
        }
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 840211567))) ? ((+(((/* implicit */int) (signed char)-46)))) : (((/* implicit */int) arr_10 [i_1] [i_1]))));
        var_24 *= ((/* implicit */unsigned char) arr_7 [i_1]);
    }
    var_25 = ((/* implicit */unsigned long long int) var_2);
}
