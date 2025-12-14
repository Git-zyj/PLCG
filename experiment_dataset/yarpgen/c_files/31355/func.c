/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31355
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = var_5;
        var_18 -= ((/* implicit */int) (((!((!(((/* implicit */_Bool) -299882814)))))) ? (((((/* implicit */_Bool) -2873230948725755519LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)63))) : (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)64)))));
        var_19 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (short)-32762)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0])))))) : (((((arr_0 [i_0 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 19; i_2 += 4) 
        {
            var_20 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2 - 1]))));
            var_21 ^= (short)73;
            arr_10 [i_1] |= ((/* implicit */short) arr_6 [i_1]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                arr_16 [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 + 2] [i_1 + 2])))));
                arr_17 [7ULL] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)9))));
                var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_3 + 2] [i_1 - 1])) && (((/* implicit */_Bool) 18446744073709551602ULL))));
            }
            var_23 = arr_12 [i_1] [i_3] [i_3 - 1];
            var_24 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [i_3 + 2] [i_1] [10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3] [i_1])))))) | (((((/* implicit */int) (short)81)) ^ (((/* implicit */int) arr_15 [i_1] [i_3] [i_1] [i_3]))))));
            var_25 = ((((/* implicit */_Bool) arr_11 [i_1 + 1] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_1 + 2] [i_3 + 1])));
        }
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            var_26 = ((/* implicit */short) max((var_26), (arr_14 [i_5 - 1] [i_5])));
            arr_21 [i_1] = var_1;
            var_27 = var_16;
        }
    }
    var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
    var_29 = ((/* implicit */unsigned long long int) (+(((((var_16) - (((/* implicit */int) (short)-18904)))) + ((-(((/* implicit */int) (_Bool)1))))))));
    var_30 = ((/* implicit */unsigned long long int) max((-427323645), (((/* implicit */int) var_7))));
    var_31 = ((/* implicit */short) ((int) ((signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4))))));
}
