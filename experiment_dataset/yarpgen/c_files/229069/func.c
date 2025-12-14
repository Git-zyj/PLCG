/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229069
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 + 1] [0ULL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50596))) : (var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_11 [i_4] [i_3 + 1] [i_1] [11] [i_1] [11] [i_0] = ((/* implicit */unsigned long long int) var_0);
                                var_10 = ((/* implicit */unsigned long long int) ((unsigned short) -2210566781029428344LL));
                                arr_12 [(unsigned char)0] [4] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) : (var_8)));
                                var_11 = ((/* implicit */unsigned short) 3352807975U);
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */int) ((short) -6271147080627823221LL))) : (((/* implicit */int) arr_0 [17U] [i_2]))));
                    arr_14 [18ULL] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 5039083771323233804ULL)) ? (((/* implicit */unsigned long long int) 1934378041632184381LL)) : (18446744073709551604ULL)));
                    var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)29208))));
                    /* LoopSeq 3 */
                    for (int i_5 = 3; i_5 < 18; i_5 += 3) 
                    {
                        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2566))) >= (arr_3 [i_0]))))));
                        var_14 = ((/* implicit */signed char) arr_9 [i_0 + 2] [i_1 - 1] [(short)10] [i_1 - 1] [i_5 - 3]);
                    }
                    for (int i_6 = 3; i_6 < 17; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (signed char)19);
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((long long int) arr_18 [i_0] [i_0] [i_0])))));
                        arr_19 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 2] [i_6 - 3]) >= (((/* implicit */unsigned int) arr_17 [i_0 + 3] [i_1 + 2]))));
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_5))));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                    {
                        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_7 - 3] [i_1] [i_1] [i_7 - 3] [i_0 - 2]) : (arr_9 [i_7 + 2] [i_0] [i_7 + 2] [i_7 + 4] [i_0 - 2])));
                        var_19 += ((/* implicit */unsigned long long int) arr_18 [8] [i_0] [i_0]);
                        arr_23 [i_0 + 2] [i_1] [i_1] [i_7] [i_1] = ((/* implicit */unsigned int) (unsigned char)224);
                    }
                }
            } 
        } 
        arr_24 [i_0 + 1] = ((/* implicit */short) arr_21 [i_0] [i_0 - 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            for (unsigned short i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) (unsigned short)10401);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                    {
                        arr_31 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */short) ((signed char) arr_4 [i_0 + 3]));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17524203897718390051ULL)) ? (17524203897718390031ULL) : (((/* implicit */unsigned long long int) var_1))));
                    }
                    var_22 = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) var_5)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_11 = 2; i_11 < 16; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            var_23 = var_2;
            var_24 = var_0;
        }
        for (short i_13 = 4; i_13 < 15; i_13 += 3) 
        {
            var_25 = ((/* implicit */_Bool) var_2);
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 4; i_15 < 18; i_15 += 4) 
                {
                    {
                        arr_47 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 2] [i_14] [i_11 + 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 806061582))));
                        arr_48 [i_13] [i_13] = ((/* implicit */unsigned int) ((((var_3) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) - (85)))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */unsigned int) ((short) ((int) 18446744073709551604ULL)));
        /* LoopSeq 2 */
        for (int i_16 = 3; i_16 < 16; i_16 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) != (var_5))))));
            arr_51 [i_16] [i_11] = ((/* implicit */unsigned short) var_1);
            var_28 = ((/* implicit */int) var_2);
        }
        for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
        {
            var_29 -= ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_11 + 3]));
            arr_54 [i_11] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) >> (((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_11 + 1] [i_11] [i_11]))))) - (7856899318769257509LL)))));
            /* LoopSeq 1 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_30 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
                var_31 += ((/* implicit */unsigned short) ((arr_6 [i_11 + 3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_11 - 2])))));
            }
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3212))) : (((unsigned long long int) var_8))));
        }
    }
    /* vectorizable */
    for (signed char i_19 = 2; i_19 < 16; i_19 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */int) ((short) var_3));
        var_34 = ((/* implicit */unsigned long long int) arr_45 [i_19] [9U] [i_19 + 2] [i_19 + 3] [i_19 + 3]);
        var_35 = ((/* implicit */short) var_5);
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_19])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_19 - 1] [i_19 - 1]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_20 = 2; i_20 < 17; i_20 += 3) 
        {
            var_37 = ((/* implicit */unsigned int) arr_16 [i_19] [i_20] [i_20] [i_19] [i_19 + 3]);
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 17; i_21 += 1) 
            {
                for (int i_22 = 3; i_22 < 16; i_22 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_23 = 1; i_23 < 17; i_23 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned int) max((var_38), (var_0)));
                            var_39 = ((/* implicit */signed char) ((short) var_6));
                            var_40 = ((/* implicit */unsigned int) (unsigned short)32598);
                        }
                        for (int i_24 = 1; i_24 < 17; i_24 += 4) /* same iter space */
                        {
                            arr_76 [(short)9] [i_20] [i_21 + 2] [14U] [i_24 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_4) : (5614305497065559815ULL)));
                            var_41 ^= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-651)) : (((/* implicit */int) var_7))))) >= (var_1)));
                        }
                        var_42 = ((/* implicit */unsigned int) ((short) ((unsigned int) arr_39 [i_20] [i_21] [i_22 + 2])));
                        var_43 *= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)33))));
                        var_44 -= ((/* implicit */signed char) var_2);
                    }
                } 
            } 
        }
    }
    var_45 = min((((/* implicit */long long int) 699304905U)), (7LL));
    /* LoopSeq 1 */
    for (short i_25 = 4; i_25 < 23; i_25 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_26 = 0; i_26 < 25; i_26 += 3) 
        {
            var_46 = ((/* implicit */unsigned short) arr_77 [i_25 + 1] [i_25 + 1]);
            var_47 = ((unsigned short) arr_79 [10ULL]);
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2210566781029428333LL)) ? (((/* implicit */unsigned long long int) 2284790229U)) : (922540175991161583ULL)));
        }
        var_49 = ((/* implicit */unsigned short) var_1);
        arr_82 [i_25] = ((/* implicit */short) ((unsigned int) 922540175991161560ULL));
        var_50 = ((/* implicit */unsigned long long int) ((arr_79 [i_25]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)222)))));
        var_51 = (+(((int) arr_79 [i_25 + 1])));
    }
    /* LoopNest 2 */
    for (unsigned short i_27 = 1; i_27 < 17; i_27 += 3) 
    {
        for (short i_28 = 1; i_28 < 18; i_28 += 3) 
        {
            {
                var_52 = var_4;
                /* LoopNest 3 */
                for (short i_29 = 1; i_29 < 20; i_29 += 3) 
                {
                    for (_Bool i_30 = 0; i_30 < 0; i_30 += 1) 
                    {
                        for (unsigned int i_31 = 1; i_31 < 20; i_31 += 3) 
                        {
                            {
                                arr_95 [i_28] [11] [i_29] [i_28] [i_28] = ((/* implicit */_Bool) var_3);
                                var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) var_9)))))));
                            }
                        } 
                    } 
                } 
                var_54 = ((/* implicit */unsigned char) max((var_54), (((/* implicit */unsigned char) max((var_0), (var_8))))));
            }
        } 
    } 
}
