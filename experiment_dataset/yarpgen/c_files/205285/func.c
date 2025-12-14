/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205285
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 -= ((/* implicit */unsigned int) arr_2 [i_1]);
                    var_14 *= ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)82))) : (var_10))))), (max((((/* implicit */long long int) ((unsigned int) 1235147640))), (min((((/* implicit */long long int) arr_8 [i_0] [i_1] [4LL])), (arr_7 [i_0] [i_0] [i_2])))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_1))));
                }
            } 
        } 
        var_16 = ((/* implicit */long long int) ((unsigned int) ((int) max((((/* implicit */unsigned int) -1235147640)), (336985573U)))));
    }
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) var_7);
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (-(arr_10 [i_3] [i_3]))))) ? (-1013535987) : (-1235147627)));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((4294967288U) - (4294967288U)))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 6162740094608566245LL)) && (((/* implicit */_Bool) var_10))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) 3079037980U))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-26)) ? (((((/* implicit */_Bool) -772832778917364403LL)) ? (3271287418129780644ULL) : (arr_4 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned long long int) arr_9 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_23 = (-((((+(((/* implicit */int) arr_15 [2U] [i_5])))) & (((((/* implicit */_Bool) 7034009832958310698LL)) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) arr_11 [i_5])))))));
        arr_17 [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) 10587752831304560229ULL)) ? (min((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_5] [i_5]))), (max((((/* implicit */unsigned long long int) arr_11 [i_5])), (arr_10 [i_5] [i_5]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
        var_24 -= ((/* implicit */unsigned char) ((3271287418129780647ULL) > (((/* implicit */unsigned long long int) (+(1834214685U))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned int i_8 = 4; i_8 < 18; i_8 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((int) arr_21 [i_8 + 1] [i_8 - 1])))));
                    var_26 = ((/* implicit */unsigned char) arr_19 [i_6]);
                }
            } 
        } 
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) 772832778917364412LL))));
        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (-(arr_18 [i_6]))))));
    }
    for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) arr_26 [i_9]))));
        /* LoopSeq 1 */
        for (int i_10 = 4; i_10 < 18; i_10 += 3) 
        {
            var_30 = ((/* implicit */unsigned int) min((((arr_29 [i_10] [i_10 - 2] [i_9]) & (arr_29 [i_10] [i_10 + 1] [i_10]))), (((((/* implicit */_Bool) arr_29 [i_10] [i_10 - 2] [i_10])) ? (2111062325329920LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 7639444286861330023LL)) ? (arr_18 [i_10 - 2]) : (((/* implicit */int) arr_21 [i_9] [i_10 - 4]))))))));
            var_32 *= ((/* implicit */unsigned long long int) ((long long int) 15175456655579770964ULL));
            var_33 = ((/* implicit */unsigned int) arr_26 [i_9]);
        }
    }
}
