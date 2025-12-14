/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218377
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
    var_14 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) 4393727804758436789ULL))));
        var_16 = ((/* implicit */unsigned short) (short)-26404);
        var_17 ^= ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((507816290U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */long long int) 18446744073709551615ULL);
        arr_6 [i_1 - 1] = ((/* implicit */long long int) var_1);
        /* LoopSeq 3 */
        for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(arr_8 [i_2 + 2] [i_1 - 1]))))));
            var_20 ^= ((/* implicit */signed char) (+(1006632960)));
            arr_9 [i_2] [9U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        }
        for (int i_3 = 1; i_3 < 24; i_3 += 4) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) < (2514636848169165889ULL))))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((int) arr_4 [i_1 - 1] [i_3 + 1])))));
            arr_13 [i_1] [i_3] [i_1] = ((/* implicit */short) ((((unsigned long long int) var_4)) - (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) var_9))));
            var_23 ^= ((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)78)));
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_10))));
            var_25 ^= ((arr_15 [6ULL] [i_4]) + ((-(arr_11 [i_1 - 1] [i_1 - 1] [(unsigned char)4]))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [(unsigned short)22] [i_1 - 1])) ? (((/* implicit */unsigned int) (-(-405444413)))) : (((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        }
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */unsigned long long int) var_13);
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((arr_4 [i_5] [i_5]) ^ (((/* implicit */unsigned long long int) arr_1 [i_5])))) << (((arr_16 [i_5]) - (522566790394084442LL))))))));
    }
    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) min(((~(min((((/* implicit */int) var_3)), (var_9))))), (((/* implicit */int) ((unsigned char) 0U)))));
        var_28 = ((/* implicit */unsigned long long int) arr_1 [(short)14]);
    }
}
