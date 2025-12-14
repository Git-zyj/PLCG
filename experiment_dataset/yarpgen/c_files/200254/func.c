/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200254
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
    for (int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned int) var_1);
                var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) 5882159154767509006ULL)));
            }
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((max((arr_7 [i_0 - 1] [i_0] [i_1 - 2] [i_0]), (arr_7 [i_0 + 1] [i_0] [i_1 - 2] [i_0]))) - (((/* implicit */int) arr_6 [i_0]))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned int) (((!(((8722965885890595351LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)74)) == (((((/* implicit */int) arr_6 [i_0])) << (((/* implicit */int) (_Bool)1))))))) : (1939204783)));
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)25930))));
    }
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (var_5)));
}
