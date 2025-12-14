/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198574
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((((/* implicit */_Bool) ((unsigned long long int) ((0) ^ (((/* implicit */int) (signed char)91)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (0)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])))))) : (min((((/* implicit */long long int) (unsigned char)255)), (arr_4 [i_1] [i_1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((17089535271448211795ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))))))) != (((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (max((((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0])), (arr_4 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)133))))) : (3325224884U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)20820))))))));
                    var_19 = ((/* implicit */int) ((unsigned long long int) (!((!(((/* implicit */_Bool) (unsigned short)0)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_4])) ? (arr_4 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) (-2147483647 - 1))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)48661)))))))) ? (arr_6 [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3] [i_1])))))) >= (((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3] [i_2] [i_1] [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) -1))))))))));
                            var_21 ^= ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((((/* implicit */int) (_Bool)0)) >> (((17089535271448211795ULL) - (17089535271448211790ULL))))))) < (((/* implicit */int) ((arr_1 [i_3]) < (arr_1 [i_3 + 1]))))));
                        }
                        var_22 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) 969742417U)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            var_23 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_2] [i_0]))))));
                            var_24 = ((/* implicit */unsigned int) ((int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_5]))) >= (var_10)))));
                            var_25 = ((/* implicit */short) (!(((arr_10 [i_1] [i_3 + 1]) > (arr_10 [i_1] [i_3 - 1])))));
                            arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 13736793886034259598ULL))))));
                            var_26 ^= ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) 969742412U)), (var_17))) << (((var_9) - (3518675685296440711ULL))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13606)) ? (((((/* implicit */_Bool) 969742408U)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [6] [i_2] [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) 969742394U)) && (((/* implicit */_Bool) 18446744073709551599ULL))))))))));
                        }
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 15; i_6 += 2) 
                    {
                        var_27 -= ((/* implicit */short) (!(((((((/* implicit */_Bool) arr_10 [i_6] [i_1])) ? (((/* implicit */unsigned long long int) -773769594)) : (arr_17 [i_0] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_1])) && (((/* implicit */_Bool) 825419903))))))))));
                        arr_20 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_6 + 1])) || (((/* implicit */_Bool) arr_14 [i_6 - 2] [i_6 + 1] [i_6 + 1]))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_6] [i_1] [i_6])))))))))));
                        var_28 = ((/* implicit */short) arr_2 [i_6]);
                    }
                }
                var_29 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_30 += ((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 969742390U)))))));
}
