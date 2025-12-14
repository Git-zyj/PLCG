/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36625
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26224)) <= (((/* implicit */int) (_Bool)1)))))));
                            var_19 += ((/* implicit */unsigned char) (short)-32752);
                            arr_13 [(_Bool)1] [i_1] [(_Bool)1] [i_1] |= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_8 [i_0] [(unsigned char)9] [i_2]))))));
                            arr_14 [i_0] [i_0] [i_2] [i_3 + 1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_1] [i_2]))) ? (((/* implicit */int) arr_8 [i_4] [i_1] [i_0])) : (2147483647)));
                        }
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((arr_8 [i_0] [i_0] [i_0]) ? (max((((0ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9078))))), (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) max((arr_6 [i_3 - 1]), (arr_6 [i_3 - 1]))))))));
                    }
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)203)), (((((/* implicit */_Bool) 2415356176U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (min((2570583970U), (((/* implicit */unsigned int) var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_0] [1ULL] [i_0] = (short)28163;
                                var_22 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [1] [i_2] [i_6])))) : (min((var_15), (((/* implicit */unsigned long long int) 1879611136U))))))));
                                var_23 = ((/* implicit */unsigned short) ((int) (unsigned short)16256));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)65530))))), (((unsigned long long int) 1775919648U))))) ? (((/* implicit */int) max(((short)-24912), (((/* implicit */short) (unsigned char)63))))) : (((/* implicit */int) var_0))));
                                var_25 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) ((unsigned short) arr_16 [i_6] [i_2] [i_2] [i_5] [i_2]))))));
                            }
                        } 
                    } 
                    var_26 = (-(((((3523284808697909965LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (-3523284808697909968LL))))));
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_2] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        for (unsigned short i_8 = 4; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    arr_29 [5ULL] [i_8] [i_9] [i_7] = ((/* implicit */unsigned char) 1123445475);
                    var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */int) (unsigned char)15)) : (arr_22 [i_8] [i_9]))));
                    var_29 = ((/* implicit */short) 1700557746);
                    arr_30 [9U] [9U] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)234))));
                }
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 3; i_11 < 16; i_11 += 2) 
                    {
                        arr_36 [i_7] [i_10] [i_11 + 3] = ((/* implicit */signed char) ((_Bool) ((max((((/* implicit */int) (unsigned short)47890)), (874504558))) <= ((-(((/* implicit */int) (unsigned short)0)))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            arr_41 [i_7] [i_7] [i_7] [14] [i_7] = ((((/* implicit */_Bool) (unsigned char)131)) ? ((((+(-3523284808697909965LL))) % (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_7]))))));
                            var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */_Bool) max((var_13), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) -1700557746)) : (12186173168848821956ULL)))))) ? (((/* implicit */int) (unsigned char)140)) : ((-(min((((/* implicit */int) var_14)), (-2147483643)))))))));
                            var_31 = ((/* implicit */int) (+(((((/* implicit */unsigned int) arr_22 [i_8 + 1] [i_10 - 1])) / (arr_25 [i_10 - 1])))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((min((-2147483623), (-1942795392))) == (((((/* implicit */int) (signed char)(-127 - 1))) % (1454405524))))))));
                        }
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((long long int) arr_26 [i_7])) & (min((9223372036854775807LL), (((/* implicit */long long int) ((int) arr_27 [i_10])))))));
                            var_34 += ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) / (7398856262799322300LL)))))) : (((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (1579597761U))));
                        }
                        for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                        {
                            var_35 = ((/* implicit */int) ((var_4) >> (((((long long int) arr_23 [i_10 - 1] [i_8 - 2])) - (6922212345351662918LL)))));
                            var_36 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) -853610370)) ? (arr_43 [i_8 - 1] [(signed char)10] [i_10 + 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 - 2]))))));
                            var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) var_5))));
                            arr_49 [(signed char)2] = ((/* implicit */unsigned short) arr_24 [i_10] [i_11]);
                        }
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((-7122621398200414264LL), (((/* implicit */long long int) (unsigned char)225))))))) ? ((-(((((/* implicit */_Bool) arr_43 [(unsigned short)3] [i_8] [19LL] [i_8])) ? (var_15) : (((/* implicit */unsigned long long int) arr_33 [i_11])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 3741085540568840520LL)))))))));
                    }
                    for (int i_15 = 1; i_15 < 19; i_15 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_16 = 1; i_16 < 17; i_16 += 1) 
                        {
                            var_39 = ((((/* implicit */_Bool) arr_48 [i_15] [i_15] [i_15] [i_15 + 1] [i_15 - 1] [i_16 - 1])) ? (((/* implicit */int) ((((unsigned long long int) 2415356176U)) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)110)))))))) : ((-(((/* implicit */int) arr_42 [i_8 + 1] [i_10 + 2] [i_15 + 1])))));
                            arr_56 [15ULL] [i_10] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (arr_32 [i_16 + 2] [(unsigned short)10] [i_8 - 2] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2415356176U)) ? (((/* implicit */int) (unsigned char)131)) : (((/* implicit */int) (unsigned short)37867)))))))) ? (((/* implicit */long long int) -371788643)) : ((+(((3523284808697909965LL) ^ (((/* implicit */long long int) 1879611119U))))))));
                            var_40 = ((/* implicit */unsigned short) 7122621398200414264LL);
                        }
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) arr_33 [i_7]))));
                        var_42 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_45 [i_7] [i_10 - 1] [i_8 - 3] [17] [8U] [14ULL] [i_7])) ? (arr_45 [i_7] [i_10 + 2] [i_8 + 1] [i_8] [i_10 + 2] [i_15] [i_10 + 1]) : (arr_45 [i_7] [i_10 + 1] [i_8 - 1] [i_15 - 1] [i_7] [i_7] [i_15 + 1]))) + (2147483647))) >> (((((/* implicit */int) var_10)) - (24)))));
                    }
                    var_43 = ((/* implicit */_Bool) max((var_43), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(arr_37 [i_7] [i_7] [1ULL] [i_7] [i_7])))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) arr_44 [i_7] [i_7] [i_7] [i_7] [i_7])) > (((/* implicit */int) ((short) var_6)))))))))));
                    arr_57 [i_7] [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) ((((/* implicit */int) var_6)) * (((/* implicit */int) arr_26 [i_10])))))), (min((arr_45 [(unsigned char)14] [i_8 - 1] [i_8] [i_8] [(unsigned char)14] [i_10] [i_10 + 1]), (((/* implicit */int) arr_42 [i_7] [i_8 - 1] [i_10 + 1]))))));
                }
                var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) var_2))));
            }
        } 
    } 
    var_45 = ((((((/* implicit */_Bool) ((unsigned long long int) var_8))) && ((!(((/* implicit */_Bool) (short)32742)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (1073741824)))) >= (var_16)))) : ((+(((((/* implicit */int) (unsigned short)18105)) >> (((2415356180U) - (2415356177U))))))));
    var_46 = ((/* implicit */unsigned long long int) var_9);
}
