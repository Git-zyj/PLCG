/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229921
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
    var_20 ^= ((/* implicit */unsigned char) var_12);
    var_21 = ((/* implicit */unsigned char) (-(var_5)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) var_10);
        var_23 = ((/* implicit */long long int) ((unsigned long long int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0 + 2]))));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_24 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_17)) ? (((var_16) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))))) << ((((+(((17592186042368ULL) & (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) - (17592186042368ULL)))));
        arr_5 [i_1 + 1] = ((/* implicit */unsigned char) arr_1 [(unsigned char)2] [i_1 - 1]);
    }
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) arr_8 [i_2] [i_2])))))) : (min((var_7), (((/* implicit */unsigned long long int) (-(1317349477626659315LL))))))))));
        arr_9 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_10))))) - (((((/* implicit */_Bool) 2114553808200210157ULL)) ? (11852843065871760624ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_2]))) | ((+(var_15)))))));
        arr_10 [2ULL] &= var_16;
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_3]))) == (arr_6 [i_3])));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_3] [i_3])) * (((/* implicit */int) arr_12 [i_3] [i_3]))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((11ULL) ^ (((/* implicit */unsigned long long int) 1788705185480943780LL))));
        arr_18 [i_4] = ((_Bool) (!((!(var_10)))));
    }
}
