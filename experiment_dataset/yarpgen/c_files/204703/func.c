/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204703
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) var_9)) > (((/* implicit */int) var_2)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) <= (var_11)))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) 18446744073709551615ULL)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned int) ((var_6) << (((((/* implicit */int) arr_1 [i_0])) + (89))))));
                    var_16 = ((unsigned int) (~(((/* implicit */int) (signed char)7))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((((/* implicit */_Bool) 827180439330102147ULL)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)5))) > (var_11))))) : (min((1ULL), (arr_3 [i_0] [11U] [11U])))))));
                    arr_9 [4U] [4U] [i_2] [7ULL] = arr_1 [i_0];
                }
            } 
        } 
        arr_10 [i_0] &= ((signed char) arr_1 [i_0]);
        arr_11 [i_0] [i_0] = ((unsigned int) ((arr_3 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19)))));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_6 [i_0])))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((signed char) (~(0U))));
        arr_15 [0ULL] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_3 + 1])) << (((((/* implicit */int) arr_14 [i_3 + 1])) - (87)))));
    }
    for (signed char i_4 = 2; i_4 < 20; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) var_9);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_4 + 3])))))));
    }
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
}
