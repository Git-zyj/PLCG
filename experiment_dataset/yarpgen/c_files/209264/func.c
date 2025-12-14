/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209264
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [14ULL] = ((/* implicit */signed char) min((((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) 2ULL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned char) ((short) (_Bool)0));
            var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) min((arr_1 [i_1]), (((/* implicit */unsigned int) (unsigned char)127)))))));
        }
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))) : (3221736312U)));
        var_13 = ((/* implicit */unsigned short) max(((signed char)-7), (((/* implicit */signed char) (_Bool)1))));
    }
    for (short i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_14 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)14478)) != (((/* implicit */int) (unsigned short)0)))))) / (max((min((4503599626846208LL), (((/* implicit */long long int) (unsigned char)66)))), (((/* implicit */long long int) ((arr_4 [i_3]) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_11 [i_3]))))))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) == (2799891755U))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_3])) & (((/* implicit */int) arr_12 [i_3]))))))))));
        var_16 = ((/* implicit */unsigned short) arr_0 [i_3] [(unsigned short)15]);
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = (~(-7));
        arr_19 [i_4] = min((((/* implicit */long long int) max((arr_5 [i_4]), (((/* implicit */unsigned short) arr_12 [i_4]))))), (((-3435102643031682522LL) + (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))))));
        arr_20 [i_4] = ((/* implicit */unsigned int) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))));
    }
    var_17 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            arr_26 [i_5] [i_6] = ((/* implicit */unsigned short) var_7);
            var_18 -= ((/* implicit */unsigned char) (!(arr_16 [i_5] [i_5])));
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_7])) && (((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_7]))));
            var_20 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_5] [i_7])) : (((/* implicit */int) (short)-327)))));
            var_21 = ((/* implicit */unsigned int) ((arr_16 [i_7] [i_7]) ? (((/* implicit */int) arr_16 [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_7] [i_7]))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_7] [i_5]))) < (arr_14 [i_5] [i_5]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (arr_1 [i_5]))))));
                var_23 *= ((/* implicit */_Bool) ((arr_32 [i_5]) + (arr_32 [i_5])));
                var_24 = ((/* implicit */unsigned int) -38950048);
            }
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_37 [i_5] [(_Bool)1] = arr_31 [i_5];
            arr_38 [(unsigned char)7] [i_9] [i_9] = ((/* implicit */unsigned short) ((unsigned char) arr_22 [i_5] [i_9]));
        }
        arr_39 [i_5] [10LL] |= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)247)) ? ((+(18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11799)))));
    }
}
