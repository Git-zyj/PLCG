/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41069
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-42))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)-32762))) ^ (var_7))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (short)32756)), (135305106U)))))), (((unsigned long long int) ((((/* implicit */int) (short)-32762)) >= (((/* implicit */int) var_9)))))));
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-32007)) < (((/* implicit */int) (short)-32762)))) && (((/* implicit */_Bool) ((unsigned char) ((6789382957814512794ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) < (arr_2 [i_1 - 1] [i_1 - 1])))) << (((arr_2 [i_1 + 2] [i_1 + 2]) - (arr_2 [i_1 + 1] [i_1 + 1])))));
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)38745)) >> (((((/* implicit */int) (short)32756)) - (32739)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_5);
}
