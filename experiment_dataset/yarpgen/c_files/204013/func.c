/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204013
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((int) var_2));
        var_18 *= (+((~((~(arr_1 [i_0] [i_0]))))));
        var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 1073741823U)) : (((5992540711336063932LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-35)))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) 1198204441U)) & (((((/* implicit */long long int) arr_0 [i_1])) / (5992540711336063921LL)))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                arr_12 [i_3] [i_3] [i_3] = ((/* implicit */int) ((unsigned int) var_12));
                arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-33))));
                var_20 -= ((/* implicit */unsigned int) (+(var_8)));
                arr_14 [i_3] [i_2] [i_1] |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((unsigned int) arr_1 [i_1] [i_2])))));
            }
            arr_15 [i_1] |= 3096762855U;
        }
    }
    var_21 = var_5;
    var_22 = ((/* implicit */signed char) min((var_22), (var_14)));
}
