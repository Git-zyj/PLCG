/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218446
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_13 = (_Bool)0;
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3354857459U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))) : (((/* implicit */int) (_Bool)1)))) + (min((((((/* implicit */_Bool) (unsigned short)26831)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) arr_2 [10ULL] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 3) 
        {
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) ((signed char) var_2));
                        var_16 = ((((/* implicit */_Bool) arr_14 [i_4] [i_1] [i_2 - 3] [i_1] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1]))) : (4294967284U));
                        var_17 -= ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_1] [i_1])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3] [i_3] [i_4])))))));
                        var_18 = ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) 3913524842U)));
                        arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((var_7) << (((((/* implicit */int) arr_4 [i_1])) - (59582))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_2 + 2])))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 285883406039008403ULL)) ? (((((/* implicit */unsigned long long int) -417118340)) | (4243839268867988738ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
        arr_16 [i_1] = ((/* implicit */unsigned short) ((13030777815490606336ULL) < (((/* implicit */unsigned long long int) 1997221254U))));
    }
    var_20 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((min((var_5), (((/* implicit */unsigned long long int) var_2)))) <= (var_5)))), (var_0)));
}
