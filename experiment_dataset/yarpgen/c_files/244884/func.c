/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244884
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
    var_17 = min(((+(((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)65522)))))), (((/* implicit */int) (unsigned short)5)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max(((~(var_16))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)11)) && (((_Bool) var_7)))))));
                                var_19 -= ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [(short)7] [i_2] [i_3])) && (((/* implicit */_Bool) arr_0 [i_2] [i_2]))))), (((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 4] [i_1 + 1])) - (45)))))));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [1LL] [1LL] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (var_16) : (var_16)))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) ((unsigned char) var_2)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)98)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1)))))))));
                    var_21 = max((((-2690050640137812026LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */long long int) (signed char)-91)));
                    arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (unsigned short)2)))) >= (((/* implicit */int) arr_8 [i_2] [i_2] [(short)12] [i_0]))));
                    arr_18 [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (((/* implicit */long long int) arr_14 [i_2] [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)99))))) ? ((+(((/* implicit */int) var_10)))) : (((/* implicit */int) min(((signed char)-120), (var_9))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 16; i_7 += 3) 
            {
                {
                    arr_26 [i_6] [(short)1] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (signed char)-108)) | (((/* implicit */int) var_5)))));
                    var_22 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) (signed char)116)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8] [i_9]))) : (((((/* implicit */_Bool) 2983634097946418629LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) : (3869745465U))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_24 = ((unsigned long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_11 [i_5] [i_5] [i_8 - 3] [i_9] [i_10] [i_11]))));
                                arr_37 [i_5] [i_8 + 1] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65529)) / (((/* implicit */int) (unsigned char)130))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((unsigned short) (-(((/* implicit */int) (signed char)100))));
    }
}
