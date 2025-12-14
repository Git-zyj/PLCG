/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208959
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)0), ((unsigned char)38))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))) <= (10102009064076071354ULL))))))) : (var_13)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1605159098U)) / (10102009064076071354ULL)));
        var_20 = ((/* implicit */unsigned char) (!(arr_1 [i_0] [i_0])));
        var_21 = 3U;
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)32)), ((unsigned char)21)))) ? (((/* implicit */int) (unsigned char)218)) : (((((/* implicit */int) var_14)) & (((/* implicit */int) (unsigned char)234))))))));
        var_23 ^= ((/* implicit */unsigned short) var_5);
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-26)) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))) < (165057459U))) ? (max((arr_2 [i_1] [i_1]), (arr_6 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)72)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)255)) : (arr_3 [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_5 [i_2]))))))))));
        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = arr_6 [i_3];
        var_28 = ((/* implicit */unsigned char) ((arr_9 [i_3] [i_3]) ? (arr_10 [i_3]) : (var_1)));
    }
    var_29 = ((/* implicit */int) (signed char)-102);
    var_30 = ((/* implicit */unsigned int) ((((int) ((((/* implicit */_Bool) (unsigned char)217)) ? (165057491U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41)))))) != (((/* implicit */int) (signed char)95))));
}
