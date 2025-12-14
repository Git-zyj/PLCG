/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224493
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_17);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)70))) % (arr_0 [i_0])));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) var_0))) >> (((((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)448)))) - (374)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3446309399U)) ? (((/* implicit */int) arr_12 [i_0 + 3] [i_3 + 3])) : (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))));
                        var_19 += ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0 + 3] [i_3 + 4]))) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3446309394U)))));
                        arr_13 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65087)) : (((/* implicit */int) (unsigned char)238))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) var_16))));
                        arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1478625481)) * (1771134030U)));
                        arr_15 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)448)) ? (3446309419U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    var_20 &= ((/* implicit */unsigned short) ((short) max((max((((/* implicit */long long int) var_14)), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)61)) || (((/* implicit */_Bool) (unsigned char)10))))))));
    var_21 = ((/* implicit */_Bool) var_4);
}
