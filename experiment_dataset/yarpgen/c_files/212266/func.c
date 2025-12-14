/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212266
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = var_13;
                var_18 = ((/* implicit */short) ((2864910477U) < (((/* implicit */unsigned int) 0))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_14 [i_3] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_10 [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_0])) < (((/* implicit */int) var_17))))))))));
                            arr_15 [i_3] [0ULL] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) | (((/* implicit */long long int) var_1))))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (signed char)2)), (958319022095512007LL))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(short)8])) ? (((/* implicit */int) var_15)) : (var_1)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    var_19 |= ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_0])) <= (arr_21 [i_0] [i_1] [i_4 - 3] [i_5 + 2] [i_4 - 3] [i_6]))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0])) < (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_10 [i_4 - 1])) ? (arr_21 [i_0] [i_1] [i_4 - 2] [i_5 - 2] [i_1] [i_6]) : (((/* implicit */int) var_8)))))))));
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_4] [i_5] [i_4] [i_6])) && (((/* implicit */_Bool) arr_1 [i_4 + 1]))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_13)))) ? (((/* implicit */long long int) arr_12 [i_0] [i_4 + 2] [i_0] [i_0] [i_4 - 3] [i_0])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_4] [i_1])) / (((/* implicit */int) arr_26 [i_0] [i_0]))))) : ((-(var_12)))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_32 [i_0] [i_7] [i_4 + 1] [i_4 + 1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? ((~(((/* implicit */int) max((var_5), (var_11)))))) : (((((((/* implicit */int) var_17)) / (((/* implicit */int) arr_30 [i_7] [i_8])))) * (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                                arr_33 [i_0] [i_0] [i_4] [i_8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 20)) ? (-4424940612025635630LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27400)))))) ? (((/* implicit */int) ((max((var_4), (((/* implicit */long long int) arr_17 [i_8] [i_7] [i_4 - 1] [i_1])))) <= (((/* implicit */long long int) (-(((/* implicit */int) var_14)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_23 [i_8] [i_7] [i_4] [i_1] [i_8])) ? (((/* implicit */long long int) arr_12 [(short)4] [i_4] [(short)4] [i_4] [i_4 + 1] [i_4 + 1])) : (var_9))) <= (((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_3)) - (8489)))))))))));
                                var_23 -= ((/* implicit */unsigned short) var_15);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((var_16) << (((((/* implicit */int) var_14)) - (30428)))));
}
