/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199689
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
    var_16 |= ((/* implicit */signed char) (+(-6661417678665889503LL)));
    var_17 = ((/* implicit */long long int) max(((-((~(((/* implicit */int) var_15)))))), (var_1)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [(_Bool)1] = ((/* implicit */long long int) ((unsigned long long int) arr_2 [i_0]));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 -= (-(18U));
            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((-678783163) + (678783165))))))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) != (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_2 [i_1])) : (var_1)))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((unsigned long long int) 2120320198)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((var_7) + (157196957)))))));
            var_21 = ((/* implicit */unsigned int) ((signed char) 678783179));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0]))));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)61))) * (var_4)))) != (((((/* implicit */_Bool) 12444632323041246875ULL)) ? (((/* implicit */long long int) 2102730863U)) : (3042154127059180774LL))))))));
        }
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_16 [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) 8936830510563328LL);
            var_24 ^= ((((/* implicit */_Bool) (unsigned short)65512)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56))) : (6002111750668304723ULL));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0])) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)11)))) - (96))))))));
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                arr_19 [i_0] [i_4] [0ULL] = ((/* implicit */unsigned short) ((6002111750668304740ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-10))))));
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_4] [i_4])))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) ((((var_11) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65534)))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)-117)) <= (((/* implicit */int) (signed char)-42)))))));
                arr_22 [i_0] [i_4] [i_4] [(unsigned char)13] = ((long long int) ((unsigned short) (signed char)61));
            }
            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                var_28 ^= ((/* implicit */unsigned int) (_Bool)0);
                var_29 *= ((/* implicit */short) ((((/* implicit */int) arr_13 [i_7] [i_7] [i_7])) * (((/* implicit */int) ((unsigned short) (unsigned char)0)))));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_33 [i_0] [i_4] [i_8] [i_9] [i_10] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 6002111750668304723ULL)) ? (((/* implicit */int) arr_24 [i_10] [i_4] [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_4]))))));
                        var_30 -= ((/* implicit */_Bool) 4294967290U);
                    }
                    for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_31 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_28 [i_0] [i_0] [12U] [i_11]))));
                        var_32 = ((/* implicit */int) ((((((/* implicit */int) var_0)) == (((/* implicit */int) (signed char)-11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_8])))) : (-6047060196874514261LL)));
                    }
                    arr_36 [i_0] [(unsigned char)21] [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((737484272) + (((/* implicit */int) arr_11 [i_0] [i_4] [i_9]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */unsigned long long int) 2373629172U)) : (16891731258715507944ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4])))));
                        arr_40 [5ULL] [i_4] [i_4] [i_4] [(unsigned char)23] [i_4] [i_4] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [(short)0]);
                    }
                    var_34 = ((/* implicit */long long int) (signed char)-104);
                }
                for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
                {
                    var_35 = ((/* implicit */int) ((short) (~(-678783163))));
                    arr_43 [i_4] [i_4] = ((/* implicit */_Bool) var_13);
                    var_36 = ((/* implicit */unsigned long long int) max((var_36), (3637589268623428320ULL)));
                    var_37 += ((/* implicit */unsigned short) (-(var_1)));
                }
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_38 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) 1995729624)) : (-2203471533398784859LL))));
                    arr_47 [i_0] [i_0] [i_4] [i_4] [1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) * (arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_0] [i_4] [i_8])) <= (((/* implicit */int) arr_24 [i_0] [i_4] [i_14])))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        arr_51 [i_4] [i_14] [i_14] [i_8] [i_4] [i_4] = ((/* implicit */_Bool) arr_8 [i_4] [i_4]);
                        var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) 678783162))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_56 [i_16] [i_16] [i_16] [i_4] [i_4] [i_8] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_0] [i_4] [i_8] [21U] [(unsigned short)9] [i_4])) || (((/* implicit */_Bool) var_2))));
                        var_41 += ((/* implicit */unsigned long long int) (+((-2147483647 - 1))));
                        var_42 = ((/* implicit */signed char) arr_49 [i_0] [i_4] [i_4] [i_14] [i_16] [i_16]);
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) -678783163))));
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) var_5))));
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_45 *= ((/* implicit */_Bool) ((unsigned char) arr_58 [i_0] [i_0] [i_8] [i_14] [i_8]));
                        var_46 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2192236432U)) ? (((/* implicit */int) arr_24 [i_17] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))) | (((arr_27 [i_4]) % (((/* implicit */unsigned long long int) 2102730864U))))));
                    }
                }
                var_47 = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0]);
                var_48 = ((/* implicit */short) ((long long int) arr_44 [i_4] [21ULL] [i_4]));
            }
        }
    }
}
