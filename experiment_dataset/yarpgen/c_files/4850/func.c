/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4850
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
    var_12 = ((/* implicit */unsigned short) var_5);
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)65535)), ((~((~(((/* implicit */int) var_4))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_5))));
        var_14 = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-10430)) ? (-5537097297376212732LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60595)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)-10448))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            arr_6 [0U] [i_1] [i_1] = ((/* implicit */unsigned short) arr_4 [i_1 - 1]);
            arr_7 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))));
            arr_8 [i_1] = (+(-9223372036854775806LL));
        }
        for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            arr_12 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) arr_11 [i_2] [i_2]);
            var_15 = ((/* implicit */int) ((arr_5 [(signed char)4]) <= (-627525442881277903LL)));
        }
    }
    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_11 [i_3 + 1] [i_3 + 2]);
                    var_17 = ((/* implicit */unsigned long long int) (unsigned short)62459);
                    arr_23 [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((32767LL) / (arr_16 [i_3])))) ? (max((arr_16 [i_3]), (((/* implicit */long long int) (unsigned short)3077)))) : ((~(5951129289888290274LL))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                var_18 = ((/* implicit */unsigned long long int) (+(-627525442881277903LL)));
                arr_31 [i_7] = ((/* implicit */unsigned long long int) var_6);
                var_19 += ((/* implicit */unsigned short) var_7);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3 + 2] [i_3 + 2])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54611)))));
            }
            var_21 -= ((/* implicit */short) (-(((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_29 [(unsigned char)1] [i_3] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)20)))) : ((+(((/* implicit */int) (_Bool)1))))))));
            arr_32 [(unsigned char)7] = ((/* implicit */short) var_9);
        }
        /* vectorizable */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_8])) ? (var_6) : (((/* implicit */long long int) 524287U))));
            var_23 = ((/* implicit */unsigned short) ((arr_13 [i_3 - 2] [i_3]) << (((((/* implicit */int) (short)10447)) - (10425)))));
            /* LoopNest 2 */
            for (unsigned int i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                for (short i_10 = 2; i_10 < 13; i_10 += 2) 
                {
                    {
                        arr_44 [i_9] [i_9] [i_8] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) arr_11 [i_3] [i_3]);
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)128)) << (((((/* implicit */int) (unsigned short)65500)) - (65500)))));
                    }
                } 
            } 
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 2078133338U))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_12 = 2; i_12 < 13; i_12 += 3) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned int i_14 = 2; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1697361172U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)63551))) : (268435455LL)));
                            arr_60 [i_3] [i_13] [i_3] [0U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_10))) : ((-(11129034697363771346ULL)))));
                            var_27 = ((/* implicit */long long int) arr_58 [i_3]);
                            var_28 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)3076))));
                            var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 490053958U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_46 [i_11]))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) >> (((arr_37 [i_3] [i_3] [i_3]) - (1491260409U))))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) << (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) 2402540522U)) : (arr_27 [i_3 + 1] [i_3 + 1] [i_3])));
        }
    }
    /* LoopNest 3 */
    for (unsigned int i_15 = 2; i_15 < 9; i_15 += 3) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned int i_17 = 1; i_17 < 10; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_31 *= ((/* implicit */int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_55 [(short)10] [i_15] [i_17 + 2] [i_15 - 1] [i_15]))))), (min((arr_28 [i_17 + 2] [i_15] [i_16] [i_15]), (((/* implicit */unsigned int) var_3))))));
                                var_32 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-13)), (arr_65 [i_16] [i_18] [i_16])))))))) + (max((min((((/* implicit */long long int) arr_56 [(unsigned short)2] [i_17] [i_16] [i_19])), (arr_16 [i_15]))), (((/* implicit */long long int) ((short) (short)13)))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) (unsigned short)15360);
                    var_34 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_15 [i_15 - 1])))), (((((/* implicit */_Bool) arr_19 [i_15 - 1] [i_15] [i_17 + 1])) ? (-4259437292412230247LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_15 - 1] [(_Bool)1] [i_17 + 1])))))));
                }
            } 
        } 
    } 
}
