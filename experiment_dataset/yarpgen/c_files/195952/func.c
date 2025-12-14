/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195952
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
    for (unsigned long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)22058)) && (((/* implicit */_Bool) ((int) (unsigned char)255))))) ? ((~(arr_7 [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43477)))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5207)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) : (((((/* implicit */_Bool) 14U)) ? (4873608715680202212ULL) : (((/* implicit */unsigned long long int) 2640629881U)))))))));
                }
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) var_9)) & (3))), (((int) (unsigned short)65535))));
                    var_20 = min((-9086231293350443269LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43477)))))))));
                    var_21 = ((/* implicit */signed char) (~(((((((/* implicit */unsigned long long int) -3370862203873744600LL)) > (var_3))) ? (((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [(unsigned short)3] [(unsigned short)1]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3]))) : (arr_3 [i_3] [i_0])))))));
                    var_22 = ((/* implicit */unsigned short) min((min(((+(((/* implicit */int) var_16)))), (arr_0 [i_0 - 3]))), ((-(((/* implicit */int) (short)0))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 3])))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)23067)) >> (((/* implicit */int) (_Bool)0)))) - (((/* implicit */int) (short)-15990)))))));
                }
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 14; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9086231293350443269LL)) ? (arr_17 [i_6] [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 4]) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 4])))))) : ((~(3101051009151500263ULL))))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) 1776021488252073204LL)) ? (((unsigned int) arr_14 [i_5])) : (((/* implicit */unsigned int) max(((~(-1))), (((/* implicit */int) ((arr_10 [i_5 - 1] [i_4] [i_1]) < (((/* implicit */unsigned long long int) var_17)))))))))))));
                                arr_18 [i_0 + 1] [i_1] [i_0 + 1] [(unsigned short)13] [i_6 - 1] [i_0 - 2] [i_5 - 1] = ((/* implicit */unsigned int) (-(((long long int) max((3228399221660917300LL), (((/* implicit */long long int) 1400873U)))))));
                                var_26 = ((/* implicit */signed char) arr_9 [i_6]);
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? ((~(min((5269710450866806023ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16574))))) ? (((unsigned long long int) (signed char)89)) : (((/* implicit */unsigned long long int) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43478))))))))));
                }
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_3 [i_1] [0U]))));
                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27920)) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_1]) : (arr_4 [i_0 - 4] [i_0 - 4]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 - 2] [i_1]))))))))));
            }
        } 
    } 
    var_29 = var_6;
}
