/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25425
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) -1707818630)))))))) > (var_6)));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)21797))))) ? (max((var_2), (((/* implicit */long long int) arr_1 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)89)) << (((((/* implicit */int) (signed char)89)) - (67))))))));
        var_12 = (short)-21797;
        var_13 -= ((/* implicit */short) ((arr_0 [i_0] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4093857743299810180LL)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (_Bool)1))))) ? (max((8699981615505284021LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
    }
    for (long long int i_1 = 1; i_1 < 15; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) -1);
                        var_14 *= ((/* implicit */long long int) max((((max((-4908976084621806868LL), (((/* implicit */long long int) var_8)))) > (((/* implicit */long long int) 1015808)))), ((_Bool)1)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) -7LL);
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                arr_19 [i_6] [i_5] [i_5] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) -1015833)) ? (((/* implicit */unsigned long long int) (+(15LL)))) : (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32763))))))), (((/* implicit */unsigned long long int) (short)-9357))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    arr_23 [i_1] [i_1] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) (~(arr_10 [i_1] [i_1] [i_6] [i_1 - 1])))) ? (max((arr_21 [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_6] [i_6] [i_1] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) 1015808)))) || (((/* implicit */_Bool) (short)-21803)))))));
                    var_15 -= ((/* implicit */short) ((((/* implicit */int) ((10603184370773989232ULL) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-53)), (-1015809))))))) << (((max((((/* implicit */int) (short)21796)), (((((/* implicit */int) (short)-21797)) & (((/* implicit */int) var_4)))))) - (21784)))));
                }
            }
            for (int i_8 = 1; i_8 < 15; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */long long int) 2147483647ULL);
                            var_17 *= ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        {
                            arr_36 [i_1] [i_5] [i_8] [i_12] [i_11] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
                            var_18 *= ((/* implicit */signed char) arr_10 [i_8] [i_5] [12LL] [12LL]);
                        }
                    } 
                } 
            }
            for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_41 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned long long int) (short)-1)), (10603184370773989237ULL))), (((/* implicit */unsigned long long int) ((signed char) 0ULL)))))));
                var_19 *= max(((_Bool)1), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-4908976084621806868LL)))) && ((!(((/* implicit */_Bool) (short)21797)))))));
            }
            /* LoopSeq 3 */
            for (long long int i_14 = 2; i_14 < 15; i_14 += 3) /* same iter space */
            {
                var_20 = ((/* implicit */short) 459562763);
                /* LoopNest 2 */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) 1015786);
                            arr_49 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_14] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max(((short)-21797), (((/* implicit */short) (!(((/* implicit */_Bool) 2147483647)))))))), (var_6)));
                            arr_50 [i_1 + 1] [i_5] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))))));
                            arr_51 [i_1] [i_14] [i_14] [i_14] [i_16] = ((/* implicit */signed char) (_Bool)1);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_1), (7843559702935562408ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1 - 1])) ? (((/* implicit */int) arr_26 [i_1 - 1])) : (((/* implicit */int) (short)32767)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_14] [i_14 - 2] [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_14])))))));
                var_24 -= ((/* implicit */int) arr_3 [i_5] [i_14]);
            }
            for (long long int i_17 = 2; i_17 < 15; i_17 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_18 = 1; i_18 < 14; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 3) 
                    {
                        {
                            arr_59 [i_17] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) min((max((arr_21 [i_1] [i_5] [i_1 - 1] [i_18 - 1] [i_19 + 2] [i_19 + 1]), (((/* implicit */long long int) (signed char)-104)))), ((-(arr_21 [i_1 + 1] [i_1 + 1] [i_17 - 2] [i_17] [i_18 + 2] [i_19 - 2])))));
                            arr_60 [i_1] [i_17] [i_17] [i_17] [i_19] = arr_16 [i_1] [i_5] [i_17] [i_1];
                            arr_61 [i_1] [i_1 - 1] [i_1 - 1] [i_17] [(signed char)1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (short)-6690)) : (1073741792)));
                        }
                    } 
                } 
                arr_62 [i_1 + 1] [i_17] [i_1 - 1] = ((/* implicit */short) (_Bool)1);
            }
            for (long long int i_20 = 2; i_20 < 15; i_20 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_21 = 1; i_21 < 14; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 16; i_22 += 4) 
                    {
                        {
                            arr_71 [i_21] [i_5] [i_5] [i_21] [i_5] = ((/* implicit */unsigned long long int) var_9);
                            arr_72 [i_1] [i_5] [i_21] [i_21 + 1] [i_21] [i_22] = ((/* implicit */long long int) var_8);
                            var_25 -= ((/* implicit */signed char) arr_0 [i_1 - 1] [(short)9]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    for (unsigned short i_24 = 3; i_24 < 12; i_24 += 2) 
                    {
                        {
                            arr_78 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_5 [i_1] [i_1] [i_1]);
                            arr_79 [i_24] [i_23] [i_20] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((2147483647) << (((((-4908976084621806868LL) + (4908976084621806883LL))) - (15LL)))))) : (max((((/* implicit */unsigned long long int) (unsigned short)15460)), (0ULL)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_25 = 2; i_25 < 14; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 16; i_26 += 3) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_26 -= ((/* implicit */unsigned short) (unsigned char)0);
                            arr_89 [i_1] [i_1] [i_5] [i_26] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1722286504289064348ULL)) ? (arr_17 [i_5]) : (((/* implicit */long long int) arr_38 [i_26] [i_25 - 2] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5481904670969172995LL)) ? (-774015867) : (((/* implicit */int) (short)(-32767 - 1)))))) : ((+(arr_17 [i_27])))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 15; i_28 += 2) 
            {
                for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 1) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_80 [i_1 - 1] [i_5] [i_1 - 1] [i_29]))));
                        arr_96 [i_1] [i_1] [i_28] [i_28 - 1] [i_28 - 1] = ((/* implicit */unsigned char) ((max((arr_28 [i_28 + 1]), (arr_28 [i_28 + 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((-6041979072360029953LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-27378)))))))));
                        var_28 *= ((/* implicit */_Bool) -20LL);
                        arr_97 [i_1 + 1] [0LL] [i_28] [i_29] = (+(max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)134))))), ((-9223372036854775807LL - 1LL)))));
                        var_29 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)15)) + (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) -459562791)) ? (-554517970685917669LL) : (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_28 + 1] [i_29]))))))))));
                    }
                } 
            } 
        }
    }
}
