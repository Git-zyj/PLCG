/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46326
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
    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (_Bool)1))))) * (((/* implicit */int) (unsigned char)98)))) : ((-(((((/* implicit */int) var_5)) + (((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(3622514006U)))) ? ((((!(((/* implicit */_Bool) arr_1 [i_0 - 2])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)124))))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) ^ ((-(arr_0 [i_0 + 2] [i_0 + 2])))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((var_4) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)229)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (2835853240U))) : ((-(arr_0 [10U] [i_0]))))))))));
        var_22 = ((/* implicit */unsigned char) ((((939524096U) >> (((1102558010044183756LL) - (1102558010044183735LL))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_0 [i_0] [i_0])))) ? (((((/* implicit */int) var_15)) | (((/* implicit */int) var_12)))) : (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 - 2])) + (30))))))))));
    }
    for (short i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1])) < (((/* implicit */int) arr_3 [i_1 + 2] [i_1])))))) / (((((/* implicit */_Bool) (unsigned short)16422)) ? (((/* implicit */unsigned int) 8191)) : (4187748948U))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)69))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)193))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (-9223372036854775795LL))) == (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)93))))))))));
        arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_1 + 2]))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (16383U)))));
    }
}
