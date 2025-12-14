/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241044
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned char) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 3397440750U)) ? (1888668289U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) % (((((var_11) + (9223372036854775807LL))) >> (((933870903924624533LL) - (933870903924624504LL)))))))));
    var_16 = ((/* implicit */_Bool) (((-(((var_9) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50674))))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 897526540U)) + (var_10)))) ? (var_4) : (min((((/* implicit */unsigned int) var_12)), (1888668287U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((max((var_3), (((2406299006U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0]))))))) << (((((((/* implicit */_Bool) 2406299008U)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 4972862225155256034LL)) ? (-4972862225155256022LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7799))))))) + (8LL))));
                var_17 |= max((((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(arr_0 [i_1]))) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12LL] [i_0]))))))), (arr_0 [i_0]));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3029179901990794307LL)) ? (((/* implicit */int) (short)-3168)) : (((/* implicit */int) (short)10688))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) (-(arr_2 [i_3 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : ((-(var_9))));
                                var_19 -= ((((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)0))))) / (min((arr_2 [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))) + (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (var_8))))) & (arr_0 [i_3]))));
                                arr_15 [i_0] [i_0] [i_2] [i_2 - 2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1888668273U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10689))) : (((var_14) / (((/* implicit */long long int) ((/* implicit */int) (short)1821))))))), (((((/* implicit */_Bool) 1977521140)) ? (((/* implicit */long long int) arr_13 [i_0] [(unsigned char)11] [i_2] [(unsigned char)11] [i_2] [i_2 - 2] [i_3 - 2])) : (max((((/* implicit */long long int) var_3)), (var_10)))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) (signed char)-45);
                    var_21 = ((/* implicit */_Bool) ((2050752409U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-13748)))));
                }
                arr_18 [i_0] [i_1] &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) arr_13 [i_0] [i_1 + 2] [i_0] [i_0] [i_0] [i_0] [i_0])))))))), ((~(-7725937248700236726LL)))));
            }
        } 
    } 
}
