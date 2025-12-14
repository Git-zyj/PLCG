/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228985
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
    var_11 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) min((var_5), (max((max((var_9), (var_5))), (var_6)))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */unsigned short) var_8);
                            arr_14 [i_1] [i_3] = max((var_9), (((unsigned short) var_3)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        {
                            arr_21 [i_0] = ((unsigned short) max((min((var_0), (((/* implicit */unsigned short) (_Bool)1)))), (max((var_9), (arr_19 [i_0] [i_1] [i_0] [i_5] [8] [i_1])))));
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_24 [i_0 - 4] [i_6] [i_4 + 1] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (min((((/* implicit */unsigned short) arr_16 [i_6] [i_4 + 1] [(unsigned short)2] [(unsigned short)2])), (var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1] [i_6])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) || (var_8))))));
                                var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((long long int) var_1))), (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) var_8))));
                            }
                            for (int i_7 = 1; i_7 < 11; i_7 += 1) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned char) var_9);
                                var_14 = ((/* implicit */unsigned short) max((((/* implicit */short) (signed char)126)), ((short)-30716)));
                                arr_28 [i_0] [i_1 + 2] = ((((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned short) var_10))))) ? (((/* implicit */int) arr_12 [i_0 - 3] [i_1 - 1] [i_7 - 1] [i_4 - 1])) : (((((/* implicit */int) arr_10 [i_0] [i_7] [i_0] [i_5])) | (((/* implicit */int) var_10)))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))));
                            }
                            for (int i_8 = 1; i_8 < 11; i_8 += 1) /* same iter space */
                            {
                                var_15 = ((_Bool) max((var_9), (var_9)));
                                arr_31 [i_5] [i_8] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_6)), (var_7))), (max((((/* implicit */long long int) arr_22 [i_4 - 1] [i_4 - 1] [i_4])), (var_2)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535))))), (max((var_3), (((/* implicit */unsigned long long int) var_0))))))));
                                var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((var_9), (var_9)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_0), (var_9)))))), (((((((/* implicit */int) ((signed char) arr_30 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5] [i_8] [i_8] [i_1]))) + (2147483647))) >> (((/* implicit */int) (unsigned char)11))))));
                                arr_32 [i_0] [i_8] [i_1] [(unsigned char)5] [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned short) var_10)), (var_5))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))), (max((((/* implicit */unsigned long long int) var_1)), (var_4))))) : (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) (unsigned char)37)))))));
                            }
                            arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551602ULL)));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1194814409U), (((/* implicit */unsigned int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (unsigned short)23805)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) var_5)), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (var_0)))))))) : (max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) arr_29 [i_0])), (var_3)))))));
                var_17 = ((/* implicit */long long int) ((unsigned short) var_3));
            }
        } 
    } 
    var_18 = min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58241)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3217453609923944659LL)))), (max((var_3), (((/* implicit */unsigned long long int) var_0)))))));
}
