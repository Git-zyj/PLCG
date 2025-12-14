/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223134
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
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_14))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_0])))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (+(var_1)));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_2 [i_0])), (((long long int) 17537174437782329566ULL)))), (((/* implicit */long long int) ((_Bool) 15LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    arr_15 [i_2] [i_3] [i_3] = ((/* implicit */short) (-((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (0LL))))))));
                    var_17 |= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (short)-7)) ? (arr_11 [i_2] [i_3]) : ((-9223372036854775807LL - 1LL))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        var_18 = ((/* implicit */short) (-(var_6)));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_5 + 3] [i_6] [i_6] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_21 [i_2] [i_3] [i_4] [i_5] [i_3] [i_5 - 1] [i_3])))) << (((((min((((/* implicit */unsigned int) arr_3 [i_2] [i_3])), (arr_20 [i_5] [i_6] [i_2]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 2] [i_5] [i_4] [i_5 + 3] [i_4] [i_4] [i_4]))))) - (3061890314U)))));
                            arr_23 [i_6] [10LL] [i_4] [i_4] [i_4] [(short)1] [i_2] = ((/* implicit */signed char) 16166026706102160042ULL);
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)127)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_5])) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_14 [i_3] [i_4] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((((var_9) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_6])) || (((/* implicit */_Bool) arr_12 [i_4])))))) : (arr_20 [i_6] [i_4] [i_2])))) : (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))), (arr_16 [i_4] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5 + 2])))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) 2280717367607391557ULL))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            arr_28 [i_2] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */short) ((arr_25 [i_7] [i_7] [i_7] [i_5 + 2] [i_5 + 3] [i_5 + 3] [i_4]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            arr_29 [i_2] [i_3] [i_4] [i_2] [i_7] [i_3] [i_4] = ((/* implicit */signed char) arr_25 [i_2] [i_2] [i_2] [i_4] [i_5] [i_7] [i_7]);
                        }
                        for (long long int i_8 = 3; i_8 < 15; i_8 += 2) 
                        {
                            var_21 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(var_9)))), (arr_16 [i_8 - 2] [i_3] [0U] [i_5 + 1] [i_3] [i_2])));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_3] [i_8 + 1] [(_Bool)1] [i_8 + 1] [i_4])) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_8 - 3] [i_2] [i_8 - 1] [i_5 + 2])) : (((/* implicit */int) arr_27 [i_3] [i_4] [i_8 - 1] [i_8 - 1] [i_3] [i_2]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_2])), (((((/* implicit */_Bool) arr_20 [i_3] [i_5] [i_8 - 2])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_8]))))))))));
                            var_23 *= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_2]), (var_0)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13))))))));
                        }
                    }
                }
            } 
        } 
    } 
}
