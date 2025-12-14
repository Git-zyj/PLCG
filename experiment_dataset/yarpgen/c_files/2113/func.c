/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2113
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
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        var_10 = ((/* implicit */long long int) (unsigned short)34138);
        var_11 = ((/* implicit */long long int) arr_0 [i_0 - 1]);
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) ((long long int) arr_2 [9LL]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31398))) : (var_3))) : (((((/* implicit */_Bool) ((short) var_6))) ? (max((var_0), (var_3))) : (((/* implicit */unsigned int) arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_13 = (+((-(((/* implicit */int) arr_1 [i_0 + 2])))));
                    var_14 = ((/* implicit */unsigned long long int) ((((max((min((((/* implicit */long long int) arr_5 [i_0] [i_1] [2LL])), (arr_4 [i_0] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (arr_5 [i_0] [(signed char)7] [i_2]) : (((/* implicit */int) (unsigned char)159))))))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned char) arr_7 [i_0 - 2] [i_0] [i_0 + 2]))) - (158)))));
                }
            } 
        } 
    }
    for (long long int i_3 = 4; i_3 < 18; i_3 += 4) 
    {
        var_15 = ((/* implicit */_Bool) 535822336U);
        var_16 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((short) arr_9 [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            arr_13 [(short)17] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) ((unsigned int) 62914560)))) : (((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */int) arr_12 [i_3]))))));
            var_17 = ((/* implicit */unsigned short) arr_9 [i_3]);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_3]);
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_14 [i_5]);
            arr_19 [i_3] [(unsigned char)1] [i_5] = ((/* implicit */unsigned int) (unsigned short)34138);
            arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3] [9])) ? (((((/* implicit */_Bool) arr_16 [i_3 - 3] [i_5 - 1])) ? (4278190080ULL) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((var_7) << (((((/* implicit */int) var_9)) - (64082))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_3 - 2]))))))))));
            var_19 = ((/* implicit */int) min((((unsigned short) -2383660264583993468LL)), (((/* implicit */unsigned short) arr_9 [i_3 - 3]))));
        }
        var_20 = ((/* implicit */unsigned long long int) ((long long int) (unsigned char)96));
    }
    /* LoopSeq 1 */
    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
    {
        var_21 *= ((/* implicit */signed char) min((((/* implicit */unsigned int) arr_24 [i_6])), (((var_0) - (var_3)))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((max((var_0), (((/* implicit */unsigned int) var_6)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_4)))))) < (((long long int) (_Bool)1))));
    }
}
