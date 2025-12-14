/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5042
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) & (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (_Bool)1))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)94)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) (((+(((/* implicit */int) (signed char)-118)))) >= ((~(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) (signed char)119))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 3) 
    {
        arr_6 [i_1] &= (~(((((/* implicit */_Bool) (signed char)105)) ? (1981579287) : (((/* implicit */int) arr_4 [i_1])))));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)117))));
        var_20 = ((/* implicit */int) arr_3 [i_1]);
        /* LoopSeq 4 */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 2) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */int) (signed char)-2)) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))));
            arr_10 [i_2] [i_2] = ((/* implicit */int) ((_Bool) arr_9 [i_2]));
        }
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_13 [i_1] [i_1] [i_3] = (signed char)127;
            var_22 = ((/* implicit */unsigned long long int) arr_12 [i_3]);
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 7; i_4 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    arr_19 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)99);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_1 - 2] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((18ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38)))))) / (((/* implicit */int) arr_8 [i_1 - 1] [i_5 - 1]))));
                        var_23 = arr_11 [i_1] [i_1];
                    }
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        arr_25 [i_4] = ((/* implicit */signed char) arr_14 [i_1 + 2] [i_3] [i_4 + 3] [i_7]);
                        arr_26 [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (((-(arr_20 [i_5] [i_5] [i_5] [i_5] [i_7]))) >= (((((/* implicit */_Bool) 1150040108)) ? (arr_14 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */int) arr_12 [i_1]))))));
                        var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_4])) && (((/* implicit */_Bool) arr_12 [i_1])))))));
                    }
                }
                var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!((_Bool)1)))))))));
                var_26 = ((((/* implicit */int) arr_8 [i_1] [i_3])) > (((/* implicit */int) arr_8 [i_4 + 1] [i_3])));
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_27 = ((((/* implicit */_Bool) ((arr_29 [i_8]) ? (((/* implicit */int) arr_16 [i_1])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_16 [i_1])))) : (((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 3])));
                var_28 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
            }
            for (signed char i_10 = 3; i_10 < 8; i_10 += 1) 
            {
                arr_34 [i_10] [i_1] [i_1] [i_10] = (~(((((/* implicit */_Bool) arr_24 [i_1] [i_8] [i_1] [i_10] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (1728232843))));
                arr_35 [i_1] [i_10] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_31 [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_10 + 3]))));
                var_30 = ((/* implicit */int) ((unsigned long long int) (_Bool)1));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_1])) ? (arr_9 [i_10]) : (((/* implicit */int) (signed char)-118)))) >= (arr_24 [i_1] [i_8] [i_1] [i_10] [i_1])));
                    arr_39 [i_10] = ((((/* implicit */int) arr_12 [i_1 - 3])) ^ (((/* implicit */int) arr_12 [i_1 - 3])));
                }
                arr_40 [i_1] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) (signed char)93))));
            }
            var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_8])) : (((/* implicit */int) (signed char)-86))))) ? (((/* implicit */int) var_13)) : (var_7))))));
            var_33 = ((/* implicit */unsigned long long int) -2001477424);
        }
        for (signed char i_12 = 1; i_12 < 9; i_12 += 1) 
        {
            arr_44 [i_1] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_1] [i_1 + 2] [i_1 + 3])) ^ (((int) var_17))));
            var_34 ^= var_5;
        }
    }
    for (int i_13 = 3; i_13 < 20; i_13 += 4) 
    {
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_13 - 2] [i_13 + 2])) ? (min((((/* implicit */int) max(((signed char)-23), ((signed char)75)))), (((arr_45 [i_13]) & (((/* implicit */int) (signed char)-36)))))) : (min((((/* implicit */int) (signed char)81)), (min((var_14), (arr_45 [i_13])))))));
        arr_48 [i_13] = ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)126)));
        /* LoopNest 2 */
        for (int i_14 = 2; i_14 < 21; i_14 += 3) 
        {
            for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((((_Bool)1) ? (arr_53 [i_13] [i_13] [i_13] [i_13] [i_13 - 3] [i_13]) : (((/* implicit */int) arr_52 [i_15])))), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_13] [i_13] [i_13] [i_13] [i_14 - 1] [i_14 + 1]))))) : (((/* implicit */int) (signed char)7))));
                        arr_55 [i_13] [i_16] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)117))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-126)) && ((_Bool)1))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_17 = 2; i_17 < 19; i_17 += 3) 
                        {
                            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [i_13 - 1])))))));
                            var_38 = ((/* implicit */_Bool) ((arr_53 [i_13 + 3] [i_13] [i_13] [i_13 + 3] [i_13] [i_13]) & (1749447113)));
                            arr_58 [i_13] [i_17] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_14 + 1] [i_14] [i_14] [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (arr_53 [i_14 - 2] [i_14 - 2] [i_14] [i_14 - 2] [i_14 - 2] [i_14 - 2]) : (540760333)));
                        }
                        var_39 ^= (~(var_17));
                    }
                    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_53 [i_13] [i_13] [i_14] [i_14] [i_14] [i_14])))));
                    /* LoopNest 2 */
                    for (int i_18 = 2; i_18 < 22; i_18 += 3) 
                    {
                        for (signed char i_19 = 3; i_19 < 22; i_19 += 2) 
                        {
                            {
                                var_41 = ((arr_53 [i_13] [i_13] [i_15] [i_15] [i_19] [i_19]) ^ (((/* implicit */int) (_Bool)1)));
                                var_42 += ((/* implicit */signed char) min((arr_53 [i_13] [i_14 + 2] [i_15] [i_18] [i_19 - 1] [i_13]), (((arr_63 [i_13]) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_8))))));
                                var_43 = ((((/* implicit */_Bool) min(((signed char)(-127 - 1)), (min(((signed char)99), ((signed char)-100)))))) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)56)) : (1286252810))))) : (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_44 = min((((/* implicit */int) (signed char)-58)), (-738058533));
                }
            } 
        } 
        var_45 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_56 [i_13] [i_13] [i_13] [i_13] [i_13]) / (((/* implicit */unsigned long long int) -738058533))))))))));
    }
}
