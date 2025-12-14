/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211519
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */int) var_5)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 9; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0 + 2] [i_1] [0U] [i_3] [i_4] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */unsigned long long int) var_0)) : (max((var_8), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_3), (var_1)))))))));
                                arr_14 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (+(var_3)))) ? ((+(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                                var_11 = ((/* implicit */unsigned char) (+(var_0)));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    arr_17 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) var_4))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            {
                                arr_23 [i_7] [i_7 - 1] [i_1] [i_7] [6ULL] [i_5] = (~(((/* implicit */int) (short)28147)));
                                arr_24 [i_0 + 1] [i_1] [i_1] [i_1] [i_7 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4602678819172646912ULL)) ? (((/* implicit */unsigned int) 2)) : (4294963200U)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_1)))));
                                arr_25 [i_0] [i_0] [i_5] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_2)) : (var_8)));
                                arr_26 [i_0 + 1] [i_1] [i_5] [i_0 + 1] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) var_0))))));
                            }
                        } 
                    } 
                    var_12 &= ((/* implicit */int) (-(((((/* implicit */_Bool) 18446744073709551604ULL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5834)))))));
                }
                arr_27 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
    {
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            {
                var_13 &= ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) ? (max((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */long long int) var_4))))))) : (max((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))))));
                arr_32 [i_9] [i_9] = ((/* implicit */short) (+(max((((/* implicit */long long int) (~(var_4)))), (var_3)))));
                var_14 = ((/* implicit */unsigned int) min((var_14), ((~(((((/* implicit */_Bool) var_4)) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                arr_33 [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (+(var_3)));
    var_16 = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) min((var_6), (var_5))))))), (min((var_3), (var_3)))));
}
