/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50474
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
    var_10 = var_8;
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0] [i_1 + 2] [i_1] [i_1 + 3])) ^ (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1] [i_1 + 3])))) * (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)127))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (~(((/* implicit */int) var_6))))))));
                                var_13 = ((/* implicit */_Bool) max((var_13), (min((((_Bool) arr_6 [i_1 + 2] [i_3 - 2] [i_3])), ((!(((/* implicit */_Bool) arr_10 [i_1] [i_1 + 2] [i_3 - 2] [i_1 + 3] [i_4] [16LL]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (signed char)125))));
                        arr_15 [i_0] [i_1] [15ULL] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_13 [i_0] [i_1] [i_2] [i_1] [i_0]) < (arr_13 [i_0] [i_1] [8] [i_1] [(unsigned char)2])))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (arr_13 [17ULL] [i_1] [16LL] [i_1] [(short)14]))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_1] = ((/* implicit */unsigned char) (signed char)-105);
                            var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_5)) / (-1061254282)))));
                            arr_21 [i_1] = ((/* implicit */unsigned long long int) (((+(min((((/* implicit */unsigned long long int) var_2)), (0ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1 - 1]))))))));
                        }
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (((+(((18446744073709551615ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) * (((((0ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [7] [15] [(unsigned char)13] [i_1] [i_2] [i_2] [(short)1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_17 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_1 + 2] [i_1 + 3] [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 + 3])) >> (((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 2])) + (2904)))));
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_16 [i_0] [i_7] [i_1 - 2] [i_5] [(_Bool)1] [(_Bool)1] [14ULL]))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_22 [(short)5] [i_1] [i_2] [i_1] [1ULL])) % (1702859041))) : (((/* implicit */int) var_5))));
                            arr_26 [i_1] = ((/* implicit */_Bool) ((((int) (short)-9240)) | ((+(((/* implicit */int) arr_18 [i_0] [6LL] [i_2] [(unsigned char)0] [(signed char)9] [19] [i_7]))))));
                            arr_27 [i_7] [i_5] [i_1] [i_1] [i_0] [2] = ((/* implicit */signed char) (+(arr_19 [i_1] [i_1] [i_1 + 2] [i_1 + 1] [(_Bool)0] [(short)15])));
                        }
                    }
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */unsigned long long int) (signed char)-115))));
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_21 -= ((((((/* implicit */_Bool) -1061254292)) || (((/* implicit */_Bool) arr_29 [i_10])))) && (((/* implicit */_Bool) max((arr_17 [i_10] [i_10] [i_10] [i_9] [i_9] [i_8] [i_8]), (arr_17 [i_8] [(short)10] [i_8] [(short)20] [i_8] [i_8] [i_8])))));
                    arr_37 [i_8] [i_9] [i_10] = ((/* implicit */short) min((((/* implicit */int) arr_17 [i_8] [i_8] [17LL] [i_9] [i_9] [i_10] [i_10])), ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62460)) || (((/* implicit */_Bool) arr_34 [4LL] [(short)11] [4] [i_10])))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((((((((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-112)))) + (2147483647))) << (((((((/* implicit */int) arr_8 [i_8] [i_8] [i_9] [i_10] [i_10] [i_10] [i_10])) + (31))) - (14))))) > (((/* implicit */int) arr_14 [i_8] [4LL] [i_9] [i_10]))))));
                    var_23 = ((/* implicit */short) 1550287440);
                }
            } 
        } 
    } 
}
