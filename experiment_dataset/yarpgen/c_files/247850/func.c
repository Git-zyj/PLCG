/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247850
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) > (((/* implicit */int) var_14)))) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_12))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL)))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0 - 4] [i_1] [1ULL])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [(unsigned char)14] [14ULL] [i_2] [i_4] |= ((unsigned long long int) ((((/* implicit */int) max(((short)17393), (((/* implicit */short) (unsigned char)194))))) > (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(short)11] [(short)11] [i_4])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_1] [(unsigned char)11] [i_3] [i_4]))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_3))));
                                arr_17 [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)253), (arr_12 [i_0 - 1] [i_2] [i_2] [i_1])))) * (((/* implicit */int) max((arr_12 [i_0 + 1] [9ULL] [9ULL] [8ULL]), (var_12))))));
                                arr_18 [i_0] [i_0] [(unsigned char)4] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned short) arr_4 [i_2] [i_2] [i_2])), ((unsigned short)203)))))), (((((/* implicit */int) max((var_15), (var_15)))) * ((~(((/* implicit */int) (unsigned short)206))))))));
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */short) max((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) > (((/* implicit */int) min((var_15), (var_15)))))))));
    var_22 ^= ((/* implicit */short) var_1);
    var_23 ^= ((/* implicit */unsigned long long int) var_17);
}
