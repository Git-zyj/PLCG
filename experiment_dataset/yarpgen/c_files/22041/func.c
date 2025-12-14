/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22041
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), ((((_Bool)1) ? (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (-961048492) : (961048492)))) ? (((/* implicit */int) (signed char)125)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (short)-32739)))))) << (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)102)))))) + (6)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((arr_3 [i_1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)255)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)1))));
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 961048493)) > (arr_0 [i_1])));
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) && (arr_2 [i_1] [(signed char)18])));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (signed char)105))));
                    arr_17 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned long long int) min((arr_4 [i_2] [i_2]), (((/* implicit */int) arr_16 [i_4] [i_3] [i_2]))))) : (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_0 [i_2]) : (18446744073709551615ULL))))) << (((min((((/* implicit */unsigned long long int) var_3)), (33553920ULL))) / (((var_3) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3])))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_2])))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_3]))))) : (((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_2 [i_2] [i_3]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) min((var_16), ((!(((/* implicit */_Bool) (unsigned char)255))))));
                                arr_26 [(unsigned short)0] [i_3] [i_7] [i_4] [i_6] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (unsigned char)255))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)0)), (2451438099U)))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (-4748736633291925744LL))) + (((/* implicit */long long int) (-(((/* implicit */int) max((var_2), (((/* implicit */short) var_5))))))))));
        arr_27 [i_2] = ((/* implicit */short) min(((-(arr_0 [i_2]))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [(unsigned char)0] [i_2] [(unsigned char)0] [i_2] [6ULL]))))), (arr_13 [3] [i_2] [i_2])))));
    }
    var_18 = ((/* implicit */short) min((var_6), (((/* implicit */int) ((((((/* implicit */int) var_3)) | (((/* implicit */int) var_2)))) == (((/* implicit */int) var_2)))))));
}
