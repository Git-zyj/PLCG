/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3969
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
    var_15 = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */int) var_11))));
    var_16 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), ((unsigned char)246)))) || (var_11)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */int) var_11)) != (((min((arr_0 [i_0]), (((/* implicit */int) (unsigned short)48879)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [13ULL])))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 9; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */int) var_12)), (arr_0 [(_Bool)1]))) - (((/* implicit */int) var_9))))) ? (max((((/* implicit */unsigned int) arr_2 [i_1 + 1])), (arr_5 [i_1 + 1] [i_1 - 3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_1 - 2])))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)-15097), (((/* implicit */short) (_Bool)0)))))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_6);
        arr_10 [i_1] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) -1900999068))))))) >> ((((~(((/* implicit */int) var_10)))) + (147)))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) /* same iter space */
    {
        var_17 = (-9223372036854775807LL - 1LL);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_2 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [7ULL])) ? (arr_0 [2]) : (((/* implicit */int) var_0))))) : (var_5)));
    }
    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
    {
        arr_15 [i_3] [i_3] = ((/* implicit */int) (~((+(((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3 + 1]))) : (arr_6 [i_3])))))));
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_11 [3] [3])))))) || ((!(((/* implicit */_Bool) (unsigned short)41189))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_12 [i_3]))));
        var_21 = ((/* implicit */long long int) 15608240753407992493ULL);
    }
}
