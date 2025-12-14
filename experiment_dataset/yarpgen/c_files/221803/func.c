/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221803
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-37)) < (-356970913)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((unsigned short) arr_3 [i_0] [i_1] [i_2]));
                        arr_12 [i_0] [i_1] [i_2] [6U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_2] [i_3])) ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : (arr_5 [i_1] [i_1] [i_1] [i_1])));
                        arr_13 [i_1] = ((/* implicit */int) ((4079976249802816809LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((653508750712108626LL) - (((/* implicit */long long int) 579844981U))))));
                    }
                } 
            } 
            arr_14 [i_1] [i_1] [i_0] = ((/* implicit */int) var_13);
            var_21 = -265788033;
            arr_15 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 265788033)) ? (((/* implicit */int) arr_4 [19ULL])) : (((/* implicit */int) var_15))))) : (arr_5 [i_0] [i_1] [i_1] [i_1])));
            var_22 = ((/* implicit */unsigned long long int) ((short) (signed char)36));
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        arr_24 [i_0] [i_4] = ((/* implicit */unsigned short) arr_4 [i_0]);
                        arr_25 [i_0] [i_6] [i_4] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((-356970913) + (356970924)))))) < (((var_5) ^ (((/* implicit */long long int) arr_19 [i_4]))))))) == (((((var_8) / (arr_20 [i_4] [i_4] [i_5] [i_6]))) - (((((/* implicit */int) var_11)) >> (((-356970913) + (356970942)))))))));
                        arr_26 [i_6] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_4])) + (((/* implicit */int) arr_1 [i_0]))))) + (max((-653508750712108626LL), (((/* implicit */long long int) var_0))))));
                        arr_27 [i_0] [i_0] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [(unsigned char)8] [i_5] [i_6] [i_6] [i_0])) ^ (((/* implicit */int) var_16))))), (min(((+(arr_5 [i_6] [i_5] [i_4] [i_0]))), (((/* implicit */long long int) ((unsigned int) -1394028135)))))));
                        var_23 = arr_9 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
                    }
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) arr_7 [i_0] [i_4] [i_5] [i_4]))));
                        var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_7] [i_4] [i_0]))) : (3211691477U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_4] [11] [i_5] [i_5] [i_7])) && (((/* implicit */_Bool) arr_3 [i_0] [i_4] [i_5]))))) : (((((/* implicit */_Bool) 3626360587425120295LL)) ? (((/* implicit */int) arr_3 [i_0] [i_5] [i_7])) : (((/* implicit */int) arr_9 [i_0] [i_4] [i_4] [i_4] [(unsigned short)1] [i_7]))))))));
                        arr_30 [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_0])) : (var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_5])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_0 [i_0])))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_16))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (long long int i_8 = 1; i_8 < 20; i_8 += 1) 
                        {
                            var_27 ^= ((/* implicit */signed char) var_5);
                            arr_35 [i_0] [i_0] [i_4] [i_7] [i_8] = ((/* implicit */_Bool) -1571038601);
                            arr_36 [i_0] [i_4] [i_4] [i_5] [i_7] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_8 + 1] [i_8 + 1] [i_8] [i_0] [i_8 + 1])) ? (((((/* implicit */_Bool) -332125699)) ? (((/* implicit */unsigned int) 356970913)) : (1992136459U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                            arr_37 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */int) ((var_18) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))));
                        }
                        for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_28 = ((/* implicit */int) var_5);
                            var_29 = arr_3 [i_0] [i_0] [i_0];
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) (-(((arr_38 [i_0] [i_4] [i_4] [i_0] [i_7] [i_7] [i_4]) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)-115)))))))));
                        }
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_45 [i_0] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned char) ((arr_41 [i_0] [i_0] [i_4] [i_4] [i_5] [i_0] [i_10]) ? (max((2808341952U), (((1073741823U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_4] [i_5] [i_7] [i_10]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((653508750712108626LL) < (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_4] [i_10])))))))))));
                            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)114))));
                        }
                    }
                    var_32 = ((/* implicit */unsigned char) var_17);
                }
            } 
        } 
        arr_46 [(unsigned char)17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536805376)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-77))) : (653508750712108625LL)))) ? (((/* implicit */int) min((((unsigned char) var_11)), (((/* implicit */unsigned char) ((var_13) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-115))))))))) : (((((/* implicit */_Bool) 3626360587425120295LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(signed char)16]))))) : (((((/* implicit */_Bool) (signed char)92)) ? (1837003652) : (268435424))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((12504618463070540178ULL) - (((/* implicit */unsigned long long int) 2808341952U)))))));
                var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_28 [i_11] [i_11] [i_11] [i_12] [i_12])) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_12] [i_12] [i_12]))))));
                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)-121))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12250))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) -653508750712108626LL)) : (5942125610639011438ULL)))))) || (((/* implicit */_Bool) arr_19 [i_11]))));
            }
        } 
    } 
}
