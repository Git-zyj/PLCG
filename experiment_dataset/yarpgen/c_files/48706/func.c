/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48706
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) 2922842572U);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (+(arr_5 [i_3 + 4] [i_3 + 4])));
                                var_16 = ((/* implicit */short) var_6);
                                arr_16 [i_3] = ((/* implicit */long long int) var_6);
                            }
                        } 
                    } 
                    var_17 *= ((/* implicit */signed char) ((unsigned long long int) var_11));
                    var_18 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1]);
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) max((((/* implicit */short) arr_1 [i_5] [8])), (var_7)))) || ((!(((/* implicit */_Bool) var_10)))))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)8] [i_5])) ? (var_0) : (3310370084462144207ULL)))) ? ((-(13033676462685543765ULL))) : (13033676462685543765ULL)))) ? (((((/* implicit */_Bool) arr_21 [i_1] [i_5] [i_1] [11ULL])) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) : (min((3310370084462144212ULL), (((((/* implicit */_Bool) var_4)) ? (13033676462685543765ULL) : (3649780618852146866ULL)))))));
                                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (var_11) : (3310370084462144203ULL))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) ((3818877186668169705ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))), ((-(((/* implicit */int) (signed char)90)))))))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) (signed char)-97))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_6 + 1] [i_6] [i_6] [i_6 - 1])), (var_4)))))))));
                                arr_25 [i_7] [i_6] [i_5] [i_7] = ((min((min((var_2), (((/* implicit */unsigned long long int) var_8)))), (((((/* implicit */_Bool) arr_12 [i_0] [12ULL] [i_0] [6U] [12ULL] [12ULL])) ? (((/* implicit */unsigned long long int) 3334365254U)) : (var_0))))) | (((((/* implicit */_Bool) arr_23 [i_6] [i_1] [i_5] [i_6 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-83)) + (2147483647))) >> (((/* implicit */int) var_9))))) : (5413067611024007833ULL))));
                                var_23 = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 12; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 4) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_5] [i_8] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [7U] [i_9] [i_9 - 4] [i_8 - 1]))))) ^ (min((var_0), (((/* implicit */unsigned long long int) arr_8 [i_9 - 4] [i_9] [i_9 - 2] [i_8 - 1]))))));
                                arr_32 [8U] [i_1] [4U] [i_1] [i_9] = ((/* implicit */unsigned long long int) var_13);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1957776363115624503LL)), ((-(15136373989247407401ULL)))))) ? (arr_23 [i_9 + 2] [i_9] [i_9 - 4] [i_9 - 3] [i_8 + 1]) : (((/* implicit */unsigned int) ((int) var_7)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_9 [i_0] [i_1]), (var_7))), (arr_7 [i_5] [i_1])))) ? (((arr_10 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0]) % (arr_3 [i_0] [i_0] [i_0]))) : (1377714286U)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_12] [i_11] [(short)0] [(short)0])) ? (((((/* implicit */long long int) ((unsigned int) -1475796033))) * (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_14 [i_12] [i_1]))))) : (((/* implicit */long long int) var_12))));
                                arr_41 [i_0] [i_0] [i_0] [i_12] [i_0] [9U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) / (((((/* implicit */_Bool) ((arr_26 [i_0] [i_11] [i_1] [i_0]) / (var_0)))) ? (((/* implicit */unsigned long long int) arr_0 [i_10])) : (var_0)))));
                                var_27 = ((/* implicit */short) min((3310370084462144207ULL), (((/* implicit */unsigned long long int) -588065232))));
                                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) 2088960U))))) ? (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_0] [9U] [i_10] [i_11] [i_12 - 2])) != (var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1] [6ULL] [i_11] [i_12 + 2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 13; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) > (((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-32021)), (var_4)))) ^ (((var_11) + (((/* implicit */unsigned long long int) var_10))))))));
                                var_30 = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) arr_18 [i_0])), (min((((/* implicit */unsigned long long int) var_6)), (15136373989247407401ULL))))), (((/* implicit */unsigned long long int) ((arr_22 [i_0] [i_1] [i_10] [1U] [i_14]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -588065232)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) arr_12 [9ULL] [i_0] [9ULL] [i_1] [i_1] [i_1]))))), (min((10668663177883589482ULL), (var_2))))));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 4) 
                {
                    for (signed char i_16 = 3; i_16 < 9; i_16 += 2) 
                    {
                        {
                            var_32 *= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1475796033))))), (969140508953385837ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_13 [i_15 + 1] [i_15 - 2] [i_15 - 2] [i_0]))))));
                            var_33 = (-(((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) arr_3 [i_16 + 2] [i_16 - 3] [i_15 - 1])))));
                            var_34 = var_6;
                            /* LoopSeq 1 */
                            for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
                            {
                                arr_54 [i_0] [6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 1475796032)) : (max((max((((/* implicit */unsigned long long int) var_12)), (var_2))), (((/* implicit */unsigned long long int) 588065232))))));
                                var_35 *= ((/* implicit */unsigned long long int) (signed char)90);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_18 = 2; i_18 < 18; i_18 += 2) 
    {
        for (signed char i_19 = 2; i_19 < 18; i_19 += 4) 
        {
            for (signed char i_20 = 0; i_20 < 22; i_20 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        for (int i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            {
                                var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (var_11) : (15136373989247407373ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3038916641U)))))) : (var_10)))) && ((!(((/* implicit */_Bool) 281913080))))));
                                var_37 = ((/* implicit */long long int) var_5);
                            }
                        } 
                    } 
                    arr_68 [21] [12ULL] [i_19] [i_18] = ((((((/* implicit */unsigned int) ((int) var_12))) != (arr_59 [(short)17] [i_19] [i_19 + 1] [15LL]))) ? (((/* implicit */long long int) 1985603248)) : (((((/* implicit */_Bool) 1475796033)) ? (((((/* implicit */_Bool) arr_55 [i_19 + 4])) ? (var_8) : (var_8))) : (((/* implicit */long long int) -1475796033)))));
                    var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) 5953829560512547359ULL)) ? (((/* implicit */unsigned long long int) arr_65 [i_18] [i_18] [i_19] [i_20] [i_20])) : (var_2))) : (((/* implicit */unsigned long long int) arr_60 [i_19 + 2] [i_18] [i_18]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-80), ((signed char)-64))))) : (var_11));
                    var_39 = ((/* implicit */unsigned long long int) 2181584025U);
                }
            } 
        } 
    } 
}
