/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26596
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) (-((+(4602652927873019353LL)))));
                    var_14 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4798281239850362811LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4424138850094840701LL)) ? (-6889759723732758571LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                    var_15 = ((((/* implicit */int) (unsigned char)17)) & (((/* implicit */int) (_Bool)0)));
                }
                var_16 = ((/* implicit */unsigned long long int) (unsigned char)236);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) (unsigned short)2479);
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        for (signed char i_7 = 1; i_7 < 22; i_7 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((int) -8985853047932441914LL));
                                var_21 = (unsigned short)30974;
                                var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((long long int) ((((var_4) + (9223372036854775807LL))) >> (((var_8) - (1890825389))))))), (((arr_17 [(signed char)2] [(_Bool)1] [i_6] [i_7]) ? ((~(11115387541144484361ULL))) : (min((arr_15 [i_3] [i_6] [i_3] [i_3]), (var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_23 &= ((/* implicit */int) ((long long int) ((553197071) ^ (((((/* implicit */int) (_Bool)0)) >> (((987556685U) - (987556672U))))))));
        var_24 = ((/* implicit */long long int) arr_19 [17]);
        /* LoopSeq 1 */
        for (int i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 24; i_9 += 4) 
            {
                var_25 = ((/* implicit */int) (unsigned short)30974);
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 1; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        var_26 = ((short) -4920567927325162654LL);
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((int) ((signed char) arr_13 [i_8] [i_9]))))));
                        var_28 = ((unsigned char) arr_22 [i_10]);
                        var_29 = ((/* implicit */long long int) ((_Bool) (_Bool)1));
                        var_30 = 2731745780U;
                    }
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */int) (((-(var_8))) < (((/* implicit */int) arr_14 [i_3] [i_3] [i_10] [(signed char)2]))));
                        var_32 = ((/* implicit */signed char) arr_29 [(_Bool)1] [i_8] [(_Bool)1] [i_10] [i_12 + 1] [i_8] [i_8]);
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_3]) | (((/* implicit */unsigned int) var_8))))) ? (3605374762971319274LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)20] [i_9] [i_8] [i_3])))));
                    var_34 = (~(((/* implicit */int) ((short) arr_25 [i_8] [i_8] [i_10]))));
                }
                /* LoopNest 2 */
                for (int i_13 = 3; i_13 < 22; i_13 += 2) 
                {
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */short) (-(((/* implicit */int) (short)11501))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_26 [i_3] [i_8] [i_3]))))) * (((int) var_9))));
                            var_37 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_3)) ? (arr_31 [i_3] [i_3] [i_13] [i_14]) : (2649083087U))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (short i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_38 &= (!(((/* implicit */_Bool) (-(var_10)))));
                var_39 = ((/* implicit */int) ((short) ((unsigned char) (_Bool)1)));
            }
            var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4920567927325162682LL)) ? (((/* implicit */long long int) -94373325)) : (-3173874809045105582LL)));
            var_41 = ((/* implicit */signed char) arr_18 [i_8] [i_8] [i_3] [i_3] [i_3]);
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */int) (~(((((((/* implicit */unsigned long long int) arr_46 [i_3] [i_3] [i_3] [6ULL] [i_3] [19])) + (var_9))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_18] [i_3] [i_3] [i_3])) ? (13500525075785465LL) : (-9143872447961738440LL))))))));
                            var_43 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)34141)), (((var_7) ^ (((/* implicit */unsigned long long int) 609260716U))))));
                            var_44 += ((/* implicit */short) arr_31 [i_3] [i_3] [i_3] [3]);
                        }
                    } 
                } 
                var_45 = ((/* implicit */int) ((short) var_3));
                var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) ((((/* implicit */int) (short)-14832)) ^ (((/* implicit */int) (short)-7395))))))));
                var_47 = ((/* implicit */short) arr_39 [i_3] [(short)19] [i_16] [i_8]);
                var_48 = ((/* implicit */signed char) (+(((unsigned int) ((long long int) (signed char)-5)))));
            }
            var_49 = ((/* implicit */unsigned short) (!((!(((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_3] [i_3] [i_3] [i_3] [12U])))))))));
        }
    }
}
