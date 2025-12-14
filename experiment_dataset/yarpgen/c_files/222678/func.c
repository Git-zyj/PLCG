/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222678
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
    var_10 = ((/* implicit */unsigned short) min((((((_Bool) var_8)) ? (((((/* implicit */_Bool) 4064ULL)) ? (3372683412600212832ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)90))))) ? (var_3) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */long long int) (-(arr_2 [i_0 + 3])))) : (min((((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)85)) ? (arr_10 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_2 + 2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)33032)) <= (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_8 [i_0 + 3] [i_3] [i_4] [i_3]))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-90)))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1626278050629591212ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) (((_Bool)1) ? (2012576815U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-91))))))))) ? (min((-3670847261766227098LL), (((/* implicit */long long int) max(((unsigned short)4032), (((/* implicit */unsigned short) (signed char)-90))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (arr_2 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned short)0] [i_4]))) : (min((var_6), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0] [i_3])))))))));
                                var_14 *= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)87)) ? (((/* implicit */int) (signed char)60)) : (1350963745))));
                                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (~((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2 + 1] [i_0 - 2])))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0)))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5813731469684887575LL)) ? (((((/* implicit */_Bool) var_0)) ? (((var_4) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((int) (signed char)2))))) : (((/* implicit */unsigned long long int) ((var_1) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-74))) : (var_2))))))));
}
