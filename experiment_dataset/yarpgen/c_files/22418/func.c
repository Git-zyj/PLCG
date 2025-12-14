/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22418
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
    var_10 += ((/* implicit */int) ((unsigned short) ((unsigned int) (~(((/* implicit */int) (_Bool)1))))));
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_0), (((/* implicit */unsigned short) var_9)))), (var_0)))) ? (((((/* implicit */int) (_Bool)1)) % (((((/* implicit */int) (short)28500)) + (((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_2 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)21968)))))))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max(((+(((/* implicit */int) var_4)))), ((~(((/* implicit */int) (_Bool)1)))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0] [i_3] [i_2] [i_3])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_2] [i_3 - 2])))));
                        arr_11 [3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5672542891580767389LL)) ? (arr_2 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137)))));
                    }
                    for (unsigned char i_4 = 2; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        arr_14 [6ULL] [i_2] [10] [i_2] [i_2] [i_1] &= ((/* implicit */int) max((1099511627775ULL), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
                        arr_15 [i_0] [i_2] [9ULL] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned long long int) var_0)), (((/* implicit */unsigned long long int) arr_2 [i_0])))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((2701092680U) >> (((((/* implicit */int) (unsigned short)21963)) - (21953)))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 13; i_6 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned char) (-((-(1670688946U)))));
                            arr_23 [i_0] [i_6] [i_2] [i_2] [i_6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_2] [i_6] [i_6] [i_6])) / (((/* implicit */int) arr_13 [i_2] [(short)5] [i_2] [i_5]))));
                        }
                        for (short i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */long long int) ((_Bool) (!(arr_16 [i_0] [i_0] [i_0]))));
                            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 5672542891580767374LL)) ? (2701092680U) : (arr_19 [i_0] [i_1] [i_1])))) % (arr_2 [i_2 + 2])));
                            var_20 -= ((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_7]);
                        }
                        var_21 += ((/* implicit */short) (-(((/* implicit */int) var_7))));
                    }
                    for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */int) (short)63)) / (((/* implicit */int) ((_Bool) max((140737488355327ULL), (var_3)))))));
                        var_23 *= max(((((_Bool)1) ? (11522924400354104739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_5))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)192)) ^ (((/* implicit */int) var_7))))), (((11522924400354104746ULL) | (((/* implicit */unsigned long long int) var_2)))))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2 + 3] [i_1])) + (((/* implicit */int) (unsigned short)21966)))), (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_8] [i_0] [i_2 - 1] [i_1]))))))));
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 16296012938750768079ULL))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_32 [i_9] [(short)7] [i_1] [i_1] = ((/* implicit */unsigned short) ((((long long int) (+(arr_27 [0] [0] [i_1] [i_9])))) / (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((var_8) % (((/* implicit */int) (unsigned char)76)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        arr_36 [i_0] [i_1] [i_9] [i_10] [i_10] |= ((/* implicit */unsigned short) 8323072U);
                        arr_37 [i_0] [i_0] [(unsigned char)6] [i_9] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)61816))));
                    }
                    var_26 = ((/* implicit */short) ((((((((/* implicit */_Bool) 3023979247U)) ? (2701092689U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (max(((~(((/* implicit */int) var_5)))), (arr_21 [i_1]))) : (((/* implicit */int) ((short) ((arr_27 [i_9] [i_0] [i_9] [i_0]) / (((/* implicit */int) (unsigned char)188))))))));
                    arr_38 [i_0] [i_1] [i_9] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5152359903550718227LL)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))));
                }
                var_27 = ((/* implicit */unsigned char) (+((-(arr_30 [i_0])))));
            }
        } 
    } 
}
