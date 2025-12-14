/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2872
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
    var_17 = ((/* implicit */unsigned int) ((short) var_6));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 1294704857U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) (signed char)42))))) : (arr_1 [i_0])));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            var_18 = ((max((arr_0 [i_1 + 1]), (arr_0 [i_1 + 2]))) % (arr_0 [i_1 - 1]));
            var_19 ^= ((/* implicit */unsigned int) ((int) 3000262438U));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 1294704878U)) ? (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_1 - 1])) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) (short)16383)))));
            arr_6 [i_1] [i_1 + 1] = ((/* implicit */unsigned short) (-(arr_1 [i_0])));
        }
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((short) 4294967280U))) : (((/* implicit */int) arr_5 [i_0 - 1] [2U] [i_0 - 3]))))) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (unsigned short)30871)) | (arr_0 [i_0 - 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_6) : (arr_0 [i_0 - 1]))))))))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((min(((-(((/* implicit */int) arr_8 [(signed char)12])))), (((/* implicit */int) arr_7 [i_2 + 2])))) & (min((((((/* implicit */_Bool) (short)18876)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)16384)))), ((+(((/* implicit */int) arr_7 [i_2])))))))))));
        arr_9 [i_2] [(unsigned char)12] = ((/* implicit */short) ((((/* implicit */_Bool) 17811582420397455739ULL)) ? (6340474153959218888LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2]))))) : (1294704857U))))));
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_8 [i_2 - 1])))) >> (((((((/* implicit */_Bool) 18446744073709551604ULL)) ? (3000262428U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63008))))) - (3000262400U))))))));
        arr_10 [i_2 + 3] [i_2 + 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)38533))));
    }
    var_25 -= ((/* implicit */unsigned int) (~(((5171839030840671971ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49498)))))));
}
