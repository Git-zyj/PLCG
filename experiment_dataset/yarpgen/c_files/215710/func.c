/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215710
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((max((var_1), (((/* implicit */unsigned int) var_2)))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    var_12 += ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [i_2] [i_1] [i_2] [i_3] [i_1] = ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_0] [i_1] [i_0])) * (((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_0 - 2] [i_0 - 1]))))) : (max((max((13927977199300504559ULL), (((/* implicit */unsigned long long int) -159589493)))), (((/* implicit */unsigned long long int) 1843837868U)))));
                            var_13 |= ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 4518766874409047056ULL)));
                        }
                    } 
                } 
                arr_10 [i_1] [(unsigned char)13] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_1] [i_0 + 1]);
                arr_11 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 2])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))) : (min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (unsigned char i_5 = 1; i_5 < 24; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_5] [i_4] [i_4] [i_5 + 1] [i_5] = ((/* implicit */int) ((964064075789278093ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89)))));
                            arr_18 [i_0] [i_5] [i_4] [i_5] = ((/* implicit */_Bool) var_8);
                            /* LoopSeq 3 */
                            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                            {
                                var_14 += ((/* implicit */unsigned long long int) var_2);
                                arr_22 [i_0] [i_1] [i_5] [i_4] [i_1] = (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))))), (var_7))));
                                arr_23 [i_0] [i_1] [i_4] [i_5] [i_5] [i_6] = ((/* implicit */short) min(((+(arr_13 [i_5 + 1] [i_0 - 2] [i_0 - 1] [i_0 - 1]))), (((arr_13 [i_5 - 1] [i_4] [i_4] [i_0 + 1]) ^ (arr_13 [i_5 + 1] [i_5] [i_4] [i_0 + 1])))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 619231502U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-21983))));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) /* same iter space */
                            {
                                arr_26 [i_0 - 1] [i_1] [i_5] [i_0] [(_Bool)1] = ((/* implicit */unsigned short) arr_12 [i_0]);
                                arr_27 [20ULL] [(unsigned char)14] [i_4] [i_5] [i_0] [i_0] &= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)37)))) <= (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))));
                            }
                            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) 0U)) ? (964064075789278093ULL) : (((/* implicit */unsigned long long int) 65535)))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_5))));
                                arr_31 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_1] [i_4] [i_4] [i_8]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
