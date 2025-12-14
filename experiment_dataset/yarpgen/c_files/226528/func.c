/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226528
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (max((min((((/* implicit */long long int) arr_2 [i_0] [1LL])), (arr_1 [i_1]))), (((((/* implicit */_Bool) var_6)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)87))))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : ((-(((/* implicit */int) arr_0 [i_1])))))))));
            arr_4 [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_1]))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_11 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192))) : (((3747463743U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
            arr_9 [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (var_9)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0] [i_2]))))) * ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_7)))))));
        }
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [(signed char)9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
    var_13 = ((/* implicit */long long int) (~((+(var_9)))));
}
