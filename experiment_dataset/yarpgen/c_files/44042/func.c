/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44042
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)11899)))), ((+(((/* implicit */int) (unsigned short)13783))))))) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11923))) - (var_9))) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13777)))));
    var_15 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_0))))))), ((+(((/* implicit */int) min((var_6), (var_5))))))));
    var_16 &= ((/* implicit */int) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_4) << (((((/* implicit */int) var_13)) - (20)))))))) : (((((/* implicit */_Bool) var_12)) ? ((-(var_3))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [0]))));
                    arr_6 [i_0] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (((((/* implicit */_Bool) 2017687046002169051LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2]))) : (arr_0 [i_0]))) : (max((((/* implicit */unsigned int) (signed char)-87)), (var_8)))))));
                    arr_7 [i_0 - 2] [i_1] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_1 - 2] [0LL])) : (var_8)))) ? (((/* implicit */unsigned long long int) (~(arr_0 [i_2])))) : (max((((/* implicit */unsigned long long int) var_11)), (var_0))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [7]))) % (arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
}
