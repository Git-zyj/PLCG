/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35704
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
    var_16 = var_5;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((4080452762U), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (214514534U))), (((((/* implicit */_Bool) 214514531U)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                /* LoopSeq 1 */
                for (int i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) arr_4 [i_2] [i_0] [i_0]);
                    var_19 = ((((/* implicit */_Bool) (signed char)-97)) ? (min((((9640616009037884584ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65506))))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 - 2] [i_1])) ? (-1707831038) : (((/* implicit */int) var_12))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 3])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1])) : (-1707831038)))) ? (((((/* implicit */int) arr_4 [i_2 - 3] [i_2 - 1] [i_2 + 1])) / (((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 1])))) : (((/* implicit */int) min((arr_6 [i_2 - 1] [i_2 - 2] [i_2 + 1]), (((/* implicit */short) (unsigned char)218)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 14; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) 214514546U);
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (arr_1 [i_1] [i_0])))), (min((((/* implicit */int) var_10)), (2147483641)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            var_22 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_12)), (var_6))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-63))))) ? (((((/* implicit */_Bool) 0)) ? (-1532405442) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)41)))))));
            arr_19 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)31)) << (((638671142) - (638671131)))));
            var_23 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_15 [i_5])), ((short)32767)))) && (((/* implicit */_Bool) var_12)))))) ^ ((~(min((((/* implicit */unsigned int) 1707831039)), (214514534U)))))));
            var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_15 [i_5])), (((((/* implicit */int) arr_15 [i_6])) + (((/* implicit */int) arr_15 [i_5]))))));
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 23; i_7 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) var_4);
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_26 [i_7] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */_Bool) 2147483647);
                            var_26 = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [i_5])) - (((/* implicit */int) var_7))))), (var_9))), (((/* implicit */unsigned int) min(((short)12164), (min(((short)0), (((/* implicit */short) (_Bool)1)))))))));
                            arr_27 [i_7] = ((/* implicit */signed char) arr_17 [i_6] [i_7 + 1]);
                            var_27 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) var_4);
                var_29 = ((/* implicit */signed char) -1351250983808395167LL);
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_30 = ((/* implicit */unsigned char) min((min((min((((/* implicit */int) (_Bool)0)), (-11))), (min((((/* implicit */int) (_Bool)1)), (var_14))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (-1327627197)))) != ((~(2147483640))))))));
            var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)26103), (((/* implicit */short) arr_23 [i_5] [i_5] [i_10] [i_5] [i_5])))))) : (18446744073709551615ULL))), (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))), (var_4))))))));
            arr_31 [i_5] [i_10] [i_5] = ((/* implicit */short) min((((/* implicit */int) (short)28315)), (2081619851)));
            arr_32 [i_5] [i_10] |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_15 [i_5])), (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_21 [i_5] [i_5] [i_5]), (arr_21 [i_5] [i_10] [i_5])))))));
        }
        var_32 ^= ((/* implicit */unsigned char) arr_17 [i_5] [i_5]);
    }
    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 2) 
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(arr_18 [i_11] [i_11] [i_11]))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) | (min((530806429), (((/* implicit */int) (signed char)-29))))))))))));
        var_34 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1351250983808395166LL)), (min((arr_29 [i_11] [i_11]), (((/* implicit */unsigned long long int) var_9))))))) ? (((/* implicit */unsigned int) -638671143)) : (((var_9) ^ (((/* implicit */unsigned int) (~(var_1))))))));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) min((min((9223372036854775807LL), (((/* implicit */long long int) 1849875334U)))), ((~(((arr_14 [i_11]) & (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_11] [i_11]))))))))))));
        arr_36 [i_11] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_11] [i_11 - 1]))))) ? (((((/* implicit */_Bool) (signed char)-126)) ? (-1351250983808395175LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6777))))) : (min((((/* implicit */long long int) var_14)), (1351250983808395174LL)))))));
    }
    var_36 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((((/* implicit */int) var_12)) * (((/* implicit */int) var_8)))) / ((+(((/* implicit */int) var_10))))))), (((((/* implicit */long long int) min((((/* implicit */int) var_10)), (var_14)))) - ((+(-1351250983808395163LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_12 = 4; i_12 < 15; i_12 += 4) 
    {
        for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            {
                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_12 - 1] [i_12 - 4] [i_12 - 3])) - (((/* implicit */int) var_0))))), (((arr_41 [i_12 - 4]) + (((/* implicit */unsigned long long int) 1174970643)))))))));
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 16; i_14 += 1) 
                {
                    var_38 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)116)) ? ((~(((/* implicit */int) arr_16 [i_12 - 1] [i_12 - 1])))) : (((/* implicit */int) min((var_0), (((/* implicit */signed char) arr_16 [i_12 - 3] [i_13])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) min((394214408U), (((/* implicit */unsigned int) (short)-23))));
                        var_40 = ((/* implicit */_Bool) (((~(var_4))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_12 - 2])) > (((/* implicit */int) arr_39 [i_12]))))))));
                        arr_46 [i_12] [i_13] [i_13] [i_14] [i_12] = (~(((/* implicit */int) min((min((arr_33 [i_12 - 2] [i_12 - 2]), (((/* implicit */unsigned short) arr_21 [i_12 - 2] [i_12 - 2] [i_12 - 2])))), (((/* implicit */unsigned short) arr_25 [i_12 - 4]))))));
                    }
                }
                for (short i_16 = 4; i_16 < 15; i_16 += 1) 
                {
                    arr_49 [i_12] [i_13] [i_13] [i_13] = ((/* implicit */short) arr_29 [i_12] [i_12]);
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) arr_38 [i_12 - 4]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_18 = 0; i_18 < 16; i_18 += 1) 
                        {
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) (unsigned short)34814)), (arr_54 [i_12] [i_12] [i_12] [i_12] [i_12]))))))))));
                            var_43 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned char) var_10)), (arr_53 [i_13] [i_13] [i_13]))), (((/* implicit */unsigned char) ((12) != (((/* implicit */int) var_7)))))))), (((unsigned long long int) var_6))));
                            arr_55 [i_16] [i_16] [i_16] [i_13] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (var_13)))) ? (((/* implicit */int) min((((/* implicit */short) var_15)), (var_11)))) : (((/* implicit */int) arr_21 [i_16 - 1] [i_16 - 1] [i_16 - 4]))))), (min((((/* implicit */long long int) ((394214408U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_12 - 1])))))), (min((var_13), (((/* implicit */long long int) (unsigned short)26893))))))));
                        }
                        for (unsigned short i_19 = 2; i_19 < 14; i_19 += 2) 
                        {
                            var_44 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 8776714181314044572LL)) ? (((/* implicit */int) (unsigned short)40600)) : (((/* implicit */int) (unsigned char)235)))), (((((/* implicit */int) (short)32767)) & (((/* implicit */int) min((((/* implicit */unsigned char) arr_52 [i_12 - 3] [i_12 - 3] [i_16] [i_12 - 3] [i_12 - 3])), (arr_53 [i_16] [i_16] [i_16]))))))));
                            arr_60 [i_12 + 1] [i_13] [i_13] [i_12 + 1] = ((/* implicit */short) min((((((/* implicit */_Bool) ((3214961885330385515ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6552)))))) ? (((/* implicit */long long int) ((int) arr_24 [i_12] [i_13] [i_12] [i_17] [i_13]))) : (((2426726071747584749LL) / (var_13))))), (min((2426726071747584750LL), (((/* implicit */long long int) arr_24 [i_16] [i_16 + 1] [i_16] [i_16 - 1] [i_16]))))));
                            var_45 = arr_37 [i_12];
                        }
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_33 [i_12 - 1] [i_12]), (((/* implicit */unsigned short) (short)-6552))))) ? (((/* implicit */int) arr_33 [i_12 - 4] [i_12])) : (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_57 [i_16 + 1] [i_12 - 2] [i_12]))))));
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_47 += ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_8)) ? (arr_34 [i_12 + 1]) : (((/* implicit */unsigned long long int) 4222542104653000854LL)))), (((/* implicit */unsigned long long int) arr_58 [i_12 + 1] [i_16 - 1] [i_16 - 1] [i_12 - 1] [i_16 - 1] [i_12 + 1] [i_12])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned int) arr_62 [i_20] [i_12] [i_13] [i_12])), (arr_42 [i_20] [i_20] [i_20]))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 1) 
                        {
                            var_48 += ((/* implicit */signed char) -1351250983808395163LL);
                            arr_65 [i_12] [i_12] [i_12] [i_20] [i_13] = min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_47 [i_12] [i_13] [i_16 - 3] [i_12 + 1])) ? (((/* implicit */unsigned long long int) var_14)) : (5619263716932647067ULL))));
                        }
                    }
                    for (short i_22 = 1; i_22 < 14; i_22 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [i_12])), (min((((arr_59 [i_16]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15498))))), (((/* implicit */long long int) ((signed char) arr_45 [i_12] [i_12] [i_12] [i_16 - 3] [i_12] [i_13])))))));
                        arr_69 [i_12] [i_12] [i_12] [i_16] [i_12] [i_12] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_23 [i_12 - 2] [i_22] [i_22] [i_22] [i_22]))));
                    }
                    arr_70 [i_13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_40 [i_16 - 4] [i_13] [i_12])), (min((((/* implicit */unsigned long long int) var_12)), (min((4388377552234625135ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                    var_50 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_17 [i_12 + 1] [i_12 + 1]))))));
                    var_51 = (unsigned short)15498;
                }
                for (int i_23 = 3; i_23 < 13; i_23 += 2) 
                {
                    var_52 = ((/* implicit */short) arr_51 [i_12] [i_13]);
                    /* LoopNest 2 */
                    for (short i_24 = 3; i_24 < 15; i_24 += 2) 
                    {
                        for (unsigned char i_25 = 3; i_25 < 13; i_25 += 3) 
                        {
                            {
                                var_53 = ((/* implicit */_Bool) (((((~(((/* implicit */int) var_0)))) & (((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (arr_25 [i_24])))))) ^ (((/* implicit */int) arr_52 [i_12] [i_12] [i_12] [i_12] [i_12]))));
                                var_54 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned short)63233)) == (((/* implicit */int) (signed char)108))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_76 [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 + 2] [i_23 - 3]), (((/* implicit */short) ((signed char) 6064669557191878034LL))))))));
                }
                var_56 = ((/* implicit */short) (((+(min((var_9), (((/* implicit */unsigned int) var_2)))))) - (((/* implicit */unsigned int) (+(min((((/* implicit */int) arr_16 [i_13] [i_13])), (var_1))))))));
            }
        } 
    } 
}
