/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210734
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
    var_13 = ((/* implicit */unsigned char) var_5);
    var_14 = ((/* implicit */unsigned char) -4009948236331019304LL);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) <= (var_12))))) : (((var_12) | (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) var_4)) || ((_Bool)1))), (max((var_3), ((_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                                var_17 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_3 - 2])) != (((/* implicit */int) var_5)))) ? (min((((/* implicit */unsigned long long int) -500366001362868573LL)), (3160301664820389297ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_4 - 1])))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))) ? (((unsigned int) arr_6 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)66))))) ? (arr_12 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_5]))))))))) ? (2ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) + (arr_7 [i_0] [i_1] [i_5]))))))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)126)) % ((-(((/* implicit */int) (signed char)-113))))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_6 [i_0] [i_0] [i_5] [i_6])) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_6])))))))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-1)), (arr_1 [i_0])))) ? (min((11693418254963733744ULL), (arr_15 [i_0] [(short)4] [i_0] [i_0]))) : (min((arr_15 [i_6] [i_5] [i_1] [i_0]), (((/* implicit */unsigned long long int) (signed char)-67))))))));
                                var_22 &= ((/* implicit */unsigned char) min((max((((((/* implicit */unsigned long long int) arr_7 [i_5] [i_6] [i_5])) - (var_10))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) 4243192949U))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (((-((+(((/* implicit */int) arr_3 [i_0] [i_0] [1LL])))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)49808)), (0ULL)))) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6)))))))));
            }
        } 
    } 
}
