/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30726
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 &= ((/* implicit */signed char) arr_0 [i_0]);
        var_18 = ((/* implicit */short) min((min((((/* implicit */int) (_Bool)1)), (((int) (signed char)40)))), (((/* implicit */int) max(((unsigned char)15), ((unsigned char)15))))));
        var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1])))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned short)23702)) : (((/* implicit */int) (signed char)40))))))));
        var_20 |= ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = min((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) ((short) arr_3 [i_1 + 1] [i_1])))))), ((+(((/* implicit */int) arr_0 [19])))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max(((((-(((/* implicit */int) arr_5 [i_1] [i_1])))) % (min((arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_3 - 2]), (var_3))))), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_8 [i_1]))) <= (((7591088877155899350LL) & (((/* implicit */long long int) ((/* implicit */int) arr_1 [11ULL]))))))))));
                    var_22 -= ((/* implicit */unsigned short) max((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)8]))) == (var_16)))), (min((((/* implicit */short) (unsigned char)196)), ((short)-27749)))))), (((((/* implicit */int) arr_5 [i_3 + 1] [i_1 + 2])) / (((/* implicit */int) var_4))))));
                    arr_14 [i_1 + 1] [i_1] [i_1] [i_1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) <= (((852944582962052046ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))))))) ? (((((/* implicit */_Bool) (unsigned short)35340)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1 + 1] [i_3 + 3] [i_1 - 1] [i_1]))) : (arr_8 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41834))));
                    var_23 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((arr_9 [i_1 + 2] [i_3 - 2] [i_3 + 4]) <= (arr_9 [i_1 + 1] [i_3 - 2] [i_3 - 2])))), (min((arr_9 [i_1 + 1] [i_3 - 2] [i_3 + 1]), (arr_9 [i_1 - 1] [i_3 + 4] [i_3 + 4])))));
                    /* LoopNest 2 */
                    for (short i_4 = 2; i_4 < 20; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_3 + 3])) | (((/* implicit */int) var_1))))))), ((+(((((/* implicit */_Bool) (unsigned short)8192)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_13)))))));
                                var_25 = ((/* implicit */short) ((arr_8 [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) min((max((arr_1 [i_4 + 2]), (((/* implicit */unsigned short) var_7)))), (arr_1 [i_1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_15 [i_1 + 1] [i_1 - 1] [(short)15] [i_1])) ? (((/* implicit */int) arr_15 [i_1 - 1] [i_1 - 1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [(unsigned char)21] [i_1])))), (((((((/* implicit */_Bool) arr_20 [i_1 + 2] [i_1 + 2] [i_1 + 2] [(short)7] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)18270)) : (((/* implicit */int) (unsigned char)9)))) / (min(((-2147483647 - 1)), (((/* implicit */int) (short)-31560))))))));
        var_27 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_8 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) && (((/* implicit */_Bool) var_14))))))) % (((/* implicit */int) ((((/* implicit */int) max((arr_20 [17U] [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]), (arr_16 [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [1LL])))) != (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 2] [i_1 + 2] [6U])))))));
        var_28 = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_8 [i_1 - 1]) <= (arr_8 [i_1 + 2])))), (((long long int) arr_8 [i_1 + 2]))));
    }
    var_29 = ((/* implicit */unsigned char) ((((min((var_15), (((/* implicit */unsigned long long int) (signed char)-41)))) * (((/* implicit */unsigned long long int) ((var_16) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? ((+(((/* implicit */int) var_2)))) : ((+(((/* implicit */int) var_12)))))))));
}
