/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234667
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
    var_18 = ((((/* implicit */_Bool) ((unsigned int) ((var_17) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1]))));
            arr_6 [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [9ULL] [10U])) || (((/* implicit */_Bool) arr_5 [i_0])))))));
        }
        arr_7 [i_0 + 2] [i_0 + 1] = ((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_0 + 1]);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [(short)2] [i_0] = ((/* implicit */short) min(((-(var_5))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-6639))))))))));
            var_20 = ((/* implicit */long long int) (short)24503);
        }
        for (short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3611674592688258083LL)) != (3004929488533760766ULL)));
            var_22 += ((/* implicit */short) arr_5 [(signed char)12]);
        }
        for (short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
        {
            var_23 *= arr_13 [i_0] [i_0] [i_0];
            var_24 = ((/* implicit */unsigned int) arr_9 [i_4]);
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24503)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)47))))) ? (arr_10 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
            var_26 = ((/* implicit */long long int) ((var_17) >> ((((-(min((((/* implicit */long long int) var_8)), (var_6))))) - (1682772604162287364LL)))));
            var_27 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2735794971U)) ? (((/* implicit */int) (short)24503)) : (((/* implicit */int) (signed char)-124))))), (arr_10 [i_0] [i_4]))) | (((/* implicit */unsigned long long int) ((1602051458937249300LL) + (((((/* implicit */_Bool) (short)13936)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-85))) : (3611674592688258084LL))))))));
        }
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
    {
        var_28 -= ((/* implicit */unsigned int) ((long long int) (signed char)107));
        var_29 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) var_1)) ? (arr_21 [(signed char)20] [i_5]) : (((/* implicit */unsigned long long int) arr_20 [i_5]))))));
    }
    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_30 = var_1;
        arr_24 [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_23 [i_6])) ? (((/* implicit */long long int) arr_23 [i_6])) : (-4632149781276603963LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_23 [i_6]) : (arr_23 [i_6]))))));
        arr_25 [i_6] = ((/* implicit */long long int) max((1638444616U), (((/* implicit */unsigned int) (short)22705))));
        var_31 = ((/* implicit */signed char) ((short) ((short) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_6]) : (arr_22 [i_6])))));
    }
    var_32 = ((/* implicit */long long int) ((unsigned int) ((short) var_12)));
}
