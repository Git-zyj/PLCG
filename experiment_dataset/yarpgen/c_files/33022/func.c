/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33022
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)1)), (10559087166703514546ULL))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) ? (var_12) : (((/* implicit */int) arr_0 [i_0 + 1]))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) (+(-1556195574))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_4 [i_2] [i_1] [i_0]), (var_5))));
                        var_20 = ((/* implicit */unsigned char) arr_6 [(short)13] [i_1] [i_2] [i_3]);
                        arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((1556195573) / (1556195573)))) : (max((((/* implicit */unsigned int) -1556195564)), (1553291560U)))));
                        var_21 += ((/* implicit */unsigned char) max((((-6718889084374515056LL) % (var_8))), (((/* implicit */long long int) (short)9658))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((var_3) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23872))) : (3U))), (min((((/* implicit */unsigned int) var_0)), (var_7)))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)))) ? ((~(var_8))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41661)) - (((/* implicit */int) var_1))))))))))));
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
    {
        for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
        {
            {
                arr_19 [i_4] = var_1;
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) -1556195576))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1] [i_5])) ? (((/* implicit */unsigned int) ((-1556195574) - (-1556195580)))) : (arr_17 [i_5 - 3] [i_4 + 1] [i_4 + 1])))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((15432032865178331099ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23872))))))));
                var_25 = ((/* implicit */unsigned int) arr_16 [i_5 - 3] [i_5 - 3] [(unsigned char)0]);
                var_26 = ((((/* implicit */_Bool) (~(arr_18 [i_5] [i_5 - 1])))) ? (min((arr_18 [i_5 - 3] [i_5 + 1]), (arr_18 [i_5] [i_5 - 1]))) : (((((/* implicit */_Bool) (unsigned char)104)) ? (arr_18 [i_5 - 3] [i_5 - 2]) : (((/* implicit */int) var_2)))));
            }
        } 
    } 
}
