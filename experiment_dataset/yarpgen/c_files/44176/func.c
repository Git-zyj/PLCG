/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44176
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
    var_11 *= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (unsigned char)86)))) < (((/* implicit */int) (unsigned char)170)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned char)248))))) : (((int) (_Bool)1))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_12 &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (unsigned char)248))))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        var_13 = (unsigned char)8;
                        arr_11 [i_0] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((long long int) 208882734));
                        arr_12 [i_3] [i_3] = ((/* implicit */short) var_10);
                        var_14 = ((((/* implicit */_Bool) (unsigned char)248)) && (((/* implicit */_Bool) (unsigned char)8)));
                        arr_13 [i_0] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1081032916U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (9223372036854775807LL))) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47387)) && (((/* implicit */_Bool) 799000946U)))))));
                    }
                    var_15 = ((/* implicit */signed char) arr_8 [(unsigned short)14] [i_1] [i_1 - 1] [i_1] [i_1] [i_1]);
                    var_16 = ((/* implicit */signed char) (unsigned char)242);
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */short) 644066600U);
    }
}
