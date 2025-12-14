/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195316
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
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) (short)21653))));
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) < (((unsigned long long int) var_6))))), (var_8)));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) & (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (short)-21653)) ? (((/* implicit */int) (unsigned short)14333)) : (((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_12)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [5ULL] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_1 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) (unsigned char)158)), (12733115572254088762ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
        var_17 = ((/* implicit */unsigned short) min((((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_0))))))), (min((3163270661203164190ULL), (15283473412506387425ULL)))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 |= ((arr_1 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (unsigned short)32226)) : (((/* implicit */int) arr_4 [i_1]))))) : (arr_0 [i_1]));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_4 [i_1]))) ? (((/* implicit */int) max((((/* implicit */short) min((arr_4 [i_1]), (var_9)))), (max((((/* implicit */short) arr_4 [20ULL])), ((short)21653)))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [(_Bool)1]))))), (arr_4 [i_1]))))));
        arr_5 [(short)20] [i_1] &= ((/* implicit */unsigned char) (short)12260);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_3 [i_1]))));
    }
}
