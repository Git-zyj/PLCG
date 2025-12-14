/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207391
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
    var_19 -= ((/* implicit */unsigned short) var_16);
    var_20 -= ((/* implicit */unsigned int) (signed char)-27);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) var_9);
        var_21 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-65)) && (((/* implicit */_Bool) (signed char)20))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((arr_0 [i_0]) / (((((/* implicit */long long int) ((/* implicit */int) var_0))) * (arr_0 [i_0])))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 4]))))))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)101)) || (((((var_11) || (((/* implicit */_Bool) arr_5 [8U])))) || (((/* implicit */_Bool) arr_5 [i_1 - 2]))))));
    }
}
