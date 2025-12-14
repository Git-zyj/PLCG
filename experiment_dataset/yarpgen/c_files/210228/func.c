/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210228
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) 5ULL);
        var_11 += ((/* implicit */short) ((_Bool) ((arr_2 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))));
        arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) arr_0 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) var_2)))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) max((var_4), (((/* implicit */short) var_5))))) ? (((int) (signed char)-19)) : (((/* implicit */int) arr_0 [i_1])))));
            var_14 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            arr_16 [i_1] [i_3] [i_1] = ((/* implicit */int) (~(((long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
            var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1]))))) && (((/* implicit */_Bool) arr_0 [(_Bool)1])))))) == (((unsigned int) arr_4 [i_1] [i_1]))))));
        }
        for (signed char i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            arr_19 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_4 - 1])) ? (((((/* implicit */int) ((unsigned short) arr_15 [i_1]))) >> (((/* implicit */int) arr_14 [i_4 + 1] [i_1] [i_1])))) : (((((/* implicit */_Bool) ((5ULL) << (((/* implicit */int) arr_10 [6U]))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) arr_10 [i_1]))))));
            arr_20 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned char) 18446744073709551599ULL))), (arr_9 [i_4])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 464685291U)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) arr_1 [i_4 + 1])) + (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_0 [i_1]))))) : (((((-1525652837629668769LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)244)) - (244)))))));
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))) / (((3830282004U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [(short)0])) >> (((((18446744073709551599ULL) >> (((18446744073709551599ULL) - (18446744073709551549ULL))))) - (16364ULL))))))));
        }
        var_18 = ((/* implicit */signed char) arr_9 [5]);
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3830282005U)) ? (((/* implicit */unsigned int) max((min((1632228752), (((/* implicit */int) arr_1 [(short)7])))), ((-(((/* implicit */int) (_Bool)1))))))) : (((unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)61)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))) ? (((3830282005U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47043))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))) && (((/* implicit */_Bool) (-(((((/* implicit */int) var_7)) / (1811618169))))))));
}
