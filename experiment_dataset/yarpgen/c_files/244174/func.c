/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244174
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
    var_18 = (_Bool)0;
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [(unsigned char)9] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)184)) >> (((/* implicit */int) (_Bool)0))));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
        var_21 = (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) (_Bool)1)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_22 = ((/* implicit */long long int) var_0);
        arr_14 [i_3] = ((/* implicit */long long int) (_Bool)1);
        arr_15 [i_3] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_8 [22LL] [i_3] [22LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10)))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_7);
                            var_24 = ((/* implicit */unsigned int) (unsigned char)194);
                            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_2 [i_4])))))));
                            var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */short) max((arr_2 [i_7]), ((unsigned char)184)))), (min(((short)0), (((/* implicit */short) (_Bool)1))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 495842577U))))), (((((/* implicit */_Bool) (short)15)) ? (arr_25 [i_4] [i_5] [(unsigned char)7] [(unsigned char)7]) : (var_12)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)166)) ? (3799124728U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (495842585U)))))))));
                            var_28 = ((/* implicit */signed char) (unsigned char)198);
                            var_29 = ((/* implicit */short) arr_30 [i_5] [i_5]);
                            var_30 += ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) var_12))), (arr_30 [i_6] [i_9])));
                            arr_32 [i_4] [i_4] [i_6] [i_7] [2U] = (_Bool)1;
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned int) arr_30 [9LL] [i_10]);
                            arr_35 [i_4] [i_4] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)201)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4193280U)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) ((((((/* implicit */int) arr_24 [(unsigned char)10] [i_5] [(unsigned char)10] [i_11] [i_7])) >> (((((((/* implicit */_Bool) arr_25 [i_4] [i_5] [i_4] [i_7])) ? (((/* implicit */unsigned long long int) arr_21 [i_4] [i_5])) : (var_13))) - (8674378537940812608ULL))))) + (((/* implicit */int) (short)32767))));
                            arr_39 [i_11] [i_11] [i_6] [i_11] [i_4] = ((/* implicit */short) (signed char)0);
                            arr_40 [i_7] [i_6] [i_11] [i_11] [i_11] = arr_2 [(unsigned short)6];
                            arr_41 [i_4] [i_4] [i_6] [i_11] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_11 [i_4] [i_5]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_34 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)6)))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))) - (var_12))));
            /* LoopNest 3 */
            for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
            {
                for (unsigned char i_14 = 4; i_14 < 8; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 12; i_15 += 1) 
                    {
                        {
                            arr_52 [i_4] [i_14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95)))))) ? (((/* implicit */int) arr_31 [i_4] [i_12] [i_12] [i_4] [i_14] [i_15] [i_15])) : (((/* implicit */int) var_8))));
                            arr_53 [i_12] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) (_Bool)1);
                            var_35 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * ((+(((/* implicit */int) var_4))))));
                            var_36 = ((/* implicit */signed char) (_Bool)1);
                        }
                    } 
                } 
            } 
            arr_54 [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_12] [i_12])) : (((/* implicit */int) ((_Bool) var_15)))));
        }
        for (long long int i_16 = 2; i_16 < 11; i_16 += 1) 
        {
            var_37 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)27261)) + ((-(((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
            /* LoopNest 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    {
                        arr_63 [i_4] [i_16] [i_16] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_24 [i_4] [i_4] [i_17] [i_4] [i_18])), (min((((/* implicit */unsigned long long int) var_14)), (((var_10) >> (((/* implicit */int) arr_17 [i_17] [i_16 - 2]))))))));
                        var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_16)))))))) ? (((var_5) ^ (arr_48 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2]))) : (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 255U)) >= (18446744073709551608ULL))) ? (((/* implicit */int) min((var_0), ((short)27285)))) : ((+(((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_19 = 2; i_19 < 11; i_19 += 1) 
        {
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) var_17))));
            var_40 = ((/* implicit */_Bool) var_0);
            arr_66 [i_19] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned char)78)) / (((/* implicit */int) (_Bool)1))))));
        }
    }
    var_41 = ((/* implicit */long long int) (short)-25831);
    var_42 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((min((1317655159655242336ULL), (((/* implicit */unsigned long long int) var_1)))) < (var_13))))));
}
