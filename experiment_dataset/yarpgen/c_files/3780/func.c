/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3780
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (((1001601814287227660ULL) << (((/* implicit */int) arr_0 [i_0])))))) * (((/* implicit */unsigned long long int) arr_3 [i_1]))));
                var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_13) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-7199)))) : (arr_1 [i_0]))) ^ (((/* implicit */unsigned long long int) ((arr_4 [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0])))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_1]) <= (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) ^ (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_0])))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_20 = (signed char)-127;
        var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_2])) ? (15651862011426268739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_3])) && (((((/* implicit */int) var_7)) < (((/* implicit */int) var_0))))))), ((+(((/* implicit */int) var_12))))));
        var_23 = ((/* implicit */unsigned int) (((+(arr_3 [i_3 + 1]))) >> (((arr_3 [i_3 + 1]) - (3775558202085728667LL)))));
    }
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (((((-(((/* implicit */int) arr_12 [i_4])))) + (2147483647))) << (((784664145U) - (784664145U)))))) ? (((/* implicit */int) arr_4 [i_4] [i_4])) : (((((/* implicit */int) min(((signed char)13), (((/* implicit */signed char) arr_4 [i_4] [i_4]))))) ^ (((/* implicit */int) arr_12 [i_4]))))));
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((/* implicit */long long int) (short)0)), (8342649719659358581LL))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_18)), ((short)-5608))))) : (((((/* implicit */_Bool) var_5)) ? (arr_3 [i_4]) : (arr_9 [i_4] [i_4]))))) : (((/* implicit */long long int) 3774160446U))));
        var_27 = ((/* implicit */unsigned short) arr_0 [i_4]);
    }
}
