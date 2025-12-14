/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195893
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
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) 11076904614913005756ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_1 [i_0]) && (arr_1 [(_Bool)1])))), (arr_2 [i_0 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_14 = ((/* implicit */_Bool) (+(3200425957383338250ULL)));
            var_15 = ((/* implicit */_Bool) ((((arr_2 [i_0]) << (((((/* implicit */int) var_4)) + (17941))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1] [i_0] [i_0]))))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) ((int) ((((((/* implicit */_Bool) 10010052941754416219ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8363))) : (arr_0 [i_0]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2] [i_0]))))));
    }
    for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        arr_12 [2LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_2 [i_2 + 2])))) > (arr_2 [i_2])));
        arr_13 [i_2] = ((/* implicit */short) ((-169516441) & (((/* implicit */int) ((unsigned char) (signed char)86)))));
        arr_14 [i_2] = ((/* implicit */signed char) ((int) ((unsigned char) ((1529807609U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17)))))));
    }
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) != (var_7)))) ^ (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_4))));
}
