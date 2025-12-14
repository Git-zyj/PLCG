/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205736
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
    var_15 += var_0;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 4; i_2 < 8; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823)) ? (2147483647) : (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 3] [i_2 - 3] [i_2 - 4]))))) ? ((~(-1073741798))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 4] [i_2 - 3] [i_2 + 3] [i_2 - 3])))))));
                        arr_11 [i_3] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */int) (~(max((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) arr_5 [0ULL])) ? (var_10) : (((/* implicit */long long int) arr_3 [i_0]))))))));
                        var_17 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2 + 4])) ? (((/* implicit */int) (short)12906)) : (((1073741798) - (var_11)))))));
                    }
                } 
            } 
        } 
        var_18 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0])) & (var_0)))) ? (((/* implicit */unsigned int) (~(1073741790)))) : ((~(arr_10 [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(arr_13 [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_4] [i_5] [i_5] [i_6] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)2048))) : (var_13))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */unsigned long long int) (-(922917208)))) : ((-(var_0)))));
                            arr_27 [i_4] [i_5] [i_6] [i_7] [i_8] = ((/* implicit */_Bool) (unsigned char)164);
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((arr_19 [i_4] [i_5] [i_5]) && (arr_19 [i_4] [i_6] [i_9]))))));
                        var_22 = ((/* implicit */unsigned long long int) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4] [i_6] [i_9]))))))));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) != (((/* implicit */int) (unsigned char)57))));
                        var_24 = ((/* implicit */_Bool) arr_13 [i_9]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 8; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -519974528)) ? (-869175915) : (arr_29 [i_4])))))))));
                                var_26 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_10] [i_10 + 2] [i_6] [i_11 + 2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_5] [i_10])) << (((((/* implicit */int) (signed char)-1)) + (25)))))) ? (((/* implicit */int) var_7)) : (-771539153))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4]))))) % ((~(arr_29 [6])))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        var_28 ^= (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_12 - 1] [i_12 - 1] [i_12] [i_12] [i_12 - 1] [i_5]))) - (var_5)))));
                        var_29 = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) - (var_0)))));
                    }
                }
            } 
        } 
        var_30 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(arr_3 [i_4])))) && (var_6))) ? (((var_0) * (((/* implicit */unsigned long long int) (((_Bool)1) ? (2126799391U) : (arr_28 [i_4] [i_4] [i_4] [i_4])))))) : ((+(min((((/* implicit */unsigned long long int) (signed char)63)), (15826612181637792901ULL)))))));
    }
}
