/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195877
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_2 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)5])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))) : (var_8)))));
                var_11 = arr_4 [i_1];
                var_12 = ((/* implicit */int) 9223372036854775807LL);
            }
        } 
    } 
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (489127246) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) -489127246)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (short)-27958))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-27973))) & (2981968446412403042LL)))) ? ((~(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -489127246)))))) : ((~(((unsigned int) var_7))))));
    var_14 = ((/* implicit */unsigned char) (+((+(var_9)))));
}
