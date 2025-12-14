/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221186
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) var_6);
                                arr_12 [i_0 - 2] [i_1] [i_3] [i_1] = 162677062;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) arr_14 [i_0 + 1]);
                                var_15 = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_7)) ? (arr_27 [i_10] [(unsigned short)14] [i_8] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65507))))))));
                            arr_29 [6] [i_8] [i_10] [(_Bool)1] = ((/* implicit */unsigned short) ((var_12) - (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_10]))) - (9223372036854775790LL))))))));
                            var_17 = ((/* implicit */long long int) min((var_17), (arr_21 [i_8] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned char i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned char)200)) || (((/* implicit */_Bool) arr_20 [(unsigned short)8])))) ? (min((var_12), (((/* implicit */unsigned long long int) var_3)))) : (((unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)70)))))))));
                            var_19 = ((/* implicit */signed char) 0ULL);
                            arr_36 [i_11] [(unsigned char)12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-33)), (max(((unsigned char)101), (arr_18 [i_12 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 3) 
    {
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (int i_15 = 2; i_15 < 14; i_15 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 4; i_16 < 13; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                        {
                            {
                                arr_51 [i_17] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_18 [i_13]))))) / (min((-605387676328844732LL), (((/* implicit */long long int) arr_49 [i_15] [i_15]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) arr_7 [i_15 - 1] [i_15 - 2] [i_15 - 2] [i_15 + 1] [i_17])), (((((arr_1 [i_17]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned char)182)) - (154))))))));
                                arr_52 [i_17] [i_15 - 1] = ((/* implicit */unsigned long long int) (-(((int) arr_7 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 2] [i_17]))));
                                arr_53 [i_13] [10ULL] [i_13] [10ULL] [i_17] = ((/* implicit */unsigned char) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)29409)))) || ((!(((/* implicit */_Bool) (unsigned char)71)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        for (int i_19 = 0; i_19 < 15; i_19 += 3) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_13 + 2] [i_18] [i_13 + 1] [i_13 + 1])), ((unsigned short)29419)))), (arr_55 [i_13] [(_Bool)0] [i_13] [i_13])));
                                arr_60 [i_13 + 2] [i_14] [i_15 + 1] [i_18] [i_19] = ((/* implicit */signed char) ((625360941U) & (((/* implicit */unsigned int) min((min((2130946139), (((/* implicit */int) (unsigned short)58210)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-56)) : (((/* implicit */int) var_10)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        for (short i_21 = 0; i_21 < 15; i_21 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) var_13);
                                arr_66 [i_21] [i_21] = (((-(((/* implicit */int) arr_49 [i_15 - 1] [i_13 + 2])))) - (((/* implicit */int) (signed char)-64)));
                                arr_67 [i_21] [i_14] [i_14] = ((/* implicit */signed char) ((max((8052732842168946751ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) ^ (576460752303423488ULL))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                var_22 = arr_15 [i_21] [i_14] [i_14] [i_14];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 4) 
                    {
                        for (unsigned int i_23 = 4; i_23 < 14; i_23 += 3) 
                        {
                            {
                                arr_74 [i_23 - 4] [4ULL] [i_23] [i_14] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 162928233)) / (((((/* implicit */_Bool) arr_54 [i_13] [i_13] [6ULL] [6ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 2820467337U)), (arr_25 [i_13] [i_22])))) > (((((/* implicit */_Bool) arr_30 [i_23])) ? (var_0) : (((/* implicit */unsigned long long int) var_3))))))) : (((((/* implicit */int) (signed char)-71)) + (((((/* implicit */int) var_1)) * (((/* implicit */int) arr_15 [i_23] [i_23] [i_23 + 1] [i_23]))))))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)63))))))))));
                                arr_75 [i_22] [i_23] = ((/* implicit */unsigned char) min((var_7), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) arr_19 [i_14]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_24 = 3; i_24 < 18; i_24 += 2) 
    {
        for (signed char i_25 = 1; i_25 < 16; i_25 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_26 = 2; i_26 < 17; i_26 += 1) 
                {
                    for (int i_27 = 0; i_27 < 20; i_27 += 3) 
                    {
                        {
                            arr_88 [i_24 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24] = ((/* implicit */long long int) min((arr_9 [i_24] [i_24] [i_25] [i_25] [i_24 + 1] [i_24 + 1] [i_24]), (((((/* implicit */int) var_5)) == (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                            arr_89 [i_24] [i_24] [i_25 + 3] [i_26 + 1] [(signed char)14] [i_27] = ((/* implicit */short) (-(var_2)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    for (short i_29 = 2; i_29 < 18; i_29 += 4) 
                    {
                        {
                            var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) ? (((long long int) 3207010886997406622LL)) : (arr_85 [i_28])))) ? (((/* implicit */int) (unsigned short)36126)) : (((/* implicit */int) (unsigned char)113))));
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [18ULL] [18ULL] [4LL] [i_29])) > (((/* implicit */int) arr_2 [i_25 - 1]))))), (max((576460752303423488ULL), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_91 [i_24] [i_24] [i_24])))))));
                            arr_96 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_84 [i_24])) ? (min((max((var_2), (((/* implicit */long long int) (unsigned char)190)))), (arr_21 [i_29 - 1] [i_29 + 2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_24 - 1] [i_24 - 2]))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_30 = 1; i_30 < 17; i_30 += 4) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (int i_32 = 0; i_32 < 20; i_32 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */long long int) 1790997105U);
                                arr_106 [i_24 + 1] [i_24 + 1] [i_24] [(unsigned char)6] [19LL] = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) ((var_9) << (((315025117U) - (315025109U)))))), (min((((/* implicit */long long int) var_5)), (-605387676328844746LL)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_33 = 1; i_33 < 19; i_33 += 1) 
                {
                    for (unsigned short i_34 = 0; i_34 < 20; i_34 += 2) 
                    {
                        for (unsigned short i_35 = 0; i_35 < 20; i_35 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_24 + 2] [(unsigned char)0] [i_34]))) != (var_0))))) != (((((/* implicit */_Bool) var_4)) ? (576460752303423467ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_24 - 2] [(unsigned short)9] [i_34])))))));
                                var_28 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_98 [i_24 + 2] [i_24] [i_24 + 2]))));
                                var_29 = (+(((var_0) % (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)210), (arr_80 [i_24] [(unsigned char)18]))))))));
                                var_30 = ((/* implicit */int) ((var_9) << (((((((/* implicit */_Bool) (+(arr_25 [i_25] [i_33])))) ? (((arr_22 [i_35]) % (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) (+(((/* implicit */int) var_13))))))) + (100LL)))));
                                arr_113 [i_24] [i_24] [i_33 - 1] [11ULL] [i_24] [i_33 - 1] = ((/* implicit */unsigned char) ((unsigned short) arr_107 [i_24 + 2] [i_25] [i_33] [i_24]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
