/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52210
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2]))));
                    arr_9 [(_Bool)1] [i_1] [(signed char)14] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)50952))));
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) var_5);
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_16 *= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)-29162))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)4))))));
            arr_13 [i_3] [i_3] = (unsigned char)101;
            var_17 -= ((/* implicit */unsigned short) arr_4 [6ULL] [4ULL] [6ULL]);
            var_18 -= ((/* implicit */int) var_5);
        }
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
    {
        var_19 *= var_1;
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_21 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)240)) ? (938046457) : (((/* implicit */int) (_Bool)1))))));
            arr_21 [i_6 + 2] [i_5] = ((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_19 [(unsigned char)0] [i_6 - 2] [i_6 + 3]) : (((/* implicit */int) arr_6 [i_6 + 2] [i_6 - 1]))));
        }
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 1) /* same iter space */
        {
            arr_24 [i_5] [i_7] [(unsigned char)2] = 1461951434U;
            arr_25 [i_7] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26475))) : (1545939794U)));
            arr_26 [i_5] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7 - 2] [i_7 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-8749))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)47))))))) : (((/* implicit */int) ((short) (_Bool)1))));
            var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-119)))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) arr_23 [i_5]))));
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_16 [i_5]))));
                        arr_34 [i_9] [i_10] [12U] [(signed char)5] [i_8] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((int) 164098237)))))));
                        var_24 = ((/* implicit */int) var_13);
                        /* LoopSeq 2 */
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -853776543)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_11] [i_8] [i_5])) ? (((/* implicit */int) var_8)) : (var_2)))) : (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) -287778673)) : (4294967295U)))));
                            arr_38 [i_5] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned short) -1542062614);
                            arr_39 [i_9] [i_8] = ((/* implicit */unsigned int) arr_17 [(short)3]);
                            var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [13ULL] [i_11])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)16931)) : (((/* implicit */int) (unsigned char)76))))) ? (((/* implicit */int) ((unsigned char) -833038023))) : (((/* implicit */int) (short)-2641))))) : (((unsigned long long int) var_11))));
                            arr_40 [i_5] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */_Bool) var_4);
                        }
                        for (signed char i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                        {
                            var_27 -= ((/* implicit */unsigned int) var_5);
                            var_28 = ((/* implicit */unsigned int) ((signed char) (signed char)95));
                            arr_44 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)115))) : (6345705561029067982ULL)))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_5))))));
                        }
                        var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_5] [i_8] [i_8] [i_8] [i_9] [i_9] [i_10]))))) ? (((/* implicit */int) ((unsigned char) var_6))) : (((/* implicit */int) arr_33 [i_10] [i_10] [i_9] [(short)8]))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                arr_47 [i_5] [i_8] [i_13] = ((/* implicit */unsigned int) 8388607);
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_20 [19U] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_22 [i_5] [i_5])));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_31 -= ((/* implicit */short) max((((/* implicit */unsigned int) (unsigned char)144)), (2580549395U)));
                    var_32 = ((/* implicit */short) 26U);
                }
                var_33 = ((/* implicit */unsigned int) var_10);
                var_34 = ((/* implicit */unsigned int) ((signed char) (-(-1581938024))));
            }
            for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    var_35 = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_5 [i_5]))))))) : (((((/* implicit */_Bool) arr_37 [i_5] [16U] [i_15] [i_5] [i_5] [16U] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (737227550U)))));
                        arr_57 [i_5] [i_8] [i_15] [i_16] [i_8] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)896))))) ? (((/* implicit */unsigned int) ((int) arr_28 [i_17] [i_8]))) : (((((/* implicit */_Bool) var_13)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [i_8])))))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((_Bool) (unsigned char)156)))));
                        var_38 *= ((/* implicit */unsigned int) var_6);
                    }
                }
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_20 [i_5] [i_5] [1])))) ? (-6885027732127175851LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_46 [i_5] [(unsigned char)3])))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)64448)))))))));
                var_40 = ((/* implicit */unsigned char) 12408709353181732592ULL);
                /* LoopNest 2 */
                for (unsigned char i_18 = 1; i_18 < 20; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                    {
                        {
                            arr_63 [i_18] [i_8] [i_15] [i_8] [i_15] = ((/* implicit */signed char) arr_45 [i_15] [i_18 - 1]);
                            arr_64 [i_15] [i_8] [i_15] [5ULL] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)126))))))) ? (((/* implicit */int) arr_60 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_19] [i_19] [i_19])) : ((~(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned char) arr_61 [i_5] [i_15]);
            }
            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (2147483647) : (var_2)))) ? (arr_4 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225)))))))))));
        }
        var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_56 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))));
        arr_65 [i_5] [i_5] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) (short)-30731)) ? (-563231821) : (((/* implicit */int) var_0))))));
        arr_66 [i_5] = ((/* implicit */unsigned char) var_5);
    }
    var_44 = ((/* implicit */int) (unsigned char)59);
    var_45 = ((/* implicit */int) (unsigned char)65);
}
