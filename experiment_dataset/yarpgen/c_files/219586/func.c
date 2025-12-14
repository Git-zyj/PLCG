/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219586
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), (((((/* implicit */_Bool) arr_3 [i_1] [i_0] [i_0])) ? (((15ULL) + (0ULL))) : (min((((/* implicit */unsigned long long int) var_10)), (18446744073709551600ULL))))))))));
                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((18446744073709551609ULL) == (16ULL)))), ((+(arr_2 [(unsigned short)11] [i_1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_1]))))) : ((+(0U)))));
                var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) arr_1 [i_0])) : ((+(((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_1 [(signed char)5])) : (((/* implicit */int) arr_1 [i_0]))))) : (max((var_9), (arr_3 [i_0] [i_1] [(_Bool)1])))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (_Bool)1))))), ((-(18446744073709551600ULL))))))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (signed char)36)) ? (0ULL) : (((/* implicit */unsigned long long int) -4747819854117446277LL)))))) <= (((/* implicit */unsigned long long int) max((arr_3 [i_4] [i_2] [i_0]), (((arr_5 [i_4] [i_1] [i_1] [i_0]) >> (((((/* implicit */int) (signed char)-118)) + (133)))))))))))));
                                var_20 -= ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) || (((/* implicit */_Bool) 25ULL))))), (arr_10 [i_4] [i_0])));
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_4 [i_1])), (arr_1 [i_0])))) ? (((/* implicit */long long int) max((((/* implicit */int) (signed char)108)), ((-2147483647 - 1))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (-1386343478593310022LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_7);
}
