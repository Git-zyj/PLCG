/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30656
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
    var_12 &= ((/* implicit */int) var_2);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_3))))) | (max((((/* implicit */unsigned int) (short)32767)), (4294967295U))))), (((/* implicit */unsigned int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (198394545U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((573854472U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))))))))))));
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) >> (((arr_2 [i_0] [i_0]) - (12531713828897474286ULL)))))) : (((/* implicit */unsigned int) ((arr_2 [i_0] [i_0]) >> (((((arr_2 [i_0] [i_0]) - (12531713828897474286ULL))) - (16406290066483888795ULL))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 573854472U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) + (2047U)));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) <= (((((/* implicit */_Bool) 3721112823U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29417)))))));
    }
}
