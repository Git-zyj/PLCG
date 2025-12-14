/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239254
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
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_19 ^= ((/* implicit */short) 2988129826677246468LL);
        var_20 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) min(((signed char)46), (((/* implicit */signed char) (_Bool)1))))) ? (var_7) : (arr_0 [i_0 - 3])))));
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_4 [i_1] |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) (unsigned char)68))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (707872645U) : (((/* implicit */unsigned int) 2147483635))))) : ((((_Bool)1) ? (-3318366811074761908LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))));
        arr_5 [22U] = ((/* implicit */int) ((arr_2 [i_1] [(unsigned char)9]) ? (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_1] [i_1])) | (((/* implicit */int) arr_3 [i_1]))))), (((((/* implicit */_Bool) 2140154834927253642LL)) ? (1638795940U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1)))))))));
        var_21 -= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26633)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)182)))) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_15)))))));
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (signed char)60))));
        arr_8 [1U] [i_2] |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_7 [i_2]))))));
        var_23 = ((/* implicit */_Bool) -2147483635);
    }
    var_24 = ((/* implicit */signed char) (-2147483647 - 1));
}
