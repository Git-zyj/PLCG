/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191030
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) (short)-32759)) : (((/* implicit */int) var_5)))))))) : (max((var_2), (((/* implicit */unsigned long long int) var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) ^ (var_15))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) arr_6 [i_2] [i_2] [i_0] [i_0])))))))) ? (max((((/* implicit */unsigned long long int) max((arr_7 [i_0] [i_1] [i_0] [(signed char)7]), (arr_7 [i_0] [(unsigned char)4] [i_0] [i_0])))), (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_1] [i_2])), (var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_1])) != (((/* implicit */int) var_10)))))))))));
                    arr_8 [i_0] [4] [10LL] [12] &= arr_3 [(unsigned char)12];
                    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_3 [i_1])), (max((((/* implicit */unsigned int) (unsigned short)47047)), (2047U)))));
                }
            } 
        } 
    } 
}
