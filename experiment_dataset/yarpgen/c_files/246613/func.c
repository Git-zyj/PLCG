/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246613
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (min((((/* implicit */unsigned long long int) max(((unsigned short)65520), ((unsigned short)45689)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223))) : (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) var_11)) << (((/* implicit */int) arr_1 [i_0] [(short)16])))) < (((/* implicit */int) arr_1 [0] [0]))))))));
                var_14 -= ((/* implicit */short) min((((((long long int) (_Bool)1)) - (((/* implicit */long long int) (~(arr_3 [i_0] [(unsigned short)13] [(unsigned short)13])))))), (((/* implicit */long long int) (((-2147483647 - 1)) | (arr_0 [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 24; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 9547289800285316372ULL)) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_13 [(unsigned char)8] [6U] [1ULL] [1ULL]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19497)) ? (((/* implicit */int) arr_8 [(unsigned char)17] [(unsigned char)17])) : (((/* implicit */int) var_3))))) ? (arr_5 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_3 + 2])))))));
                            var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [(unsigned char)17] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92))) == (1362498074U))))) : (((((/* implicit */_Bool) arr_10 [(short)9] [i_2] [(short)9] [i_2])) ? (1082140645U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))), (((/* implicit */unsigned int) min(((unsigned short)11), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_11 [(unsigned short)17] [i_2] [9] [(unsigned short)17] [i_2])), ((unsigned char)216)))))))));
                            var_17 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_5 + 2] [i_5 + 2])) | (5741635333173213240ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [22U] [22U])) | (var_4)))) ? (max((-3420984738353452363LL), (((/* implicit */long long int) (signed char)16)))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_3 + 2])), (min((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (arr_12 [i_2] [i_2] [i_2] [i_2])))))), (((((/* implicit */_Bool) arr_9 [i_2 + 1])) ? (arr_9 [i_2 + 1]) : (((/* implicit */unsigned long long int) 3420984738353452349LL))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) (unsigned short)48230)) : (((((/* implicit */_Bool) (unsigned short)45689)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned short)8879))))))) ? (((/* implicit */unsigned long long int) ((min((3420984738353452362LL), (((/* implicit */long long int) var_9)))) | (-3420984738353452363LL)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32765))) * (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3))))))));
}
