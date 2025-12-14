/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232846
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
    var_13 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((short) var_7))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) 602818516)))))))));
    var_14 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 2] [i_0] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_2] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0 + 2] [i_2] [i_3])))) / ((+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_2] [i_3]))))));
                                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) max((arr_6 [i_0 + 2] [i_0] [i_0 + 1]), (((/* implicit */unsigned int) arr_10 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        arr_15 [i_0] [i_0] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */short) var_9);
                        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))) / (arr_0 [i_0] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2] [i_5])) || (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) var_5)) ? (-602818517) : (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_1]))))));
                        arr_16 [i_5] = ((/* implicit */short) ((((unsigned int) 1325658527308373642ULL)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        var_18 *= ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : (arr_2 [i_0 - 1] [i_5 - 2]));
                    }
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        arr_20 [i_6] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2])) || (((/* implicit */_Bool) arr_14 [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_0 + 1]))))) : (((/* implicit */int) (((+(((/* implicit */int) var_10)))) < ((-(((/* implicit */int) var_9)))))))));
                        var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((-1188446137), (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_2] [(unsigned char)1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1558733417)) ? (((/* implicit */int) arr_11 [i_6] [5LL] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)116))))) : (max((10088344466154542471ULL), (arr_18 [i_0] [5] [i_0]))))) ^ (((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0] [i_0])))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned long long int) var_2)), (arr_4 [i_0]))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 5838997807004722913ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17063))) : (18446744073709551608ULL)))) ? (1325658527308373665ULL) : (((/* implicit */unsigned long long int) max((602818516), (((/* implicit */int) (short)-17064))))))) - (((((/* implicit */_Bool) 12607746266704828702ULL)) ? (3193204335676001215ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_22 [i_0] [i_0]))))))));
                        var_22 = ((((arr_8 [i_1] [i_1] [i_0 + 2] [i_1] [i_2] [i_2]) | (((/* implicit */long long int) var_2)))) ^ (min((arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_7] [i_7] [i_0 + 2]), (arr_8 [i_0] [i_0] [i_0 + 2] [i_7] [i_0] [i_2]))));
                        arr_23 [i_0 + 1] [i_0 - 1] &= ((/* implicit */unsigned int) var_6);
                    }
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 14; i_9 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_0] [i_2] [i_0] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) arr_9 [i_0 + 2] [i_1] [i_1] [i_2] [i_8] [i_9]))))), (((arr_8 [i_0 + 1] [(short)14] [i_0 + 2] [(unsigned char)9] [i_9 - 3] [i_9 + 1]) | (((/* implicit */long long int) var_12))))));
                                var_23 = ((((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 602818516)) ? (438239545287740122LL) : (((/* implicit */long long int) -1188446137))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) (unsigned short)65535)))))))));
                }
            } 
        } 
    } 
}
