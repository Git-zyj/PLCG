/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233136
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
    var_16 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)64)) + (((/* implicit */int) var_11))));
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 3])))) ? ((+(arr_0 [i_0 - 2]))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)156))));
            var_19 = ((/* implicit */unsigned char) -989890183);
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((arr_5 [i_1 + 2]) >= (((/* implicit */int) ((((/* implicit */_Bool) -107038838)) && (((/* implicit */_Bool) -989890164))))))))));
            arr_8 [i_1] [i_1] = (~((~(-989890183))));
            /* LoopSeq 3 */
            for (int i_3 = 1; i_3 < 13; i_3 += 4) /* same iter space */
            {
                arr_11 [i_1] [i_3] [i_2] [i_1] = ((/* implicit */int) ((signed char) ((unsigned char) 613348132)));
                var_21 = (~(((/* implicit */int) arr_4 [i_1 - 1])));
            }
            for (int i_4 = 1; i_4 < 13; i_4 += 4) /* same iter space */
            {
                arr_15 [i_2] = ((/* implicit */int) ((unsigned char) var_8));
                arr_16 [i_2] [i_4] = ((/* implicit */unsigned short) ((signed char) (unsigned char)201));
                var_22 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-100)) ? (563112022) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_1])))));
                arr_17 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned char) arr_12 [i_1] [i_2]);
            }
            for (int i_5 = 1; i_5 < 13; i_5 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)135))));
                arr_21 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) (unsigned char)238))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 16; i_6 += 4) 
                {
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        {
                            arr_29 [i_1] [i_1] [i_1] [i_5] [i_1 + 1] [i_1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_19 [i_6 + 1]))));
                            arr_30 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 2]))));
                            arr_31 [i_1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_7] [i_6] [i_6 + 1] [i_5] [i_5] [i_5]))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_8 = 1; i_8 < 16; i_8 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (((_Bool)1) && (((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_8 + 1])))))));
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) 5515897590591901040LL))));
        }
        arr_36 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (signed char)-86))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
        {
            for (signed char i_10 = 2; i_10 < 16; i_10 += 2) 
            {
                {
                    arr_43 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_1);
                    var_26 = ((/* implicit */signed char) ((int) (+(((/* implicit */int) var_4)))));
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned char) ((var_14) | (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_2)) : (var_14))), (var_14)))));
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_5) ^ ((-(677455118)))))) ? (((/* implicit */int) var_4)) : (min((((/* implicit */int) (signed char)100)), ((~(((/* implicit */int) var_3))))))));
    var_29 = ((/* implicit */unsigned char) var_13);
}
