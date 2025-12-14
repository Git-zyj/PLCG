/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54381
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)62196))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))) ? (min((((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_14)))), (((((/* implicit */_Bool) (short)3861)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)90))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2876665825U)) ? (((/* implicit */unsigned int) ((int) 9223372036854775792LL))) : (1418301471U))))));
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_1))) == (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_15)))))))) : ((+(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 4170526294U)) || (((/* implicit */_Bool) arr_0 [i_1] [(_Bool)1]))))) - (((/* implicit */int) var_13))));
        var_17 = ((/* implicit */int) arr_0 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_9 [i_2] [i_2 - 1])))) * (((((/* implicit */int) var_7)) * (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) min((((unsigned short) max((var_11), (arr_0 [i_2] [i_2])))), (((/* implicit */unsigned short) ((signed char) 6754249760953501675ULL)))));
        var_18 = ((/* implicit */int) 971095802U);
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_1 [i_2 + 2]))) : (((/* implicit */int) (((-(((/* implicit */int) var_10)))) <= ((-(((/* implicit */int) arr_1 [i_2 + 2])))))))));
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6524))) : ((~((+(var_1)))))));
    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)87)))))));
}
