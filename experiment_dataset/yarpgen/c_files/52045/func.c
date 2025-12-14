/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52045
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (~(((long long int) 2319369471674950790ULL))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) max((((/* implicit */short) (signed char)94)), (((short) 4294967295U)))))));
                                arr_14 [i_4] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0] [(unsigned char)18])))) ? (((/* implicit */int) arr_0 [i_2 - 2])) : ((+(((/* implicit */int) var_4)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_3] [i_2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (signed char)-125))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_11 [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2]))))));
                            }
                            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 3) 
                            {
                                var_11 = ((/* implicit */int) (unsigned short)25284);
                                arr_19 [i_2] [i_2] [i_2 - 2] [(short)7] [i_2] [i_5] [i_2] = ((/* implicit */int) ((unsigned int) (short)-30640));
                                var_12 &= ((/* implicit */unsigned int) ((_Bool) max((var_8), (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] [i_2 + 1])))));
                            }
                            /* LoopSeq 4 */
                            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [20] &= ((/* implicit */short) arr_7 [i_0] [i_0]);
                                arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */_Bool) var_7);
                                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((2U), (var_5)))), (((((/* implicit */_Bool) (short)-27380)) ? (5967061831152031520ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                                arr_25 [i_0] [i_0] [i_2 + 1] [i_3] [i_2 + 1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_6 - 1] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_9 [i_6 - 1] [i_2 + 1] [i_1])))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) var_9))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_6))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))) : (max((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */unsigned long long int) var_6))))));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */long long int) ((unsigned int) var_2));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (288089638663356416LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1] [i_2 - 1])) - (((/* implicit */int) arr_21 [i_0])))))));
                                arr_31 [i_0] = ((/* implicit */unsigned short) ((int) (_Bool)1));
                            }
                            for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
                            {
                                var_17 = ((/* implicit */_Bool) ((signed char) min((((/* implicit */int) max(((unsigned short)39347), ((unsigned short)59509)))), ((~(((/* implicit */int) (unsigned short)20655)))))));
                                var_18 = ((/* implicit */int) min((arr_10 [i_1] [i_2 - 1] [i_9 - 2] [i_9] [i_9 - 2] [i_9 - 2]), (arr_10 [i_2] [i_1] [i_2] [i_3] [(unsigned short)12] [i_2])));
                                var_19 = ((/* implicit */unsigned int) (short)-22572);
                            }
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_1))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)25284)) / (((/* implicit */int) ((_Bool) 833685244U)))));
}
