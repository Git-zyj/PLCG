/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203958
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [17ULL])) : ((((!(((/* implicit */_Bool) 0)))) ? (((/* implicit */int) ((unsigned char) var_0))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_10 *= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) - ((+(((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        var_12 -= ((unsigned char) var_8);
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 16; i_2 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (arr_3 [16LL]) : (arr_3 [(short)4]));
        var_14 = ((/* implicit */unsigned short) ((arr_4 [i_2] [i_2 - 1]) < (((/* implicit */int) var_6))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_2 + 1])) != (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((signed char) arr_1 [i_3] [i_3]));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((unsigned char) arr_0 [i_3])))));
        var_17 += ((/* implicit */int) var_1);
        /* LoopSeq 4 */
        for (int i_4 = 4; i_4 < 13; i_4 += 3) 
        {
            arr_14 [i_3] [i_4] = ((/* implicit */unsigned short) arr_7 [i_3] [i_3]);
            var_18 -= ((/* implicit */unsigned char) arr_1 [i_4 + 1] [i_4 - 3]);
            var_19 -= ((/* implicit */short) var_7);
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) var_5)))))));
            arr_15 [i_4] = ((((/* implicit */unsigned long long int) arr_3 [i_3])) == (var_0));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_21 -= ((arr_3 [i_3]) != (var_4));
            arr_18 [i_3] = ((/* implicit */short) 2147483647);
            var_22 *= ((/* implicit */short) arr_5 [i_5]);
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_2))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_3))));
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
        {
            var_25 -= ((/* implicit */short) ((((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_7])) >> (((2174151133201024143ULL) - (2174151133201024137ULL))))))));
            arr_25 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))));
        }
    }
    var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_8))));
}
