/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45255
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
    var_17 = ((/* implicit */short) min((var_1), (min((((/* implicit */unsigned char) var_16)), ((unsigned char)255)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)26))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned char)255)))))))) ? (min((((/* implicit */unsigned long long int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]))))), (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                arr_7 [8U] [8U] [i_1] = max(((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))), (((/* implicit */unsigned long long int) min((((unsigned int) arr_2 [i_0])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
            }
        } 
    } 
}
