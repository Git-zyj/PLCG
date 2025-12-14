/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2696
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)-1432)) > (((/* implicit */int) (short)-29745))));
            /* LoopNest 2 */
            for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_3 + 1]))));
                        arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_13 = ((/* implicit */int) (_Bool)1);
        }
        arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((unsigned char) var_8)))));
        arr_14 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (_Bool)1)) + (arr_3 [i_0] [(signed char)0] [i_0]))));
    }
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_15 &= ((/* implicit */signed char) (((_Bool)1) ? (arr_25 [i_4] [(short)6] [i_6] [i_7] [i_8] [i_8]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))))));
                            arr_29 [i_5 - 1] [i_4] = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))))));
                        }
                        arr_30 [i_4] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 + 1] [i_6 - 1])) ? (arr_26 [i_5 + 1] [i_5 + 1] [i_4] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) max((arr_1 [i_5 + 1] [i_6]), (arr_1 [i_5 - 1] [18]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        arr_35 [i_4] [i_4] [i_6] [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_4] [i_4] [i_4] [6] [i_9 + 1])) ? (((/* implicit */int) arr_28 [i_4] [i_5] [i_5 + 1] [i_5 + 1] [i_4])) : (arr_33 [i_4] [i_4] [(short)11] [i_9] [i_9 + 1])));
                        var_16 -= (_Bool)1;
                        arr_36 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_8))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_4] [i_5 + 1] [i_6 + 1] [i_9 + 1])) ? (((/* implicit */int) arr_21 [i_4] [i_5 - 1] [i_6 + 1] [i_9 + 1])) : (((/* implicit */int) arr_21 [i_4] [i_5 - 1] [i_6 - 1] [i_9 + 1]))));
                            var_19 ^= ((/* implicit */unsigned short) ((_Bool) arr_31 [i_4] [i_6 - 1] [i_6] [i_10]));
                        }
                        for (signed char i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            var_20 -= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_5 + 1] [(unsigned short)1])) : (((/* implicit */int) (_Bool)1))));
                            var_21 *= ((/* implicit */unsigned int) (!((_Bool)1)));
                            arr_42 [i_4] = ((long long int) (_Bool)1);
                        }
                        for (int i_12 = 2; i_12 < 15; i_12 += 3) /* same iter space */
                        {
                            arr_45 [i_6] [i_5] [i_6 + 1] [i_4] [i_6] = ((/* implicit */signed char) (!((_Bool)1)));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(arr_25 [i_4] [i_5] [i_6] [i_5] [(short)0] [i_12 - 1]))))));
                            arr_46 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_5] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) && ((_Bool)1))))) : (((unsigned int) (_Bool)1))));
                            arr_47 [i_4] [i_4] [i_9] [(unsigned short)5] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                            arr_48 [i_4] [i_5] [i_6] [i_9] [i_12 - 2] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))) < ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_34 [i_4] [i_5] [(_Bool)1] [i_9]))))));
                        }
                        for (int i_13 = 2; i_13 < 15; i_13 += 3) /* same iter space */
                        {
                            arr_53 [i_4] [i_5] [i_6] [14LL] [i_13] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [(short)12] [i_6 + 1])) && (((/* implicit */_Bool) arr_18 [10] [i_6 - 1]))));
                            arr_54 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (_Bool)1);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))));
                        }
                    }
                    arr_55 [12] [i_5] [i_4] [12] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((signed char) arr_44 [i_4] [i_4] [i_5] [i_6 - 1] [2LL] [i_6 - 1]))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_43 [i_4] [i_4] [i_4] [i_4] [(short)9])), (max((((/* implicit */unsigned short) (_Bool)1)), (var_4))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                        {
                            {
                                arr_61 [i_15] [i_14] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) * (((int) arr_8 [i_5 - 1] [i_14 - 2] [i_6 - 1]))));
                                var_24 &= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (arr_24 [i_4] [(unsigned char)10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                                arr_62 [i_4] [i_4] [i_6] [(unsigned short)2] [i_15] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_25 &= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((/* implicit */int) (_Bool)1))))) - (min((arr_24 [i_14] [2LL]), (((/* implicit */unsigned int) var_11)))))) != (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_31 [(_Bool)1] [i_6] [i_14] [i_15])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_52 [i_4] [0U] [i_4] [i_6 + 1] [i_14 - 1] [0U] [i_14 - 1])), (var_4)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_5] [(short)6]))))))))));
                            }
                        } 
                    } 
                    arr_63 [i_4] [i_4] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_4] [i_4] [i_5 + 1] [i_6 - 1] [i_5 + 1])) * (((((/* implicit */_Bool) arr_3 [i_4] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_28 [i_4] [i_4] [i_5] [i_6 - 1] [11U])) : (((/* implicit */int) arr_28 [i_4] [i_4] [(short)0] [(_Bool)1] [(unsigned char)6]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_16 = 2; i_16 < 9; i_16 += 1) 
    {
        for (int i_17 = 0; i_17 < 12; i_17 += 1) 
        {
            {
                arr_69 [(unsigned char)2] [i_17] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (_Bool)1))))) - (((/* implicit */int) max((arr_7 [i_16 - 2] [i_16 - 2] [i_16 - 1]), (((/* implicit */unsigned char) (_Bool)1))))))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))))));
                arr_70 [i_16] [i_16] = ((/* implicit */unsigned char) (((((_Bool)1) ? ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_19 [i_16] [i_17])))) : (((/* implicit */int) ((short) (_Bool)1))))) > (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
