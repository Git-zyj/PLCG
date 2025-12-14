/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191109
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
    var_12 = ((/* implicit */unsigned long long int) (short)3072);
    var_13 |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_11)) != ((~(min((((/* implicit */unsigned long long int) var_11)), (var_1)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) max(((~(max((((/* implicit */unsigned long long int) (short)3072)), (arr_1 [i_0] [9ULL]))))), (((/* implicit */unsigned long long int) 1915790527))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 2; i_3 < 6; i_3 += 2) 
                    {
                        {
                            var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_0 - 1]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)3072)) : (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 13773015539144998673ULL)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_8))))) : (min((var_9), (((/* implicit */long long int) (unsigned char)18))))))));
                            var_16 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_2] [i_1 + 2] [i_1])) ? (((unsigned long long int) (unsigned short)46145)) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_1 + 2])), (-75056925615958229LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */int) (short)-3066)) + (2147483647))) << (((((/* implicit */int) (short)3066)) - (3066)))))), (0U)));
}
