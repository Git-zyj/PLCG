/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230945
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 2) 
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_3] [i_1])) != (((/* implicit */int) min(((short)11490), (arr_2 [i_1] [i_2]))))));
                                var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_0 + 3] [3U] [3U] [i_3] [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(3495409056U)))) ? (524287U) : (arr_12 [i_0] [i_0] [i_0] [i_0] [(short)5] [i_0] [i_0 + 4])))) : (((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 2] [i_0 + 2])) ? (min((arr_6 [(short)1] [i_1] [i_2] [i_4]), (((/* implicit */unsigned long long int) arr_3 [i_3] [i_4])))) : (arr_11 [i_4] [8] [i_1] [i_1] [i_0])))));
                                arr_15 [(unsigned short)1] [i_1 + 1] [i_2] [i_2] [i_3] [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_4 - 1]))));
                                arr_16 [i_3] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26922))))) > (arr_1 [i_0 - 1]));
                            }
                            for (short i_5 = 2; i_5 < 15; i_5 += 4) 
                            {
                                arr_19 [(_Bool)1] [i_0 + 3] [i_2] [i_3] [i_3] = (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_2] [i_1])) ? (((/* implicit */int) var_3)) : (arr_0 [i_1] [i_3]))) != (((((/* implicit */int) var_7)) >> (((7360078949112404191ULL) - (7360078949112404185ULL)))))))));
                                var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_0])) : (((((/* implicit */int) arr_5 [i_1] [i_3])) & (((((/* implicit */_Bool) (short)24851)) ? (((/* implicit */int) (short)32766)) : (((/* implicit */int) (signed char)-22))))))));
                            }
                            arr_20 [i_3] [(unsigned char)7] [(short)14] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_5)))), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 11086665124597147409ULL)) ? (((/* implicit */int) (short)975)) : (((/* implicit */int) arr_5 [i_3] [i_1]))))))) : (max((((/* implicit */unsigned long long int) (_Bool)0)), (7475412403761497404ULL)))));
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (var_4)));
                            var_13 *= (+(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))))));
                        }
                    } 
                } 
                arr_21 [i_0 + 1] [i_0 + 3] [i_1] &= 7360078949112404221ULL;
                arr_22 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (((((/* implicit */int) (signed char)-13)) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [11ULL])) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_1))));
            }
        } 
    } 
    var_14 = var_4;
    var_15 *= ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((7360078949112404176ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) && (((/* implicit */_Bool) var_2)))))) : (max((((/* implicit */unsigned long long int) var_8)), (min((10049411658379534205ULL), (((/* implicit */unsigned long long int) var_8))))))));
}
