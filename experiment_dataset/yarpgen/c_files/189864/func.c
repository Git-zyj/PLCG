/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189864
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
    var_11 = var_1;
    var_12 = ((/* implicit */unsigned short) min((((unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((~(2930568381U))) : (var_6)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (((((((/* implicit */_Bool) (signed char)-103)) ? (2930568381U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22728))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_0] [i_2] [i_0] [0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [10U] [i_4])))))))));
                                var_14 = ((/* implicit */short) 2930568388U);
                                arr_14 [i_3] [i_0] [i_0] [i_2] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (((!(arr_4 [i_0] [i_0]))) ? (var_6) : (min((2930568388U), (((/* implicit */unsigned int) (unsigned char)15))))));
                                arr_15 [i_3] [i_1] [i_3] [(short)5] [i_4] = ((/* implicit */signed char) ((min(((+(-1836804376244461676LL))), (((/* implicit */long long int) (+(2930568388U)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-20)) + (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_1] [(short)3])) >= (7080559)))))))));
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((arr_3 [4U] [i_1] [(unsigned short)7]) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_4 [i_0] [i_4]))))))))));
                            }
                        } 
                    } 
                } 
                var_16 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) <= (min((((/* implicit */int) (unsigned short)55950)), (((((/* implicit */_Bool) 1364398899U)) ? (((/* implicit */int) arr_4 [i_1] [9])) : (((/* implicit */int) arr_0 [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
}
