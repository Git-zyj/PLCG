/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230908
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
    var_17 = ((unsigned int) ((unsigned long long int) var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) ((arr_4 [i_2 - 1] [i_0 + 1]) ? (max((((/* implicit */int) arr_2 [i_1])), (arr_3 [11] [i_1] [i_0 + 1]))) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 + 1] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_12)))) ? (arr_6 [i_0] [(signed char)9] [i_2 - 1]) : (((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) <= (0LL))))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) -9223372036854775796LL))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((arr_4 [i_1] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [7U] [i_1] [(short)7])))) > (arr_6 [i_2 - 1] [(unsigned short)1] [(unsigned short)1])))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) min(((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) var_10)))), (((int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
}
