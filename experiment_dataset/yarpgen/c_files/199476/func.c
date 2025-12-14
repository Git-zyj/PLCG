/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199476
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))) * (287948901175001088ULL));
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2]))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (-5827962160293090347LL)))));
                        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)18))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((long long int) var_7)))));
        var_16 = ((/* implicit */short) ((5827962160293090334LL) <= (((/* implicit */long long int) 567309379))));
    }
    /* LoopSeq 2 */
    for (signed char i_4 = 2; i_4 < 10; i_4 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32271))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_4 - 2] [i_4]))))) : (min((((/* implicit */long long int) (unsigned char)180)), (5827962160293090327LL)))))) / (arr_6 [(signed char)10] [i_4])));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20929))) / (287948901175001077ULL)));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) 5827962160293090313LL))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 14098503788736911460ULL))));
                                var_21 = ((/* implicit */_Bool) (~(max((((((/* implicit */_Bool) 5908759902294462274ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))))), (((/* implicit */unsigned int) (-(-567309363))))))));
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (short)13761)))))), (((arr_17 [i_4] [i_4 - 1] [i_5] [i_5 - 1]) ^ (arr_17 [i_4 - 1] [i_4 - 1] [i_5] [i_5 - 1])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (short)16589))) ? (((unsigned long long int) arr_24 [i_4] [i_4 + 1] [i_4] [i_6] [(short)7] [i_4 + 1] [i_6])) : (min((((/* implicit */unsigned long long int) (unsigned short)27567)), (18158795172534550514ULL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) 
            {
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) 567309370)) % (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) arr_27 [i_4]))))) ? (((long long int) 5908759902294462275ULL)) : (((/* implicit */long long int) max((-1093192682), (((/* implicit */int) arr_12 [i_4 + 1] [i_4])))))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_20 [i_4] [i_9] [i_10] [i_11] [i_10] [i_10]))))))) >> (((5827962160293090350LL) - (5827962160293090326LL)))));
                                var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (-(3792707320U))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */short) ((var_0) > (var_0)));
                    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [i_4 - 2] [6U] [i_4] [i_4 - 1] [i_4] [i_10])) ? (5827962160293090345LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 1] [i_10] [i_10]))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_1))));
    }
    for (signed char i_13 = 2; i_13 < 10; i_13 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_0)) : (var_1)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) var_1))), (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) arr_2 [i_13] [i_13 + 1])) : (((/* implicit */int) var_9)))))))));
        /* LoopSeq 1 */
        for (signed char i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) -5827962160293090350LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((12U) % (917977909U)))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5827962160293090318LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11219769131117614240ULL)));
                        var_33 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) ^ (((/* implicit */int) (_Bool)1))))));
                        var_34 = ((/* implicit */_Bool) (+(5827962160293090310LL)));
                    }
                    for (unsigned char i_18 = 1; i_18 < 7; i_18 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) ((min(((+(var_4))), (var_0))) <= ((~(((/* implicit */int) (signed char)53))))));
                        var_36 = ((/* implicit */unsigned int) ((int) arr_20 [i_18] [i_16] [i_14] [i_14] [i_14] [i_13]));
                        var_37 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -11)), (2070021670311486394ULL)))))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-36)) / (((/* implicit */int) (short)-16592)))))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */long long int) 23U)) : (5827962160293090321LL)))) && (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_0)))))))))));
                }
                for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((14044958842349930265ULL), (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_13] [i_14] [i_14] [i_19])) ? (3349100067U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_13] [i_14]))))))))) ? (((unsigned long long int) min((-1), (((/* implicit */int) (signed char)9))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)42))))))));
                    var_41 = ((/* implicit */unsigned int) (((-(max((var_0), (((/* implicit */int) (signed char)-18)))))) % (max((((/* implicit */int) (short)-22268)), (var_2)))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) (signed char)-20))));
                    var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) 2048))));
                }
                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-((-(((/* implicit */int) ((_Bool) var_10))))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_21 = 1; i_21 < 10; i_21 += 4) 
            {
                var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_6 [i_13] [i_13]))));
                var_46 = ((/* implicit */int) ((10ULL) - (((/* implicit */unsigned long long int) 4294967291U))));
            }
            for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 4) 
            {
                var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */short) (signed char)96)), (var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5466))) <= (5827962160293090314LL))))))) && (((/* implicit */_Bool) ((((min((((/* implicit */int) (short)-26738)), (var_4))) + (2147483647))) >> (((var_1) - (949230633U))))))));
                var_48 = ((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_13])) == (((/* implicit */int) (signed char)11))));
                var_49 = ((/* implicit */short) (~(var_8)));
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 11; i_23 += 4) 
                {
                    for (unsigned long long int i_24 = 1; i_24 < 10; i_24 += 3) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) ((int) (((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_11)) + (45))))) | (((/* implicit */long long int) ((var_0) & (((/* implicit */int) arr_27 [i_14])))))))))));
                            var_51 = ((/* implicit */short) min((((((/* implicit */_Bool) ((unsigned int) arr_44 [i_24]))) ? (max((((/* implicit */int) arr_29 [i_24] [i_22] [i_22] [i_14])), (var_0))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-21736)) && (((/* implicit */_Bool) -5650671807872559599LL))))))), (((/* implicit */int) (!(((_Bool) (signed char)39)))))));
                            var_52 = ((/* implicit */unsigned long long int) max((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_2)) ? (-1208445831) : (((/* implicit */int) var_11)))))), (arr_25 [i_22] [2])));
                            var_53 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max(((short)32767), (((/* implicit */short) (unsigned char)106))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2154121530U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_13]))))) : (-5827962160293090305LL))) | (((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */short) arr_27 [i_23])), ((short)2345))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (short i_25 = 3; i_25 < 8; i_25 += 2) 
            {
                var_54 = ((/* implicit */_Bool) var_11);
                var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [1ULL] [i_13 - 2] [i_25 + 3] [i_25] [i_25] [i_25])) ? (((/* implicit */unsigned long long int) ((long long int) var_4))) : (((unsigned long long int) arr_43 [i_14] [i_14]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-17108)) && (((/* implicit */_Bool) var_7)))))) : (min((((/* implicit */long long int) (short)-17085)), (5827962160293090283LL)))));
            }
            for (unsigned long long int i_26 = 1; i_26 < 8; i_26 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_27 = 3; i_27 < 10; i_27 += 4) 
                {
                    var_56 = ((/* implicit */unsigned char) ((var_0) ^ (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-16570)), (var_4)))))))));
                    /* LoopSeq 3 */
                    for (signed char i_28 = 1; i_28 < 9; i_28 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned int) (~(arr_74 [i_13] [i_13] [i_13])));
                        var_58 = ((/* implicit */_Bool) ((long long int) (!((!(((/* implicit */_Bool) var_8)))))));
                        var_59 = ((/* implicit */_Bool) (short)16587);
                    }
                    for (signed char i_29 = 2; i_29 < 10; i_29 += 4) 
                    {
                        var_60 = ((/* implicit */signed char) ((var_7) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)16087), (((/* implicit */short) (signed char)32))))) ? (max((var_0), (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) (signed char)14)))))));
                        var_61 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) arr_31 [i_29] [(unsigned short)2] [(unsigned short)2] [i_13]))) ? (((/* implicit */int) ((short) arr_31 [i_29] [i_13 + 1] [i_26] [i_13 + 1]))) : (((/* implicit */int) arr_76 [i_26] [i_26] [i_26] [i_29])))) * (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)1045)) : (var_0)))))));
                        var_62 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (-5827962160293090328LL)))))));
                        var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-5827962160293090312LL) : (((/* implicit */long long int) 622438286))))) ? (((/* implicit */unsigned long long int) (-(arr_78 [i_13 - 2] [i_26 + 1] [i_27] [i_27 - 2] [i_29 - 2])))) : (min((min((((/* implicit */unsigned long long int) 5827962160293090309LL)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) & (arr_28 [i_14]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_30 = 0; i_30 < 11; i_30 += 1) 
                    {
                        var_64 = ((/* implicit */short) min((var_64), (((/* implicit */short) ((((/* implicit */int) (short)16561)) - (((/* implicit */int) (short)-16570)))))));
                        var_65 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1900200293U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_26]))) : ((+(3333066554019749937ULL)))));
                    }
                }
                for (short i_31 = 3; i_31 < 9; i_31 += 4) 
                {
                    var_66 = ((/* implicit */unsigned long long int) min((var_66), (max((((/* implicit */unsigned long long int) ((15) <= (((/* implicit */int) var_10))))), (((unsigned long long int) ((_Bool) var_11)))))));
                    var_67 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */int) min(((signed char)101), ((signed char)9))))));
                    var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) / (var_4))) >> ((((~(198387269429040362ULL))) - (18248356804280511243ULL))))) / (min((((/* implicit */int) ((_Bool) var_10))), (((((/* implicit */_Bool) 5827962160293090332LL)) ? (1503394299) : (-30))))))))));
                }
                var_69 = max((((/* implicit */unsigned long long int) ((short) (short)23022))), (min((arr_0 [i_13 + 1]), (((/* implicit */unsigned long long int) var_4)))));
                var_70 = ((/* implicit */int) max((var_70), (((((max((((/* implicit */int) max((arr_42 [5U] [(short)7] [5U] [i_26]), (var_6)))), (max((-1089205751), (-2135391139))))) + (2147483647))) >> (((var_2) - (2146410343)))))));
            }
            var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)92))) - (18446744073709551611ULL)))) ? (((var_0) / (1111783448))) : (max((((/* implicit */int) arr_25 [0ULL] [i_13])), (var_2)))))) ? (max((max((((/* implicit */int) var_3)), (var_2))), (arr_30 [i_13] [i_13] [i_13] [i_13]))) : (((((/* implicit */int) max((((/* implicit */short) (signed char)-104)), (var_5)))) ^ (((/* implicit */int) var_3))))));
        }
    }
}
