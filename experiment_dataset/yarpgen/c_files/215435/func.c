/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215435
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) arr_0 [i_0]))))))))) - (((int) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        arr_13 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) var_8);
                        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_3 - 2])) ? (((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0] [i_1 - 1]) : (arr_2 [i_0] [i_1] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))))))))));
                    }
                    for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) arr_16 [i_2] [i_1 - 1] [i_0]);
                        arr_17 [i_2] [i_1] [i_2] [i_4 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_4 - 2])) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)15760)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_16 [i_0] [i_4 - 3] [i_1 - 1]), (arr_11 [i_0] [i_1 - 1] [i_2] [i_4 - 2] [i_0]))))) : (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_14)) : (arr_4 [i_4 - 1] [i_2] [i_1]))), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_2] [i_1 - 1]))))));
                        var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_2] [i_4 - 1] [i_2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_3))))) : (((((/* implicit */unsigned int) var_5)) | (var_6))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65531)))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_19 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_2))));
                        var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_12)), ((-(arr_9 [i_0] [i_1 - 1])))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_6 - 1])) ? (max((((/* implicit */unsigned long long int) var_3)), (arr_18 [i_0] [i_0] [i_0] [(_Bool)1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_2] [i_0] [i_1] [i_0])))))) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)15761)))))) : (((/* implicit */int) arr_5 [i_2] [i_1] [(unsigned short)14]))));
                        var_22 = ((/* implicit */signed char) (-((-(((arr_2 [i_0] [i_0] [i_0]) / (arr_10 [i_0] [i_6])))))));
                        var_23 = max((((((/* implicit */int) var_12)) ^ (((/* implicit */int) (short)32767)))), (((((/* implicit */_Bool) arr_7 [i_6 - 1])) ? (((/* implicit */int) arr_7 [i_6 - 1])) : (((/* implicit */int) arr_7 [i_6 - 1])))));
                        arr_22 [i_0] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_5 [i_6 - 1] [i_1] [i_2])) - (107)))))));
                        var_24 &= ((/* implicit */int) arr_10 [i_1 - 1] [i_6 - 1]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_8 [(signed char)5] [9LL])), (arr_2 [i_0] [(unsigned char)13] [i_0]))), (((/* implicit */long long int) 2147483633))));
                        var_26 &= ((((/* implicit */_Bool) arr_14 [i_1 - 1] [i_2] [i_1 - 1] [i_7] [i_2] [i_0])) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) var_2)));
                        arr_25 [i_2] [i_2] [i_2] [0ULL] [(_Bool)1] [i_2] = ((/* implicit */unsigned int) (unsigned short)18088);
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_7] [i_0]))))));
                    }
                }
            } 
        } 
    }
    var_27 += var_13;
}
