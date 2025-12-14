/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227937
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_0))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_13);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41518))))) != (max(((-(((/* implicit */int) arr_3 [i_1] [i_2])))), (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (short)-32764))))))));
            arr_9 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [i_1] [i_2]) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_5 [i_2])) : ((-(((/* implicit */int) (unsigned char)234))))))) ? (((/* implicit */int) arr_7 [14] [14] [14])) : (((((/* implicit */_Bool) 17808213437333169997ULL)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))))));
        }
        arr_10 [(_Bool)1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned short) (-(((/* implicit */int) (short)19488))))));
        var_16 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15522)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)50011))))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned char)122)))) : (((/* implicit */int) (signed char)63)))) + (((/* implicit */int) (signed char)-35))));
    }
    var_17 *= ((/* implicit */unsigned int) ((short) var_2));
    var_18 = ((/* implicit */short) max((((/* implicit */int) var_10)), (min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-121))))), (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))))));
}
