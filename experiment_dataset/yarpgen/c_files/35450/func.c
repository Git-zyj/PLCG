/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35450
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
    var_14 = var_12;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((unsigned short)3844), (((/* implicit */unsigned short) arr_0 [i_0 - 1] [i_0 - 1]))))), (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)170))) : (var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 1])))))));
        var_15 = arr_0 [i_0 + 3] [i_0];
    }
    for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            arr_9 [i_1] [i_2 - 2] [i_2 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) || (((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_6 [i_1]))))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 3) 
            {
                var_16 *= ((/* implicit */unsigned short) var_4);
                arr_12 [i_1] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_3])))) : (((((/* implicit */int) arr_8 [i_1] [i_2] [i_3])) * (((/* implicit */int) (unsigned char)70))))));
            }
            for (short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 2) 
                {
                    arr_19 [i_1] [i_5] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1 - 1] [i_1 + 1])) ? (arr_17 [i_1] [i_1] [i_1] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 4; i_6 < 18; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_2 + 2] [i_5 + 1])) << (((arr_11 [i_2 + 2] [i_5 - 2] [i_6 + 1] [i_1 - 1]) - (998967587U))))))));
                        arr_22 [i_6] [i_5] [i_4] [i_5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_6 - 1] [i_5 + 1])) ^ (((/* implicit */int) arr_5 [i_6 - 2] [i_5 + 1]))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)-22546)))));
                    }
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(arr_17 [i_2 + 3] [i_2 - 1] [i_2] [i_2 - 1]))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 4; i_7 < 18; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(3741441658U))))));
                        var_21 = (+(var_7));
                    }
                    for (unsigned long long int i_8 = 3; i_8 < 19; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) arr_23 [i_5 - 2] [i_2 + 1] [i_1 + 1])) ? (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) arr_27 [i_1 + 1] [i_2] [i_4] [i_4] [i_4] [i_5] [i_8 + 2]))))) : (((/* implicit */int) arr_20 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 + 1] [i_8]))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned short) (unsigned char)85)))));
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [i_2 - 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 1] [i_4]))) : (4983639132122203754LL)));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        arr_31 [i_5] [i_2] [i_2] [i_2] [i_2] = arr_4 [i_1];
                        arr_32 [i_9] [i_4] [i_4] [i_4] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 1] [i_1])) ? (arr_11 [i_1] [i_2 + 3] [i_4] [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)201))))))));
                    }
                    var_25 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
                }
                var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((arr_13 [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)205)) : (((/* implicit */int) arr_6 [i_1]))))));
            }
            for (short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
            {
                arr_37 [i_2] [i_1] = var_5;
                var_27 *= ((unsigned char) var_2);
            }
            for (short i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
            {
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_18 [i_1 - 1] [i_2 + 1])) : (((/* implicit */int) (short)609))));
                arr_40 [i_1] = ((/* implicit */short) (+((~(((/* implicit */int) var_12))))));
            }
        }
        /* vectorizable */
        for (unsigned char i_12 = 4; i_12 < 20; i_12 += 2) 
        {
            var_29 -= ((((/* implicit */int) arr_20 [i_12 - 2] [i_12] [i_1] [i_1 + 1] [i_1 - 1] [i_1])) << (((((/* implicit */int) arr_20 [i_1] [i_12] [i_1] [i_1 + 1] [i_12] [i_12 - 1])) - (5014))));
            arr_43 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_12 - 4]))) : (var_13)));
            arr_44 [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5LL)) ? (((((/* implicit */_Bool) 0ULL)) ? (var_10) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1])))));
            var_30 |= arr_14 [i_1 - 1] [i_12 + 1] [i_12];
        }
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_1 - 1] [i_1 - 1]))))) ? (-23LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1 + 1] [i_1 + 1])))));
    }
    for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 4) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_28 [i_13 + 1] [i_13] [i_13 - 1] [i_13] [i_13]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_13 - 1] [i_13] [i_13 + 1] [i_13 + 1])))))) << (0ULL)));
        arr_48 [i_13] = (+(((((/* implicit */_Bool) arr_24 [i_13] [i_13 + 1] [i_13] [i_13] [i_13] [i_13] [i_13])) ? (((((/* implicit */_Bool) 961725192)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))))) : (((/* implicit */unsigned long long int) var_10)))));
        arr_49 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_13 + 1] [i_13] [i_13 + 1]))) >= (2450333607U)))) & (((/* implicit */int) ((((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_13])) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned char)60))))))))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (~(((/* implicit */int) arr_36 [i_13] [i_13 - 1] [i_13])))))));
    }
}
