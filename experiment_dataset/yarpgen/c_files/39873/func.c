/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39873
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
    var_12 = ((/* implicit */unsigned long long int) var_5);
    var_13 = var_8;
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */int) var_7);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)1)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((long long int) var_7))));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((max((arr_2 [i_1]), (arr_1 [i_1] [i_1]))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)100)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_0 [i_1])))) ? (((unsigned long long int) (unsigned short)6676)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
        var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_1] [i_1]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1839780251124166791LL)) ? (2147483647) : (712878170)));
            var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_2]))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83)))))));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((((/* implicit */long long int) max((min((arr_0 [i_3]), (((/* implicit */int) (short)24)))), (var_8)))), (9223372036854775807LL)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_14 [i_3]) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))) ? (((/* implicit */int) max((var_5), (var_5)))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) arr_14 [i_3]))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        arr_18 [i_4] = ((/* implicit */_Bool) 3245555535U);
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] = ((/* implicit */int) (+(arr_19 [i_5] [i_5] [i_5])));
            arr_22 [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) var_3);
        }
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 283311663825662363LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3650789836U))) == (var_11)));
        arr_23 [i_4] = ((/* implicit */int) (-(var_11)));
        arr_24 [i_4] = ((/* implicit */unsigned int) var_4);
    }
}
