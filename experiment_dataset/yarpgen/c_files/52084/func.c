/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52084
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
    var_11 ^= ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_8)) ? (min((var_4), (((/* implicit */unsigned int) 1938613935)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (6762628444874042930LL)))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((-19LL) + (var_5))) + (((/* implicit */long long int) var_7))))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (0U) : (4294967279U)))), (((unsigned long long int) 2147483647))))));
    var_13 = ((/* implicit */unsigned long long int) min((4294967290U), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-18)), (((unsigned short) var_9)))))));
    var_14 = ((/* implicit */unsigned short) max((var_3), (min((((/* implicit */unsigned long long int) ((long long int) var_6))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_0] [i_2] [i_3] [i_4]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0 - 1])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))) : (max((arr_11 [i_1] [i_3] [(unsigned short)5] [(unsigned short)5] [i_4]), (((/* implicit */unsigned int) (signed char)5)))))), (((/* implicit */unsigned int) var_1))));
                                arr_14 [i_0] [i_1 + 4] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-11));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_2]))))), (min((((/* implicit */unsigned long long int) (unsigned short)11)), (arr_3 [i_0] [i_1 - 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_0] [i_1] [i_0] [i_2])) ? (min((4294967265U), (((/* implicit */unsigned int) -1)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))) : (max((((((/* implicit */_Bool) var_7)) ? (var_3) : (0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [3LL]))) : (var_7))))))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_13 [i_2])))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) (signed char)7))))))) >= (max((((/* implicit */unsigned long long int) ((unsigned int) var_5))), (arr_5 [i_1] [i_1 - 1] [i_1])))));
                    arr_15 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 9892624356629430493ULL)) ? (331996117916700790LL) : (((/* implicit */long long int) 5U)))), ((~(var_5)))));
                }
            } 
        } 
    } 
}
