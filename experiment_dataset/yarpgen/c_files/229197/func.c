/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229197
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_10 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-96))));
            var_11 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)99))) | (arr_1 [i_0] [i_0]));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 2) 
                    {
                        {
                            var_12 = ((int) var_9);
                            var_13 = var_1;
                            arr_13 [i_2] &= ((/* implicit */unsigned int) (unsigned short)45475);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            var_14 = ((/* implicit */signed char) arr_10 [i_0] [i_5] [i_0] [i_5] [i_5]);
            var_15 -= ((/* implicit */int) var_9);
            arr_17 [i_0] [i_5] = ((/* implicit */signed char) var_3);
            var_16 = ((/* implicit */int) arr_5 [i_0] [i_0]);
        }
        /* LoopSeq 4 */
        for (int i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            arr_20 [i_0] [i_6] = 536870911U;
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) || (((/* implicit */_Bool) 2097711318))));
        }
        for (unsigned int i_7 = 4; i_7 < 16; i_7 += 2) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((/* implicit */int) var_8);
            var_18 = ((/* implicit */unsigned short) var_1);
        }
        for (unsigned int i_8 = 4; i_8 < 16; i_8 += 2) /* same iter space */
        {
            arr_27 [i_0] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) -2097711293)) ? (-1397350198) : (705994538))));
            arr_28 [i_0] [i_8 - 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */int) ((var_1) >= (1423137967)))) : (((/* implicit */int) var_0))));
        }
        for (unsigned int i_9 = 4; i_9 < 16; i_9 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_9])) + (((/* implicit */int) arr_26 [i_0] [i_9])))))));
            arr_32 [i_0] [i_9] [i_9] = ((((((/* implicit */_Bool) var_8)) ? (var_1) : (var_4))) & (((/* implicit */int) arr_12 [i_9] [i_9] [i_0] [i_0] [i_0] [i_0] [i_0])));
            arr_33 [i_0] [i_9] |= ((/* implicit */int) arr_24 [i_9]);
            var_20 = ((/* implicit */unsigned int) var_1);
            arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */long long int) 201990487)) : (-2618089714585286479LL)))) ? (((long long int) -1747871299)) : (((/* implicit */long long int) var_8))));
        }
        arr_35 [i_0] = ((((((/* implicit */int) var_6)) + (((/* implicit */int) var_2)))) * (((/* implicit */int) var_2)));
    }
    for (signed char i_10 = 2; i_10 < 15; i_10 += 4) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10 - 1])) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (-3149325318297015869LL))) : (((/* implicit */long long int) ((1106139430U) << (((/* implicit */int) (signed char)0)))))))) ? ((+(arr_16 [i_10] [i_10 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_39 [i_10 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -823831229)) ? (((((var_8) >> (((arr_24 [i_10]) - (566716173U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) > (1423137967))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_1 [4U] [i_10]))) == (((/* implicit */long long int) ((((/* implicit */_Bool) 3690486437U)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) var_0)))))))))));
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 21; i_12 += 1) 
        {
            for (int i_13 = 1; i_13 < 19; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        for (long long int i_15 = 1; i_15 < 17; i_15 += 1) 
                        {
                            {
                                arr_56 [i_15] [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_50 [i_15] [i_15 - 1] [i_15 + 2] [i_15] [i_15 - 1] [i_15 - 1]))))));
                                arr_57 [i_12] [i_12] [10] [i_14] [i_15] = ((/* implicit */long long int) arr_46 [i_11] [i_12] [i_12] [i_14]);
                                var_22 = ((/* implicit */long long int) arr_41 [i_11]);
                                arr_58 [i_12] [i_12] [i_12] [i_14] = var_5;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_13] [i_12] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)86)) ? (4290285436U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81)))))) : ((((!(((/* implicit */_Bool) arr_54 [i_13] [i_12] [i_12] [i_12] [i_11])))) ? (((/* implicit */long long int) var_8)) : (((long long int) var_6))))));
                }
            } 
        } 
        arr_59 [i_11] [i_11] = -3721654570498155607LL;
        var_24 ^= ((/* implicit */signed char) min((((/* implicit */int) (signed char)-90)), (var_1)));
    }
    var_25 = ((/* implicit */int) min((((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (((long long int) (signed char)-109)))), (((/* implicit */long long int) var_4))));
}
