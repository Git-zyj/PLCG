/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48206
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
    var_16 ^= ((/* implicit */int) 18ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_1 [i_0 + 3])) : (var_0)));
        var_19 = ((/* implicit */short) ((unsigned long long int) ((short) arr_0 [i_0] [i_0])));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])), (min(((~(18446744073709551608ULL))), (((((/* implicit */_Bool) var_4)) ? (18ULL) : (((/* implicit */unsigned long long int) 2065102988))))))));
        var_21 = ((/* implicit */int) min((var_21), (((((/* implicit */_Bool) min((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_0 [i_1] [i_1]))))), (var_9)))) ? (((((/* implicit */_Bool) var_11)) ? (0) : (((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 1])))) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_5);
        var_22 = ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_23 += ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_7 [i_2])))));
        arr_9 [i_2] = ((/* implicit */_Bool) arr_1 [i_2]);
        arr_10 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) 1048575)) : (((10ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))));
    }
}
