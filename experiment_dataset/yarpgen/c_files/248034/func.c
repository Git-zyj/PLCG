/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248034
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_10 [i_0] [i_1] [7LL] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) arr_0 [i_1 - 2] [i_3 + 2])))));
                                var_15 = ((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_2] [i_3 - 2]);
                                var_16 &= (-(((/* implicit */int) (!(var_6)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (0U)));
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1LL))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) 33550336)) ? (((/* implicit */long long int) -33550337)) : (287667426198290432LL)));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 33550359)) != (var_2))))) >= (arr_4 [i_1] [i_1 - 1] [i_1 + 2])));
                        var_22 = ((/* implicit */_Bool) (-(var_10)));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-6)), (-33550347))))));
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (33550330) : (33550304))));
                    }
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (~(-33550305))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = (((~(arr_19 [i_8]))) + (((/* implicit */unsigned long long int) arr_20 [i_8])));
        var_28 = ((/* implicit */unsigned long long int) ((((33550326) & (((/* implicit */int) (signed char)-117)))) & (((int) -33550294))));
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    {
                        var_29 |= ((/* implicit */short) ((((/* implicit */_Bool) -33550287)) ? (-33550347) : (33550330)));
                        arr_30 [i_8] [i_11] [i_9] [i_11] [i_8] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) 33550314)))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-33550347)))) ? (((/* implicit */unsigned long long int) (-(9223372036854775807LL)))) : (((unsigned long long int) arr_13 [i_12] [i_12] [i_12] [i_12]))));
        /* LoopSeq 3 */
        for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_35 [i_12] [i_12] = ((/* implicit */_Bool) min((33550347), (33550304)));
            var_31 = ((/* implicit */_Bool) var_0);
            var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) 33550347))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_12] [i_13]))) ? ((~(-33550304))) : (min((((/* implicit */int) (_Bool)1)), (2147483642)))));
        }
        for (signed char i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            var_34 = ((/* implicit */signed char) max((1015808LL), (((/* implicit */long long int) 33550336))));
            var_35 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) -33550305)), (4294967295U)));
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) -33550362)) ? (-288230376151711744LL) : (((/* implicit */long long int) 132120576))));
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                for (long long int i_17 = 1; i_17 < 7; i_17 += 3) 
                {
                    {
                        var_37 = (-(arr_6 [i_12] [i_15] [i_17 + 3] [5ULL]));
                        /* LoopSeq 3 */
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned int) 134216704);
                            var_39 = ((/* implicit */short) ((2147483646) * (((/* implicit */int) (!(((/* implicit */_Bool) 402653184)))))));
                            var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                            var_41 |= ((/* implicit */long long int) ((var_7) | (arr_45 [i_18] [i_17])));
                        }
                        for (unsigned long long int i_19 = 2; i_19 < 7; i_19 += 3) /* same iter space */
                        {
                            var_42 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_19 + 3] [i_17 + 3] [i_17 + 1] [3] [1U] [i_15]))));
                            var_43 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_12] [i_15] [i_16] [6ULL])) ? (1015809LL) : (((/* implicit */long long int) arr_41 [7LL] [i_15]))))));
                            var_44 = ((/* implicit */signed char) 33550320);
                            var_45 = ((/* implicit */long long int) 33550271);
                            var_46 -= ((/* implicit */short) 0U);
                        }
                        for (unsigned long long int i_20 = 2; i_20 < 7; i_20 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned int) var_14);
                            arr_50 [i_20 + 2] [i_20] [i_17 + 2] [i_16] [(_Bool)1] [i_20] [(_Bool)1] = ((/* implicit */_Bool) (short)3968);
                        }
                        var_48 |= ((/* implicit */unsigned long long int) arr_27 [i_15] [i_16] [i_17 + 2] [i_17] [i_17 + 1]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_21 = 1; i_21 < 7; i_21 += 1) 
            {
                var_49 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 33550321)) ^ (2269814212194729984ULL)));
                /* LoopSeq 1 */
                for (short i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 4) 
                    {
                        var_50 = ((/* implicit */short) ((((/* implicit */_Bool) -2147483642)) ? (((/* implicit */int) (_Bool)1)) : (arr_14 [i_12] [i_15] [8U] [i_21] [i_22] [i_23])));
                        var_51 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) 33550286))));
                        var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_21] [i_21 + 1] [i_21 - 1] [i_23])) ? (arr_28 [i_21 + 2] [i_21 - 1] [i_21 + 3] [i_21 + 1]) : (arr_28 [i_12] [i_21] [i_21 - 1] [0])));
                    }
                    for (unsigned int i_24 = 0; i_24 < 10; i_24 += 4) 
                    {
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0LL)) ? (0U) : (((/* implicit */unsigned int) 33550273))));
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0))))) : (arr_26 [i_15] [i_21 + 2] [i_21 + 2] [i_21 + 2])));
                    }
                    var_55 = ((/* implicit */int) (-(var_9)));
                }
                var_56 &= ((/* implicit */int) ((_Bool) ((unsigned long long int) arr_11 [i_21] [i_12] [i_12])));
            }
        }
        var_57 += ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) max((-2147483642), (((/* implicit */int) (_Bool)1))))) + (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) - (var_12))))) + (((/* implicit */unsigned int) (-(-33550305))))));
        var_58 = max((((((/* implicit */int) arr_33 [i_12] [i_12] [i_12])) ^ (((/* implicit */int) arr_33 [i_12] [i_12] [i_12])))), (((/* implicit */int) min((arr_33 [i_12] [i_12] [i_12]), (arr_33 [i_12] [0] [i_12])))));
    }
}
