/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246379
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
    var_14 = ((/* implicit */signed char) ((unsigned char) ((((288230376143323136LL) % (((/* implicit */long long int) ((/* implicit */int) var_3))))) < (var_4))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_5 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_0])))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)221)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(short)7])) || (((/* implicit */_Bool) max((arr_0 [i_2]), (arr_7 [i_2] [i_1])))))))) : (1ULL)));
                    arr_8 [(unsigned char)2] [(signed char)14] [i_2] [(unsigned char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned char)74))))), (min((var_4), (((/* implicit */long long int) (unsigned char)127))))))) ? (max((arr_5 [i_0 + 1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) max((min((var_2), (3335491883792027140LL))), (((long long int) var_9)))))));
                }
            } 
        } 
    } 
}
