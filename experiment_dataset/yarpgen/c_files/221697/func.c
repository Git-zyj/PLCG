/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221697
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
    var_19 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned int) 457242979))))) ^ ((~(7602606569511650833ULL))))), (((/* implicit */unsigned long long int) var_14))));
    var_20 = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) min((var_9), (var_17))))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_2)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) min((0ULL), (0ULL))));
                    arr_10 [i_2] [i_1] [i_2] [i_1] = (+((+(arr_3 [i_2 - 2]))));
                    var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_17)), (var_13)))) ? (((/* implicit */int) min(((unsigned short)31132), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) ((short) 7602606569511650832ULL)))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    arr_13 [i_1] [i_1 + 2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_1 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65520))))));
                    arr_14 [i_1] [i_1] [i_3 + 1] = ((/* implicit */short) arr_12 [i_0]);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_1 + 1] [i_1] [i_3 - 2]));
                        var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31114))));
                    }
                    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */int) arr_16 [i_1] [i_3 - 2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_16 [i_1] [i_3 - 1] [i_1] [i_3 - 1] [i_1]))));
                }
                arr_18 [i_1] [i_1 + 2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (var_17))))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))) : (arr_12 [i_1]))))), (((/* implicit */unsigned long long int) var_6))));
                /* LoopSeq 3 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    var_24 = ((/* implicit */unsigned short) min((((int) (unsigned short)34407)), (((var_12) / (((/* implicit */int) var_13))))));
                    arr_22 [i_5] [9ULL] [i_1] = ((/* implicit */unsigned long long int) var_8);
                    arr_23 [i_5] [i_5] [i_5] [i_1] = ((((_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_3)) : ((((-(((/* implicit */int) var_16)))) * (((/* implicit */int) var_4)))));
                }
                /* vectorizable */
                for (unsigned short i_6 = 4; i_6 < 16; i_6 += 1) 
                {
                    var_25 += ((unsigned short) 18446744073709551606ULL);
                    arr_27 [i_6 - 3] [i_6] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                    arr_28 [i_1] [i_1] [i_6 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 + 2] [i_0])) ? (((/* implicit */int) (unsigned short)35809)) : ((-(((/* implicit */int) var_11))))));
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 122402518)) ? (((((/* implicit */_Bool) 964374967U)) ? (6ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((18446744073709551611ULL) | (((/* implicit */unsigned long long int) arr_1 [i_1]))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_37 [i_9] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_11))));
                                var_27 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned short)34407))))));
                            }
                        } 
                    } 
                    arr_38 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)31133))));
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_12))));
}
