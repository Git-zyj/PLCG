/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25911
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) (unsigned short)42845))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (arr_5 [i_0] [i_1])))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)21510)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            arr_6 [i_0] = ((/* implicit */unsigned int) arr_2 [i_1]);
        }
    }
    var_16 *= ((/* implicit */_Bool) var_8);
    var_17 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12)))) && ((!(var_10))))) && (((/* implicit */_Bool) (unsigned short)59574))));
    var_18 = ((/* implicit */unsigned short) ((signed char) 6037310645989546212ULL));
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) 0ULL);
        arr_10 [i_2] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_8 [i_2 - 1])) >= (7ULL)));
    }
}
