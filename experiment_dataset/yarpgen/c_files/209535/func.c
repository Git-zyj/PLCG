/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209535
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (0ULL) : (arr_4 [i_1 - 1] [i_1 - 1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [9U] [9U] [4U] [i_1 - 1] [4U] [i_3 - 1]))));
                                var_21 = ((/* implicit */int) min((var_21), ((-(((/* implicit */int) arr_3 [i_2] [(short)1]))))));
                                var_22 = ((/* implicit */short) (unsigned short)64827);
                                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_3 - 3] [i_2] [(short)2] [i_1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 284312890522690871LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (18446744073709551615ULL)));
                                var_25 = ((/* implicit */_Bool) min((var_25), (((_Bool) arr_17 [i_0] [i_5 - 3] [i_0] [(_Bool)1] [(short)6]))));
                                var_26 = ((/* implicit */unsigned short) ((arr_14 [i_2] [i_1] [i_2] [i_6] [i_6] [i_5] [3ULL]) ? (arr_19 [i_0] [i_5] [i_6] [(short)10] [i_1 + 1] [i_5]) : (((/* implicit */unsigned long long int) ((long long int) var_2)))));
                            }
                        } 
                    } 
                    arr_24 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) 3744332052U)) | (0ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))));
                    var_27 = ((/* implicit */signed char) arr_7 [i_0]);
                }
                var_28 -= ((/* implicit */short) arr_11 [i_1 - 1] [i_1] [8ULL] [5LL]);
                var_29 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_10 [5ULL] [i_1 + 1] [i_0] [i_0])) | (((/* implicit */int) arr_15 [(unsigned char)12] [i_1 - 1] [(unsigned char)12] [(unsigned char)12])))) | (((/* implicit */int) (unsigned char)255))));
                arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)0] [(_Bool)1] [(unsigned char)1]);
                var_30 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((var_1) || (((/* implicit */_Bool) arr_13 [i_1 - 1]))))) << (((10351198554745150695ULL) - (10351198554745150681ULL)))));
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) min((((/* implicit */unsigned char) var_1)), (var_6)));
    var_32 = var_1;
}
