/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214867
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
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 2691272197U)) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (2691272197U))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) (signed char)-65))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [21LL] = (i_0 % 2 == zero) ? (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((1603695107U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2] [i_0])))))), (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [9U]))) / ((+(arr_2 [i_0])))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((1603695107U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2] [i_0])))))), (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_2 [9U]))) / ((+(arr_2 [i_0]))))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_0 [i_1 - 1] [i_0]))))), ((~(((((/* implicit */_Bool) (short)-7373)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_2 [i_1])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) 1603695103U);
    var_24 = ((/* implicit */signed char) var_1);
}
