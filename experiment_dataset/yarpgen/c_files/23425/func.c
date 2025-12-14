/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23425
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 11570544428678459617ULL)) ? (2055859059287580869ULL) : (((/* implicit */unsigned long long int) -558750041))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -558750041)) ? (-558750040) : (((/* implicit */int) (short)-27135))))) ? (((((/* implicit */_Bool) 558750040)) ? (arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) 558750051)) : (var_2)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 558750041)) ? (5256478211695364367ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_2))) : (((((/* implicit */_Bool) arr_5 [i_2 - 1] [3LL] [7LL])) ? (((/* implicit */unsigned long long int) -558750015)) : (arr_5 [i_2 - 1] [i_2 - 1] [i_2]))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 558750014)) ? (arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (-558750045) : (((/* implicit */int) var_11))))) : (((var_17) ? (arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                                var_23 += ((/* implicit */long long int) ((((/* implicit */_Bool) 558750014)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (558750041) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (899722975U)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (4294967295U) : (((/* implicit */unsigned int) 558750006))))) : (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) 558750041)))))));
}
