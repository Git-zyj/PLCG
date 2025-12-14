/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5366
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
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_13 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
                        arr_10 [i_3] [i_2] = ((/* implicit */unsigned int) ((arr_9 [i_1 + 1] [i_1]) && (((/* implicit */_Bool) arr_3 [i_1]))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) 1962724993U)) : (9409043761826440485ULL)));
                    }
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((arr_4 [i_0 - 2] [i_1 + 1] [i_1 + 1]) - (((/* implicit */int) arr_6 [i_0 - 1] [i_1 + 1] [i_0 - 3]))));
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [4U] [i_1 + 1])))))));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 2] [(unsigned char)15])) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_6);
        arr_16 [i_4] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 8ULL)) || (((/* implicit */_Bool) (unsigned char)211)))) ? (min((((/* implicit */unsigned long long int) 1962724998U)), (2ULL))) : (((unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_14 [i_4]))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_3) - (((/* implicit */int) var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13522395515528757683ULL))));
        arr_19 [i_5] = ((/* implicit */unsigned int) arr_2 [i_5] [i_5]);
        var_20 ^= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_13 [i_5])))));
        var_21 = ((/* implicit */unsigned long long int) (unsigned char)143);
    }
    var_22 = (!(((/* implicit */_Bool) var_12)));
}
