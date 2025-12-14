/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224323
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
    var_18 = ((/* implicit */signed char) (+((((+(((/* implicit */int) var_7)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))))));
    var_19 = ((/* implicit */signed char) ((((unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))) & (((/* implicit */unsigned long long int) -13))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 = (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 3]))) : (var_5))) < (((/* implicit */unsigned long long int) ((var_6) - (((/* implicit */int) arr_3 [i_0] [i_1 - 1]))))));
                var_21 = max((min((max((-331852571042462709LL), (((/* implicit */long long int) (short)17869)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_3 [i_1] [i_0]))))))), (((/* implicit */long long int) (_Bool)0)));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned char)133)) - (118))))) : (max((((var_0) ^ (arr_6 [i_1 + 2] [i_0]))), (((/* implicit */int) arr_5 [(_Bool)1]))))));
                arr_8 [17LL] [i_1] = ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (short)26201))), (((((/* implicit */int) (_Bool)1)) ^ (var_6)))))) ? ((-(8339178029602362763LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_9)) == (((unsigned int) 18446744073709551615ULL)))))));
                var_22 += ((/* implicit */unsigned short) ((unsigned long long int) arr_2 [i_1 - 1] [i_0]));
            }
        } 
    } 
}
