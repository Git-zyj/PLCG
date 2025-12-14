/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198937
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_1] |= ((/* implicit */long long int) (((-(arr_2 [i_1 + 2] [i_1 - 2]))) * (((((/* implicit */int) var_4)) * (arr_2 [i_1 + 2] [i_1 - 2])))));
                    var_11 += ((/* implicit */unsigned char) min(((~(((/* implicit */int) (_Bool)1)))), ((~(min((252676598), (((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_8))) < (((((/* implicit */int) (signed char)-86)) * (((/* implicit */int) (unsigned char)73)))))))));
    var_13 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))));
    var_14 = ((/* implicit */int) (short)-32766);
    /* LoopSeq 1 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))) : (4062199522U)))) ? (((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_7 [i_3]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_5 [i_3])))) / (((/* implicit */int) (unsigned char)255)))))));
        var_16 *= ((/* implicit */_Bool) ((max((528524224U), (19U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(var_10))))))));
    }
}
