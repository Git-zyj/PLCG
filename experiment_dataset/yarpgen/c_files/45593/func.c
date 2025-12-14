/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45593
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_12 += ((/* implicit */short) ((unsigned long long int) 1910750153));
        var_13 = (((!(((/* implicit */_Bool) -6020810719851789566LL)))) ? (max((arr_1 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned long long int) max(((+(((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 3] [i_0])) ? (((/* implicit */int) (short)31367)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))), (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))));
            var_15 = ((/* implicit */short) (-(((min((3295353127726600891LL), (arr_4 [i_0] [i_1] [i_1]))) + (((/* implicit */long long int) 945925767))))));
            arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1469519115)) && (((/* implicit */_Bool) 7376280128618313968ULL))));
        }
        for (long long int i_2 = 2; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned short)19848)), (66060288ULL))), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0] [i_2]))))))))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            arr_20 [i_5] [i_2 + 1] [i_3] [i_4] [i_5] = ((long long int) -2474736357490180409LL);
                            var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_3 [i_3] [i_3]) : (((/* implicit */unsigned long long int) -1910750153))))))) && (((/* implicit */_Bool) ((int) ((3088038978868377378LL) - (((/* implicit */long long int) 20))))))));
                        }
                    } 
                } 
            } 
        }
        var_18 = -3295353127726600891LL;
    }
    /* LoopNest 2 */
    for (int i_6 = 4; i_6 < 21; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 546594982)) ? (11070463945091237642ULL) : (((/* implicit */unsigned long long int) -3239246779447958919LL))));
                arr_27 [i_7] [i_6] [i_6 - 3] = ((/* implicit */long long int) arr_25 [i_6] [i_7]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    var_20 = ((/* implicit */int) arr_30 [i_6 - 4]);
                    var_21 = ((/* implicit */int) arr_25 [i_7] [i_8]);
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                    {
                        for (long long int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) (unsigned short)12);
                                arr_37 [i_6 - 1] [i_7] [i_8] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)0))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (short)30102)) ? (1937237214305148070LL) : (((/* implicit */long long int) 2118033408))));
                                arr_38 [i_6] [i_6] [i_6] [i_6 - 4] [i_6 - 4] [i_6 - 4] = arr_22 [i_6 - 3] [i_9 - 2];
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 18446744073709551606ULL))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                        {
                            arr_45 [i_12] [i_8] [i_7] [i_6] = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) (-2147483647 - 1))) / (9223372036854775807LL))));
                            var_25 = ((/* implicit */long long int) arr_28 [i_6] [i_7] [i_8] [i_11]);
                        }
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 2) /* same iter space */
                        {
                            var_26 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1910236292470634867LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 6980433866899317615ULL)) && (((/* implicit */_Bool) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_6])) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                            arr_49 [i_6] [i_7] [i_8] [i_7] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(23ULL)))) && (((/* implicit */_Bool) arr_34 [i_13] [i_11]))));
                        }
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_6 - 4] [i_6] [i_6 - 2] [i_6 - 2])) / (((/* implicit */int) (short)-31383))));
                            var_28 = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_28 [i_6] [i_6] [i_6] [i_6])))) ^ (((/* implicit */int) (short)-19369))));
                            arr_54 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] &= ((/* implicit */int) (+(arr_35 [i_6 - 3] [i_6 - 4] [i_6 - 4] [i_6] [i_6 - 4] [i_6 - 1])));
                            var_29 = ((/* implicit */int) min((var_29), ((+((+(((/* implicit */int) (unsigned short)19784))))))));
                            arr_55 [i_6] [i_7] [i_8] [i_11] [i_11] [i_14] &= ((/* implicit */unsigned long long int) arr_28 [i_6] [i_14] [i_8] [i_11]);
                        }
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) -463139270)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_6 + 1] [i_7] [i_8])) ? (arr_46 [i_6] [i_7] [i_7] [i_8] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))));
                        var_31 = ((((/* implicit */_Bool) ((int) -5857637431915368666LL))) ? (arr_21 [i_7] [i_7]) : (((/* implicit */long long int) ((-14176634) ^ (((/* implicit */int) (unsigned short)5))))));
                        var_32 = ((long long int) arr_24 [i_6 - 3] [i_6]);
                    }
                    for (int i_15 = 4; i_15 < 20; i_15 += 2) 
                    {
                        var_33 &= ((/* implicit */unsigned long long int) arr_31 [i_15] [i_8] [i_7]);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 2) 
                        {
                            arr_62 [i_6 - 2] [i_6] [i_7] [i_8] [i_15] [i_16] [i_16] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1083000514379478658ULL)) ? (7833882216001389195ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31358)))))) ? ((-(((/* implicit */int) (short)-6328)))) : (((/* implicit */int) ((short) 5857637431915368666LL))));
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 3047547989351981832LL)))))))));
                            arr_63 [i_15] [i_15] [i_15] [i_15 - 1] [i_15] [i_15] [i_15] = ((((long long int) 9223372036854775807LL)) ^ (((long long int) -3047547989351981833LL)));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) arr_59 [i_6] [i_7]))));
                        }
                    }
                    arr_64 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                }
                for (long long int i_17 = 0; i_17 < 22; i_17 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_18 = 3; i_18 < 19; i_18 += 1) 
                    {
                        arr_70 [i_6 - 3] [i_7] [i_17] [i_17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -819123851)) ? (((/* implicit */unsigned long long int) arr_69 [i_17] [i_7] [i_17] [i_18] [i_17] [i_18])) : (arr_33 [i_6] [i_17]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19784)))));
                        arr_71 [i_6 - 1] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) -1152921504606846976LL)) && (((/* implicit */_Bool) arr_44 [i_6 - 2] [i_18 - 2] [i_18] [i_18 + 1]))));
                    }
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                    {
                        var_36 &= ((int) max((-9157541875436450099LL), (arr_51 [i_7] [i_7] [i_7] [i_7] [i_7])));
                        var_37 = ((/* implicit */unsigned long long int) ((long long int) (-(arr_58 [i_6 - 4] [i_7] [i_17] [i_19] [i_19]))));
                        var_38 &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60480)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32754))) : (arr_60 [i_6 - 2] [i_7] [i_17] [i_17] [i_19])))) ? (-233633049159496675LL) : ((~(arr_51 [i_6] [i_7] [i_17] [i_6 - 2] [i_19]))))) / (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)60480)), (14945428773081394241ULL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-31356)) ^ (((/* implicit */int) arr_39 [i_6] [i_7] [i_19] [i_19]))))) : ((+(arr_40 [i_7]))))));
                        arr_75 [i_17] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 19920116)), (9075442595355218986LL)))) ? ((~(arr_58 [i_19] [i_17] [i_7] [i_7] [i_6 - 3]))) : (((2053607577) / (((/* implicit */int) (short)-32759)))))));
                    }
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                    {
                        var_39 = ((7630979534309785952LL) / (((((/* implicit */_Bool) -370492843784730732LL)) ? (min((arr_24 [i_7] [i_20]), (((/* implicit */long long int) arr_77 [i_17] [i_7] [i_17])))) : (min((((/* implicit */long long int) (short)-32757)), (-370492843784730732LL))))));
                        var_40 = (+(370492843784730732LL));
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_6] [i_7] [i_17]))))))))));
                        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((unsigned long long int) arr_47 [i_17] [i_6 - 4] [i_6] [i_6 - 1] [i_6 + 1])))));
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (+(((arr_46 [i_6 - 3] [i_6 - 4] [i_6 + 1] [i_6] [i_6 - 4]) ^ (arr_46 [i_6 - 2] [i_6 - 1] [i_6 - 3] [i_6] [i_6 - 1]))))))));
                    }
                    arr_79 [i_17] = arr_66 [i_7] [i_17];
                }
                var_44 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50663))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 601651062)))))) : (max((8823146454516175357LL), (((/* implicit */long long int) 2147483647))))))));
            }
        } 
    } 
    var_45 = (short)26773;
}
