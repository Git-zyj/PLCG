/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203087
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
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0 - 2]))) & (var_3))) + (((/* implicit */long long int) max((var_4), (arr_0 [i_0] [i_0]))))))) ? (max((min((arr_0 [i_0 - 1] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0 - 2] [i_0])))), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))))))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((var_6) ? ((~(arr_0 [6U] [(unsigned short)0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)78))))), (((/* implicit */unsigned int) (signed char)95)))))));
        arr_4 [i_0] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_5)), (var_0)))) ^ (((/* implicit */int) var_7))))) ? ((-((+(((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((signed char)95), ((signed char)-96)))) : ((-(((/* implicit */int) (unsigned short)28245))))))));
        var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (arr_0 [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_1])) - (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_5))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) arr_1 [i_1] [i_1]);
    }
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) var_6)))))) : (max((var_1), (((/* implicit */unsigned long long int) max((1252536680), (((/* implicit */int) var_7)))))))));
}
