/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244841
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
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (unsigned char)66))));
    var_17 = ((/* implicit */unsigned short) var_7);
    var_18 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(arr_5 [i_0] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) min((arr_3 [21ULL] [15] [i_0]), (((/* implicit */long long int) (short)-13666))))) ? (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) (~(arr_4 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_2 [15LL] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) min(((signed char)-40), ((signed char)60)))))))));
                    arr_7 [i_1] [(short)3] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_1] [11] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_6 [i_1] [i_1]))))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46467))) >= (arr_3 [i_0] [i_1] [i_2])))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [19U] [i_1])) || (((/* implicit */_Bool) var_7))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)42)))))));
                }
                arr_8 [i_1] = ((/* implicit */unsigned short) var_6);
            }
        } 
    } 
}
