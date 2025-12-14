/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199593
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((12816058315996765217ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */int) ((max((((/* implicit */long long int) (unsigned short)25986)), (-1243446587987441267LL))) > (((long long int) var_2))))), ((-(((/* implicit */int) ((_Bool) var_8)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_7 [(signed char)10] = ((/* implicit */signed char) ((unsigned char) (~(arr_5 [i_1]))));
        arr_8 [i_1] = -1243446587987441262LL;
    }
    for (short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_13 [i_2] [i_3] = arr_5 [i_2];
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_3)))))))));
        }
        arr_15 [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) (short)12))))) : ((~(((unsigned long long int) var_12))))));
        arr_16 [i_2] [0LL] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)14)))))) % (((((/* implicit */_Bool) (signed char)96)) ? (768607089567618521LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_2])))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) (short)512)))) : (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (var_9)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (-5222621831734250605LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? ((~(((((/* implicit */int) var_10)) | (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_0))));
}
