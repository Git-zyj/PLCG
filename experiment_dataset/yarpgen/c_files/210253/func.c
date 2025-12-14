/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210253
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) ((min((var_9), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)60)) + (((/* implicit */int) (signed char)-60))))))) <= (((/* implicit */unsigned int) ((((/* implicit */int) (short)3072)) & (((/* implicit */int) (unsigned char)255)))))));
                    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) var_12))));
                    arr_11 [i_0] [3U] [i_2] = ((/* implicit */short) ((((/* implicit */int) (signed char)-61)) - (((/* implicit */int) ((((/* implicit */int) (short)-3081)) == (1993646751))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 11; i_5 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)111))));
                    var_17 = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3])))))), (((((/* implicit */unsigned long long int) 3219422257U)) & (var_14))))), (((/* implicit */unsigned long long int) ((arr_15 [i_5] [i_5 + 1] [i_5 - 1]) >> (((var_0) + (1453475415))))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)48)))))))) - (min((((((/* implicit */_Bool) arr_8 [i_3] [i_4] [i_5] [i_3])) ? (((/* implicit */unsigned long long int) var_8)) : (var_14))), (arr_7 [i_4] [i_5 + 1] [i_5]))))))));
                    var_19 = ((((/* implicit */_Bool) min((-1923865626), (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) arr_8 [i_5 - 1] [i_5 - 1] [6U] [i_5])) >= (var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66))))) && (((/* implicit */_Bool) (+(var_3))))))));
                }
            } 
        } 
    } 
}
