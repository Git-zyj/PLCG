/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238802
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [3LL]) ^ (arr_1 [i_0] [i_0])))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL)))))));
                var_16 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])) ^ (var_11))), (((((/* implicit */_Bool) (signed char)-25)) ? (15618193157046353650ULL) : (var_4))))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                var_17 &= ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_4 [i_0] [(unsigned char)12])))) + (2147483647))) << (((max((((unsigned long long int) var_1)), (((((/* implicit */_Bool) 1099330979U)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) - (13783211122786771185ULL)))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (((~(((unsigned long long int) arr_6 [i_0] [i_2])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25)))));
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0])) ? (3430887813069280130LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) arr_13 [i_4] [5] [i_4] [(short)8] [i_4])) ? (((/* implicit */long long int) arr_7 [i_0] [i_0])) : (arr_2 [i_0] [i_4])))))) ? (((/* implicit */int) arr_10 [i_0] [i_3] [4LL] [i_3])) : (((/* implicit */int) (unsigned char)163))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (short)2172))) < (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_7 [i_0] [i_3])), (6884923152195796895LL)))) ? (min((-6884923152195796895LL), (((/* implicit */long long int) (unsigned char)30)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */int) (short)2148)) : (arr_6 [i_0] [i_1]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((var_7) << (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 19; i_5 += 4) 
    {
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
        {
            {
                arr_18 [i_6] = ((/* implicit */unsigned int) (~(2076722033)));
                arr_19 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-6884923152195796895LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_5 - 2])) >= (6884923152195796887LL)))))))) ? (-366216586) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (((((/* implicit */_Bool) -277879955384805442LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-((~(((((/* implicit */int) arr_16 [i_8] [i_6] [18LL])) / (((/* implicit */int) (signed char)124)))))))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)10395)))))), (((((/* implicit */_Bool) arr_24 [i_6 - 1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6 + 1])))))));
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_5]))))) <= (min((var_1), (((/* implicit */long long int) (unsigned char)32)))))))));
                            arr_26 [i_5] [(short)14] [(short)14] [i_7] [i_6] = ((/* implicit */unsigned char) min((var_13), (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_6 + 1])))))));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_1)))) ? (((((/* implicit */_Bool) arr_23 [i_6] [i_6 - 1] [(unsigned char)17] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (217096237235085544ULL))) : (((var_8) << (((arr_21 [i_6]) - (1602897678U)))))))) ? (max((min((var_1), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) var_10))));
                        }
                    } 
                } 
            }
        } 
    } 
}
