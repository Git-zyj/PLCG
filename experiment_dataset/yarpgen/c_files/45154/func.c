/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45154
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 *= ((/* implicit */_Bool) var_4);
        var_15 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 298284416U)) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3996682856U)) || (((/* implicit */_Bool) (short)-18071)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) != (((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((/* implicit */int) var_7))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (arr_5 [i_1] [i_1] [i_2]))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 536870911LL)) ? (18446744073709551603ULL) : (((/* implicit */unsigned long long int) 298284413U))));
            var_20 = ((/* implicit */unsigned short) ((unsigned int) (~(arr_2 [10]))));
        }
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) (+(arr_7 [i_3])));
        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) 12ULL));
        arr_11 [i_3] [i_3] = ((/* implicit */unsigned short) (~(12ULL)));
    }
    var_22 = ((/* implicit */int) ((617441801U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
}
