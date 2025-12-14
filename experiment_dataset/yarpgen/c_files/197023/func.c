/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197023
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_4))))))) : (max((((((/* implicit */_Bool) 581636077U)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))))));
                arr_6 [i_0] [10ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) > (1567869809U)))) >> (((((((/* implicit */int) var_17)) | (((/* implicit */int) (short)-19948)))) + (16689)))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)179), ((unsigned char)177)))) ? (((((/* implicit */_Bool) var_9)) ? (min((674432127), (((/* implicit */int) (signed char)28)))) : (((int) var_2)))) : (((((/* implicit */int) ((((/* implicit */int) (signed char)17)) > (((/* implicit */int) (unsigned short)43118))))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_8))))))));
    var_21 = ((/* implicit */unsigned short) 9222809086901354496ULL);
}
