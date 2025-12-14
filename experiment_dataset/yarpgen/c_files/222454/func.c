/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222454
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = var_6;
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (~(((int) (!(((/* implicit */_Bool) 1097953697U))))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0])), (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3]))) * (0U)))));
        /* LoopSeq 1 */
        for (int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            var_19 = ((/* implicit */_Bool) var_5);
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_20 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) 9272639865831130946ULL)))))));
                arr_16 [i_3] [i_4] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) (signed char)124)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_1)))) : (arr_10 [i_5])));
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                arr_20 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) ((2158867325U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191)))));
                var_21 |= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) -7583062552323989532LL)) ? (arr_14 [i_3] [i_4 + 2] [i_6] [i_6]) : (((/* implicit */unsigned long long int) var_1)))));
                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9808797586204280117ULL))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_9 [(unsigned char)6]);
                            arr_27 [i_4] = ((/* implicit */unsigned int) arr_21 [i_4] [i_6] [i_7]);
                            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_15 [i_4 - 1] [i_4 + 2] [i_4 - 1]))));
                            arr_28 [i_4] [i_4] [i_4] [i_4] [i_7] [i_7] [(unsigned char)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15)) / (arr_24 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4 + 2] [i_3])))) && (((/* implicit */_Bool) ((unsigned char) 2147483648U)))));
                            arr_29 [i_3] [i_4] [i_6] [i_7] [i_4] [i_4] [i_3] = (+(-185491733));
                        }
                    } 
                } 
            }
        }
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) 2287589982U))) ? (arr_10 [i_3]) : (((/* implicit */long long int) (~(var_12))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */int) var_6))));
        arr_33 [i_9 - 1] [7U] = ((/* implicit */signed char) -1LL);
    }
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_11 = 2; i_11 < 17; i_11 += 4) 
        {
            arr_41 [i_10] [i_11 - 1] = ((/* implicit */short) (+(((/* implicit */int) arr_38 [i_11 + 1] [i_11] [i_11 - 1]))));
            var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) + (2147483647))) << (((((/* implicit */int) var_6)) - (106)))));
        }
        /* vectorizable */
        for (unsigned int i_12 = 2; i_12 < 18; i_12 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
            arr_44 [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_12 - 2] [i_12] [i_12 + 1]));
        }
        arr_45 [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((-910732342), (((/* implicit */int) arr_15 [i_10] [i_10] [i_10]))))) ? ((~(var_8))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_43 [i_10]), (arr_12 [i_10] [i_10]))))))) == (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_10])))));
    }
    var_29 = ((/* implicit */int) ((short) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)56))))), (var_5))));
}
