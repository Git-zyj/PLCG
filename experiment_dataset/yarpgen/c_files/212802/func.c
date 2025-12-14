/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212802
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) <= (((/* implicit */int) min((var_3), (((/* implicit */signed char) arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */signed char) ((_Bool) max((arr_0 [i_0]), (arr_0 [i_0]))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_5 [(unsigned char)2] [(unsigned char)2] = ((/* implicit */long long int) max((((/* implicit */int) (short)6)), (max((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)33))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_3] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)21)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_17 [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) arr_12 [i_4 - 1])) : (((/* implicit */int) arr_12 [i_1]))))), (((unsigned long long int) arr_12 [i_1]))));
                        var_22 += ((/* implicit */_Bool) max((((/* implicit */int) var_13)), (((((/* implicit */int) (unsigned char)41)) * (((/* implicit */int) (unsigned char)203))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned short)63965)), (4178929160U)));
        var_24 ^= ((/* implicit */signed char) ((((long long int) (signed char)113)) % (((/* implicit */long long int) ((/* implicit */int) (short)6)))));
        var_25 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1266906274U)))) ? (((/* implicit */int) ((signed char) 484753773877954855ULL))) : ((((_Bool)0) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (unsigned short)22))))))), (min((((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */unsigned long long int) arr_9 [1U])) : (8572850976803944078ULL))), (((/* implicit */unsigned long long int) (unsigned char)153))))));
    }
}
