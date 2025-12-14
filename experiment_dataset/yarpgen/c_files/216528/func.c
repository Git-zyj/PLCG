/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216528
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [14LL] = ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_1)))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)7))))) : (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) arr_16 [i_1]))))));
                                var_11 -= ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_0)))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3] [i_4])) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [8ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-9180146406396585527LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)18834))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8422))) : (var_3)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [(short)5] [i_1] [i_1] [i_1] [(short)5] [i_1] [i_1]))))) : ((((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32749))) : (min((var_10), (((/* implicit */unsigned long long int) (short)32749))))))));
                }
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */short) (((((~(((/* implicit */int) (signed char)41)))) + (2147483647))) >> (((((((/* implicit */_Bool) 16870805730500955049ULL)) ? (((/* implicit */int) (short)32736)) : (((/* implicit */int) (short)10874)))) - (32719)))));
                                arr_28 [i_5] [i_5] [i_5] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)13131)) ? (((/* implicit */unsigned long long int) -1LL)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) var_3)))));
                            }
                        } 
                    } 
                    arr_29 [8ULL] [8ULL] [i_5] = ((/* implicit */short) arr_0 [i_1]);
                }
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4))));
    var_14 = ((/* implicit */unsigned int) ((short) (~(var_10))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
}
