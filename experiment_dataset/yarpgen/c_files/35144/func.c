/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35144
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
    var_17 = ((/* implicit */int) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) & (15728640)));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned char) max((((/* implicit */unsigned long long int) (short)-18956)), (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : (var_15)))) - (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (-(var_0))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */short) (-(arr_6 [i_1])));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (16051635909801466751ULL)));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (((((/* implicit */_Bool) 12432564920723609639ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18890))) : (arr_6 [i_1]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)254)))))) ^ (arr_8 [i_2])))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) ((var_16) <= (-14LL)))), (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_2]))) : (var_10))))) != (((((/* implicit */_Bool) arr_8 [i_2])) ? (min((((/* implicit */unsigned long long int) var_8)), (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [10LL]))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) var_13)))))));
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_3] [i_3])) : (arr_5 [i_3])));
    }
}
