/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218212
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_16)), (((long long int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */long long int) var_4)) : (var_9))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) arr_0 [i_0]);
        var_22 -= ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-22329)), (((long long int) ((unsigned char) var_13)))));
    }
    for (int i_1 = 2; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-22329)))))));
            var_24 = ((/* implicit */int) (!((!(((/* implicit */_Bool) var_15))))));
        }
        for (unsigned char i_3 = 2; i_3 < 23; i_3 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) arr_3 [i_1 - 2]);
            var_26 -= ((/* implicit */long long int) var_2);
            var_27 ^= ((/* implicit */unsigned short) (unsigned char)240);
            var_28 = ((/* implicit */unsigned short) min(((~(min((var_10), (((/* implicit */long long int) (short)-18833)))))), (((long long int) -6247590000881542048LL))));
        }
        arr_10 [0U] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    }
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        var_29 ^= ((int) min((arr_12 [i_4]), (arr_12 [i_4])));
        var_30 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5979))) : (var_7))))), (arr_2 [i_4])));
    }
    var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 3981978463009331599ULL)))));
    var_32 = ((long long int) (-(((/* implicit */int) var_2))));
    var_33 = ((/* implicit */long long int) ((unsigned int) (~(((/* implicit */int) ((signed char) (unsigned char)127))))));
}
