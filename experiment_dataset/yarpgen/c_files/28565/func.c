/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28565
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
    var_17 -= ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) arr_3 [i_0] [(_Bool)1] [(_Bool)1]))));
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) arr_0 [i_0]))));
            var_20 = ((/* implicit */unsigned long long int) ((unsigned short) (-2147483647 - 1)));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) arr_1 [i_1]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                arr_14 [i_0] = ((/* implicit */short) 2745840306U);
                arr_15 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_0]))));
            }
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32758))) >= (arr_4 [i_0])));
            arr_17 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
        }
        arr_18 [i_0] = ((/* implicit */_Bool) var_7);
    }
    for (short i_4 = 2; i_4 < 9; i_4 += 1) 
    {
        var_22 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_0 [i_4])))) ? (arr_10 [i_4 - 1]) : (1549126989U)))), (-1176520489267875442LL)));
        var_23 = ((/* implicit */short) min((var_23), (var_8)));
        arr_22 [i_4] = ((/* implicit */unsigned short) max((1464144053U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_4] [(unsigned char)10]), (4693099556165088181ULL)))) ? (((/* implicit */int) arr_21 [i_4] [i_4 - 2])) : ((+(((/* implicit */int) (short)-32759)))))))));
        arr_23 [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(arr_10 [i_4])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_4])), (arr_9 [(unsigned short)1] [10U] [i_4 - 2])))) ? (min((arr_3 [i_4] [i_4] [(short)7]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10723)))))));
        var_24 |= ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_4 + 1] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_6 [i_4 - 2] [i_4 + 1]))), (((/* implicit */unsigned long long int) var_16))));
    }
}
