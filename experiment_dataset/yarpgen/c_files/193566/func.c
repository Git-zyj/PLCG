/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193566
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) var_12)))));
        var_15 = ((/* implicit */signed char) ((int) 18446744073709551594ULL));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [(short)18]))));
        arr_7 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-19))));
        var_16 = ((/* implicit */signed char) var_9);
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */short) 9223372036854775807LL);
        var_18 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 281594407)) && (((/* implicit */_Bool) 1543248866))))), (((unsigned short) arr_4 [i_2] [i_2]))))), ((~(((/* implicit */int) max((((/* implicit */unsigned short) (short)24576)), (arr_8 [i_2] [i_2]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)107)) && (((/* implicit */_Bool) (signed char)-43)))) ? (((/* implicit */int) ((arr_12 [i_3]) < (((/* implicit */unsigned int) 1543248869))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3]))))))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) (unsigned char)139)) <= (((/* implicit */int) (short)-32362)))))));
        var_21 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */long long int) max((var_13), (((/* implicit */unsigned int) var_0))));
    var_23 = ((/* implicit */unsigned char) ((short) max((((/* implicit */unsigned short) var_8)), (var_14))));
}
