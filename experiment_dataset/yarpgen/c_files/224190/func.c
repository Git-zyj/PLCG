/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224190
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_0) : (arr_0 [i_0] [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0] [3U])))) ? (max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) var_5))))), (min((var_0), (arr_0 [i_0] [(short)8]))))) : (((/* implicit */unsigned long long int) ((unsigned int) (short)-1752)))));
        arr_3 [i_0] [i_0] = ((unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))), (arr_0 [i_0] [i_0])));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned char) arr_1 [i_1]))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [(short)8])) : (((/* implicit */int) arr_1 [i_1]))))));
        var_16 ^= ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((unsigned short) var_6)))), (max((((((/* implicit */_Bool) arr_1 [i_1])) ? (var_12) : (var_6))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [7])) : (((/* implicit */int) var_14))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_10), (var_10))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_9)) : (arr_0 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) arr_4 [(short)7])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) ((arr_0 [(short)4] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))) : (((((/* implicit */_Bool) ((unsigned char) arr_0 [i_1] [i_1]))) ? (((/* implicit */int) min(((unsigned short)51741), (((/* implicit */unsigned short) arr_1 [i_1]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_1])) : (var_6))))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 3])) ? (((/* implicit */int) arr_6 [i_2] [i_2 - 1])) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) max((((/* implicit */short) arr_9 [i_2 + 1])), (var_14)))) : (((arr_9 [(short)2]) ? (var_6) : (((/* implicit */int) arr_9 [i_2 + 1]))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])), (((var_2) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned int) ((arr_9 [i_2 + 2]) ? (((((/* implicit */_Bool) arr_7 [(short)7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_2 + 2])))) : (((/* implicit */int) ((short) var_13)))))) : (min((((arr_9 [i_2]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) arr_9 [i_2 + 1]))))));
    }
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_11 [i_3] [(short)6]) ? (arr_0 [i_3] [i_3]) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) arr_0 [i_3] [9U])) ? (var_12) : (((/* implicit */int) var_13))))))) ? (((arr_11 [i_3] [i_3]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) arr_9 [i_3]))))) : (((unsigned int) arr_10 [i_3] [(short)5])))) : (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_1 [i_3]), (((/* implicit */short) var_2))))) / (((/* implicit */int) ((arr_11 [i_3] [i_3]) || (((/* implicit */_Bool) var_10))))))))));
        var_21 *= ((/* implicit */short) ((((int) arr_8 [i_3] [i_3])) <= (((/* implicit */int) ((unsigned char) ((short) var_13))))));
    }
    var_22 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20208)) ? (((/* implicit */int) (short)-14597)) : (((/* implicit */int) (short)14597))))) ? (((/* implicit */int) (short)1760)) : (((/* implicit */int) (unsigned char)242)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)8))))));
    var_23 = ((/* implicit */unsigned char) var_5);
    var_24 = ((/* implicit */unsigned short) var_0);
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */int) var_2)))) : (((((var_12) + (2147483647))) >> (((((/* implicit */int) var_3)) - (12771))))))) < (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (var_6)))) || (((((/* implicit */int) var_1)) < (var_9)))))))))));
}
