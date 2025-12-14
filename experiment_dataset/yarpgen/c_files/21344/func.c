/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21344
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
    var_18 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (2414631182681436935LL)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) -6776421714597110318LL)) >= (16095152539767102557ULL)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_1 - 1] [i_1 - 1] [i_2]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_8)) / (((/* implicit */int) arr_3 [17U] [i_1 - 1] [i_1]))))))));
                    var_20 ^= ((/* implicit */unsigned int) max((max((max((16873687508583094022ULL), (16095152539767102545ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) arr_0 [i_2]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (16095152539767102522ULL)))) ? (((/* implicit */int) ((unsigned char) var_17))) : (((/* implicit */int) arr_1 [i_0 + 3])))))));
                    var_21 = ((/* implicit */unsigned int) ((max((((16873687508583094012ULL) / (17503049595979513579ULL))), (((/* implicit */unsigned long long int) min(((signed char)108), (arr_3 [(signed char)13] [(unsigned short)8] [i_1])))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_1])), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (((arr_2 [i_2] [i_1]) / (((/* implicit */unsigned int) var_6)))))))));
                }
            } 
        } 
    } 
}
