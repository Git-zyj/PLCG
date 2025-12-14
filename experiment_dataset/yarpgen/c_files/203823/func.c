/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203823
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
    var_12 = ((/* implicit */signed char) (-(var_3)));
    var_13 = ((/* implicit */_Bool) ((497198284U) << (((3797769011U) - (3797769002U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) arr_8 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                                var_15 = ((/* implicit */int) (-(3797769015U)));
                                var_16 = ((/* implicit */unsigned int) var_6);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned char)202)) << (((((/* implicit */int) arr_5 [i_0] [i_0])) - (16)))))));
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 497198273U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2]))) : (497198276U)))) ? ((+(((/* implicit */int) arr_5 [(unsigned short)12] [(unsigned short)12])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-77)))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)13858))))));
                        var_20 = ((/* implicit */int) ((unsigned long long int) (+(-974499974))));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (~(((((/* implicit */long long int) 86220824)) | (36028797017915392LL)))));
        var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        var_23 = ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 + 3]);
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            {
                var_24 -= ((/* implicit */int) arr_21 [20U] [22] [i_6]);
                var_25 = var_0;
                /* LoopNest 2 */
                for (unsigned short i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    for (unsigned int i_9 = 1; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) 497198271U);
                            /* LoopSeq 1 */
                            for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                            {
                                var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)51696)) ? (arr_23 [i_7] [i_7] [i_7 + 1] [i_7 + 1]) : (arr_23 [i_7] [i_7 + 2] [i_7 - 1] [i_7 + 2])))));
                                var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [0ULL] [(unsigned char)6] [14ULL]))))) ? (((/* implicit */unsigned int) var_3)) : (var_8)));
                            }
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-27)) ? (max((497198260U), (((/* implicit */unsigned int) arr_27 [i_6])))) : (3313191032U)));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_11 = 2; i_11 < 22; i_11 += 1) 
                {
                    var_30 = ((/* implicit */unsigned int) arr_18 [i_7] [i_6]);
                    var_31 = ((signed char) ((((/* implicit */_Bool) 497198271U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [6ULL] [i_7 + 2] [9U] [0ULL]))) : (var_10)));
                }
                for (unsigned int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)1)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned short) -1);
                                var_34 = ((/* implicit */unsigned long long int) (~((+((+(arr_38 [i_6] [i_7 + 4] [i_6] [i_6] [i_14])))))));
                            }
                        } 
                    } 
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 1) 
                {
                    var_35 |= ((/* implicit */unsigned char) arr_28 [i_15] [i_7] [4U] [i_7] [i_6] [4U] [i_6]);
                    var_36 = (_Bool)1;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_16 = 4; i_16 < 22; i_16 += 3) /* same iter space */
                    {
                        var_37 = var_7;
                        var_38 = ((/* implicit */int) arr_42 [i_7 + 4] [i_7 - 1] [i_16 - 4] [i_16 - 3]);
                        var_39 = ((/* implicit */short) 6104175969230143989ULL);
                    }
                    for (unsigned int i_17 = 4; i_17 < 22; i_17 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)104)) % (((/* implicit */int) (unsigned char)169))))) ? (((((/* implicit */_Bool) var_7)) ? (10279068168926725892ULL) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
                        var_41 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_39 [i_6] [i_6] [i_6] [i_6])) ? (arr_39 [i_6] [(unsigned short)13] [(unsigned short)15] [i_6]) : (arr_39 [i_6] [1ULL] [i_19] [i_6]))), (((/* implicit */unsigned long long int) ((_Bool) arr_16 [i_19 - 1])))));
                                var_43 = ((/* implicit */signed char) ((_Bool) ((((arr_49 [i_6] [(signed char)7] [i_19 - 1] [i_18] [i_19 + 2]) + (2147483647))) << (((614586723U) - (614586723U))))));
                                var_44 = ((/* implicit */unsigned short) max((-974499974), (((/* implicit */int) max((var_1), ((!(((/* implicit */_Bool) arr_26 [i_6] [(unsigned short)15] [i_7] [i_7] [i_7] [i_7])))))))));
                                var_45 = ((/* implicit */unsigned short) 497198262U);
                            }
                        } 
                    } 
                }
                var_46 = ((/* implicit */short) max((((((/* implicit */_Bool) ((var_4) / (((/* implicit */int) (signed char)-90))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_27 [i_6])) : (((/* implicit */int) (unsigned char)81)))) : (-974499974))), ((-(((((/* implicit */_Bool) (unsigned char)61)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)51710))))))));
            }
        } 
    } 
    var_47 = ((/* implicit */signed char) var_3);
}
