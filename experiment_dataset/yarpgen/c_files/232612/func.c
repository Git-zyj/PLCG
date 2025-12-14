/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232612
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned char)21)))) + (2147483647))) >> (((((((/* implicit */_Bool) (short)9686)) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) (unsigned short)5415)))) - (65503))))))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? ((-(402565168))) : (((arr_1 [i_0 - 1]) * (((/* implicit */int) var_12))))))) : ((+(((arr_0 [i_0 + 4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (unsigned short)43211)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_3])))) != (((((/* implicit */_Bool) (unsigned short)65530)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)19071)))))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)-12)) || (((/* implicit */_Bool) (short)-17116)))) && (((/* implicit */_Bool) var_2)))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
}
