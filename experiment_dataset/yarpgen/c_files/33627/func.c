/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33627
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */signed char) (short)-19313);
        arr_3 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((var_15) ? (7503144627585024166ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))) : (((/* implicit */long long int) (+(arr_0 [i_1]))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_18 = min((((((/* implicit */int) var_8)) / ((+(((/* implicit */int) arr_1 [i_1])))))), (min(((~(((/* implicit */int) var_4)))), ((-(((/* implicit */int) (signed char)-40)))))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */long long int) var_14)) | (var_1)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) var_4))))));
                var_20 += ((/* implicit */signed char) min((max((((/* implicit */int) arr_5 [i_1])), (-1785827939))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5))))));
            }
            arr_10 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) (signed char)-46);
            arr_11 [(short)0] [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)154)) ? (3902979958940105164ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24808)))));
            arr_12 [i_1] [i_1] = ((((/* implicit */_Bool) min((max((130048U), (130048U))), (((/* implicit */unsigned int) arr_0 [i_1]))))) ? (((var_12) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) (short)-24803)))) : (((/* implicit */int) ((3106007242435074900ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24801)) | (arr_0 [i_1]))))))));
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (var_0)))), (((((/* implicit */_Bool) (unsigned char)208)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92)))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_10))))) : ((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))))));
        }
        var_21 = ((/* implicit */short) ((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_4 [i_1])))) >= (((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) var_13))))));
    }
    var_22 = ((/* implicit */unsigned int) var_9);
    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */short) var_2)), (min(((short)-24803), ((short)-24816))))))));
}
