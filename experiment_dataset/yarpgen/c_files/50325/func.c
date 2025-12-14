/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50325
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 7; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) var_7);
                    arr_9 [i_0] [i_2] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (short)14041);
                }
                /* LoopSeq 3 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((arr_8 [i_0] [i_3] [i_3]) == (((/* implicit */long long int) (+(((692240430U) & (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))));
                        arr_17 [i_3] = ((/* implicit */short) (unsigned char)98);
                        arr_18 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) (-((~(min((((/* implicit */long long int) (unsigned short)0)), (var_11)))))));
                        var_20 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) arr_14 [i_1 + 1] [i_1] [i_0] [(signed char)6] [i_0 + 2] [i_1 + 1])), (arr_6 [i_1 + 1]))))));
                    }
                    var_21 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_0]))))), (var_6)))) ? (max((arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1]), (arr_15 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((((var_4) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24689)) ? (((/* implicit */int) (short)14118)) : (((/* implicit */int) (unsigned char)19)))))))));
                }
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    arr_23 [i_0] [(signed char)5] [i_5] [i_5] = ((/* implicit */short) var_3);
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 9; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_25 [i_5] [i_6] [i_6 - 1] [i_7] [i_7] [i_5]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_11)))))))));
                                arr_31 [i_5] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)11528))))));
                                arr_32 [i_0] [i_5] = arr_14 [4ULL] [i_1] [i_5] [4ULL] [i_6] [i_7 - 1];
                            }
                        } 
                    } 
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))), (var_8)));
                                var_24 = arr_4 [i_1] [i_8];
                                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_16))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                arr_43 [i_8] [i_11] [i_0] [i_1 - 1] [i_8] = ((/* implicit */unsigned char) min(((short)14133), (((/* implicit */short) var_13))));
                                var_26 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (arr_11 [i_0] [i_0 - 3] [i_8] [i_8]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_0] [i_0 + 3] [i_1] [i_12]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-31220)))))))));
                            }
                        } 
                    } 
                }
                arr_44 [(short)7] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))), (min((((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_1] [i_1 - 1])), (var_9)))))) ? (max((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned int) (short)14014))))), (var_6))) : (((/* implicit */unsigned long long int) min((arr_36 [i_1 - 1] [i_1 - 1] [i_0] [i_0 - 4]), (arr_36 [i_1] [i_1 - 1] [i_0 - 4] [i_0 - 4]))))));
            }
        } 
    } 
    var_27 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((-2791051297683430698LL) > (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (var_8)))))))), (var_2)));
}
