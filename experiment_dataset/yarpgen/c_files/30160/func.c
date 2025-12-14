/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30160
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */signed char) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >= (arr_1 [i_0])))));
                var_14 = ((/* implicit */unsigned short) arr_0 [1U]);
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) arr_2 [i_0]))))))) ? ((-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_3 [i_0])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [19U] [i_1]))))) ? (((/* implicit */int) arr_4 [i_1] [i_0])) : ((-(((/* implicit */int) arr_2 [i_1]))))))));
                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned short) ((arr_0 [11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                arr_8 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((arr_1 [i_1]) <= (((/* implicit */int) var_7))))) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) + (5943261543438371944LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34893))) : (1346772161071540445LL))) != (((/* implicit */long long int) ((var_12) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))) - (22872))))))));
}
