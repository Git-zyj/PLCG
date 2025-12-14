/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245388
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) ((_Bool) 0ULL))), (max((((/* implicit */unsigned long long int) arr_1 [i_4 + 2] [i_4 + 2])), (arr_6 [7]))))) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)76)) > (((/* implicit */int) (signed char)127))))))))));
                                arr_14 [i_0] [8ULL] [i_2] [i_0] [i_4] [(unsigned short)4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_8), (((/* implicit */short) (signed char)62)))))))) ? (((arr_12 [6LL] [i_4 + 1] [i_4 + 2] [(unsigned short)6] [i_4 + 1]) ? (((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) var_1))))) : (((((/* implicit */_Bool) (short)-30320)) ? (arr_0 [i_0] [i_1]) : (var_6))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-86)))))))));
                                var_13 &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (unsigned short)16384)), ((+(((/* implicit */int) var_5)))))));
                                var_14 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) arr_8 [i_0] [i_4 - 1] [i_1] [i_4 - 1])))) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])))) != (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)76))))) - (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
