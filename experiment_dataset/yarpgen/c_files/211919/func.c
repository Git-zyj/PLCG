/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211919
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), ((-(var_4)))))), (((((/* implicit */unsigned long long int) ((int) (signed char)-109))) | (((18446744073709551595ULL) - (((/* implicit */unsigned long long int) var_4))))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((unsigned int) var_9)) - (1656375845U)))))) & (((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_5))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (21ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)254)))))))))))));
                arr_7 [i_0] = ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 + 1]), (arr_5 [i_0] [i_1 - 1])))) ? (((/* implicit */int) min((var_1), (arr_5 [i_0] [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 + 2]))) != (2419655175U)))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((+(arr_1 [i_0] [11U]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_0 [i_1 + 2])))))))) ? (((/* implicit */int) (signed char)38)) : ((-((-(((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) min(((unsigned char)6), (((/* implicit */unsigned char) (_Bool)1)))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned char) var_1)))));
}
