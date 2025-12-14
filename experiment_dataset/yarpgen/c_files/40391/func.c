/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40391
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((((/* implicit */int) arr_2 [i_2])) | (var_2))) | (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_1] [i_2]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_1] [i_1])) >= (((/* implicit */int) arr_3 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])) : (var_6)))));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_2] [8LL] [i_2] [i_2]))))) != (var_17)));
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((long long int) (+(var_16))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) min((((/* implicit */long long int) arr_10 [i_0])), (var_9)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 2; i_5 < 15; i_5 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned char) ((var_5) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (2674867650U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)22))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)127)))))));
                        var_23 = ((/* implicit */int) (~((+(arr_16 [i_0] [i_1] [i_0] [i_5])))));
                        arr_18 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (signed char)-56);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 15; i_6 += 4) 
    {
        for (short i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            for (unsigned int i_8 = 1; i_8 < 17; i_8 += 2) 
            {
                {
                    arr_26 [i_6 + 1] [i_8] [i_7] [16ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_19 [i_6 + 3]) : (arr_19 [i_6 - 1])))), (9223372036854775808ULL)));
                    arr_27 [i_8] [(short)7] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-19)) >= (((/* implicit */int) var_1)))))));
                    var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */int) arr_24 [i_6 - 1] [i_7] [i_8 + 1] [i_6 - 1])) + (((/* implicit */int) (short)-10272))))));
                }
            } 
        } 
    } 
}
