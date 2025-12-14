/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33344
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
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((((var_9) > (((/* implicit */int) var_2)))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (short)1425))))))) : (((/* implicit */int) var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) ((int) arr_0 [i_0 - 1]));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)1425)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -6810024431017101226LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2]))) : (4115440267U))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) var_16);
        var_20 -= ((/* implicit */int) ((unsigned short) ((arr_5 [i_1]) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (4095) : (((/* implicit */int) arr_8 [i_1] [i_1]))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_2 = 2; i_2 < 20; i_2 += 2) 
    {
        arr_14 [i_2] = ((/* implicit */int) (short)-24474);
        arr_15 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_12 [i_2])) : (min((((/* implicit */int) arr_6 [i_2 - 2])), ((~(452690129)))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) (!((_Bool)0)));
        /* LoopSeq 4 */
        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            var_22 -= ((/* implicit */_Bool) (~(((/* implicit */int) var_16))));
            var_23 = arr_10 [(unsigned short)2];
        }
        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            var_24 = ((/* implicit */signed char) ((((unsigned long long int) arr_8 [(unsigned short)6] [(unsigned short)17])) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2)))))));
            arr_22 [i_3] = ((/* implicit */unsigned short) (~((+(arr_7 [i_3] [i_3])))));
            arr_23 [(unsigned char)3] [i_5] [i_5] = ((arr_19 [i_5 - 2] [i_3 + 1]) / (arr_19 [i_5 + 2] [i_3 - 1]));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 ^= ((/* implicit */long long int) ((arr_17 [i_3] [i_3 + 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-22248)))));
            var_26 = ((/* implicit */unsigned char) ((short) arr_11 [i_3 + 2]));
        }
        for (int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            arr_30 [i_3] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -452690119)) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) 6287033534128478924LL))))) || (((/* implicit */_Bool) ((unsigned char) arr_26 [i_3] [i_3])))));
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned long long int) var_2)))));
            arr_31 [i_3] [i_7] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 452690114)) ? (3966867581884651608LL) : (6287033534128478924LL))));
        }
    }
    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 3) 
                        {
                            {
                                arr_44 [i_8] [i_8] [i_8] [16LL] [i_8] |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((6287033534128478924LL), (((/* implicit */long long int) (_Bool)0))))), (((((/* implicit */_Bool) arr_5 [i_10 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-9355)), (arr_6 [i_8]))))) : (min((var_6), (7575427053483124116ULL)))))));
                                arr_45 [i_8] [i_8] [i_11] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((max((452690114), (-59407311))) * ((((+(((/* implicit */int) (short)9346)))) & (((/* implicit */int) var_13))))));
                                var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)9354)) - (((/* implicit */int) arr_10 [i_10]))))) ? (arr_34 [i_10] [i_10 - 2] [i_10]) : (((/* implicit */long long int) arr_43 [i_11])))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_11 + 1])) && (((/* implicit */_Bool) arr_33 [i_11 + 1]))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) min(((+(arr_34 [i_10 + 3] [i_9] [i_9 - 1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_37 [i_10 + 1] [i_10 + 3] [i_10 + 2])))))));
                    /* LoopNest 2 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 14; i_14 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */int) (~((~(((arr_39 [i_8] [i_9] [i_10 + 1] [i_13] [i_14]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8])))))))));
                                arr_51 [i_14] [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) - (arr_34 [i_10 + 1] [i_14 + 3] [i_9 - 1])))) / (max((arr_47 [i_14 + 1] [i_14 + 1] [i_9] [i_9 - 1] [i_9 - 1]), (arr_47 [i_9 - 1] [i_14 - 1] [i_13] [i_10] [i_9 - 1])))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) ((max((((/* implicit */int) arr_40 [i_10 + 2] [i_9 - 1])), (-1796714295))) >> (((((/* implicit */int) arr_12 [i_10 + 1])) - (100)))));
                    var_32 = ((/* implicit */short) max((((/* implicit */int) arr_33 [(_Bool)1])), ((-(((/* implicit */int) var_11))))));
                }
            } 
        } 
        var_33 = (~(max((((((/* implicit */_Bool) -6287033534128478917LL)) ? (((/* implicit */int) arr_10 [i_8])) : (((/* implicit */int) (short)-9346)))), (((545231203) * (((/* implicit */int) arr_49 [i_8] [i_8])))))));
        var_34 = ((/* implicit */_Bool) arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
}
