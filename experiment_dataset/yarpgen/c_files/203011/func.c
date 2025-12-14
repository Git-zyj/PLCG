/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203011
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
    var_17 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_12)))))))), (((32ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (((unsigned long long int) (~(var_7))))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */short) (((!(((/* implicit */_Bool) 32ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (var_9))) : (((/* implicit */unsigned long long int) ((int) var_11)))));
                        arr_12 [i_0] [i_1] [i_2 - 1] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) (signed char)(-127 - 1));
                        arr_13 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) 4090460353U)) || (((/* implicit */_Bool) 204506943U))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                var_20 = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) var_14)), (max((var_15), (var_0)))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_0] [i_4] [i_5] [(unsigned char)10] = ((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_1 + 1])) != (var_16)))));
                            var_21 |= ((/* implicit */long long int) (+(((/* implicit */int) ((((unsigned int) (signed char)-1)) <= (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_4] [i_6] [i_6] [i_4])) : (((/* implicit */int) var_14))))))))));
                            arr_23 [i_0] [i_1 + 1] [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned long long int) var_10))));
                            arr_24 [i_0] [i_0] [i_6] [(unsigned short)0] [i_5] [i_4] = ((/* implicit */unsigned char) var_3);
                            arr_25 [i_0] [i_1 - 1] [i_4] [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 511U)), ((-9223372036854775807LL - 1LL))))), (min((1728745025491010477ULL), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_0] = ((/* implicit */unsigned short) min((min((var_9), (((/* implicit */unsigned long long int) 2998023321162471089LL)))), (((/* implicit */unsigned long long int) max((var_0), (var_2))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(arr_29 [i_8] [i_7] [i_4] [i_1] [i_0]))))));
                            arr_31 [i_0] = var_2;
                        }
                    } 
                } 
            }
        }
        for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
        {
            arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))));
            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_3)))))), (923862727906386162LL)));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                arr_39 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                /* LoopNest 2 */
                for (unsigned int i_11 = 4; i_11 < 21; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 22; i_12 += 1) 
                    {
                        {
                            arr_45 [i_9] [i_10] [i_11] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-14))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), ((+(min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) var_0))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31398))) : (4285228630U)))), (11627466529663448ULL))))));
            }
            for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
            {
                arr_50 [i_0] = max((((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_9 - 1]))))), (((/* implicit */unsigned long long int) ((_Bool) var_1))));
                /* LoopSeq 1 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_26 -= ((/* implicit */unsigned char) var_0);
                    var_27 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) (~(max((4294966796U), (((/* implicit */unsigned int) (short)1324)))))))));
                }
                var_28 = ((/* implicit */unsigned long long int) var_13);
            }
            arr_53 [i_0] [i_0] = ((/* implicit */signed char) arr_44 [i_0] [i_0] [i_0] [i_0] [i_0]);
        }
        /* LoopNest 3 */
        for (unsigned int i_15 = 2; i_15 < 21; i_15 += 2) 
        {
            for (unsigned short i_16 = 2; i_16 < 21; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    {
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) 18435116607179888176ULL))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_60 [i_15] [i_16] [i_15] [i_0])) ? (((/* implicit */int) var_11)) : (min((var_16), (((/* implicit */int) var_14))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1324))) : (204506940U))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 4) /* same iter space */
                        {
                            arr_64 [i_15] [i_0] [16ULL] [i_15] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_13);
                            arr_65 [i_0] [i_0] [i_15] [i_17] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)9))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
                        {
                            arr_69 [i_0] [i_0] [i_16 - 2] [i_17] [i_19] = ((/* implicit */signed char) var_13);
                            arr_70 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_16 + 1]))));
                            arr_71 [i_0] [i_15] [i_0] [i_17] [i_19] = ((((/* implicit */_Bool) min((4285228630U), (((/* implicit */unsigned int) (short)-26638))))) ? (((/* implicit */long long int) (-(1046824176U)))) : (min((((/* implicit */long long int) var_8)), (var_0))));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) /* same iter space */
                        {
                            var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((var_15) == (((/* implicit */long long int) var_13)))))))) && (((/* implicit */_Bool) max((1046824160U), (arr_5 [i_20] [i_15] [i_20]))))));
                            arr_74 [i_0] [i_20] [i_15] [i_16] [i_17] [i_20] &= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1))));
                            arr_75 [i_0] [i_15] [i_15] [i_15] [i_0] [i_0] = min((min((((/* implicit */signed char) var_4)), (arr_20 [i_15 - 1] [i_16 - 1] [i_16 - 1] [i_16 - 2] [i_17]))), (((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_8))))));
                            var_33 += ((/* implicit */unsigned char) min((1046824173U), (4090460329U)));
                        }
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) var_13))));
    }
}
