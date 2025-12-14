/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238051
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */int) max((6316925962982118352LL), (-7962245793889689204LL)));
                        arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)12996)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)99))))) ? (min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)200))))), (-6316925962982118353LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)(-127 - 1))))))))));
                        arr_12 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */int) ((max((max((-1467992785509657086LL), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))))) != (((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) var_4)), (var_18)))))));
                        arr_13 [i_2] = max(((~(((/* implicit */int) (signed char)(-127 - 1))))), (((/* implicit */int) var_11)));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(-7962245793889689204LL)))), (min((((/* implicit */unsigned long long int) var_13)), (min((6369769868399423196ULL), (((/* implicit */unsigned long long int) var_13))))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((min((17701470148481630042ULL), (((/* implicit */unsigned long long int) (short)-28855)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)28868)))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 1; i_5 < 21; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max(((-(((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) (signed char)22)))))));
                arr_21 [i_4] [(signed char)20] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-55)), (0LL))))));
                var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) var_7)))));
                var_24 = ((/* implicit */unsigned short) max((max((min((12076974205310128406ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)99))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_8)) % (((/* implicit */int) var_14)))), (((/* implicit */int) max(((_Bool)1), (var_2)))))))));
            }
            /* vectorizable */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_25 -= ((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)26613))))));
                    var_26 += ((/* implicit */unsigned long long int) (+(var_16)));
                    arr_27 [i_5] [(signed char)2] [i_5] [i_4] = (((-(((/* implicit */int) var_10)))) % ((-(((/* implicit */int) (signed char)-99)))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-29688)))))));
                }
                for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_32 [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        var_28 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-7962245793889689225LL)));
                        var_29 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (var_5)))) > (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (signed char)-55)) + (81)))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_9))));
                        arr_35 [i_4] [i_5 - 1] [i_7] [i_9] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
                    }
                    arr_36 [i_4] [i_4] [i_9] = ((/* implicit */signed char) (unsigned short)44398);
                }
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */int) 2199023255551LL);
                        arr_42 [i_7] = ((/* implicit */signed char) (-(var_13)));
                        var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)28848))));
                        var_33 = ((/* implicit */signed char) ((((/* implicit */long long int) var_3)) | (var_1)));
                    }
                    var_34 = ((/* implicit */_Bool) (signed char)-64);
                    arr_43 [i_4] [i_7] [i_4] [i_11] [i_7] = ((/* implicit */short) ((var_3) / (var_16)));
                }
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((var_1) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 22; i_13 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6))))))))));
                    var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) > (((/* implicit */int) (short)24471))));
                    arr_49 [i_4] [i_5] [0] [i_13] [11ULL] = ((/* implicit */unsigned short) (+(var_13)));
                }
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) ((var_12) > (((/* implicit */long long int) 2747109356U))));
                    var_39 = (((-(((/* implicit */int) var_11)))) > (((/* implicit */int) (signed char)54)));
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)38)))))));
                }
                var_41 = ((/* implicit */signed char) (!(((var_1) > (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
            }
            /* LoopSeq 1 */
            for (int i_16 = 0; i_16 < 22; i_16 += 2) 
            {
                var_42 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
                {
                    arr_58 [i_4] [i_5] = ((/* implicit */unsigned long long int) (-(3408009208042039791LL)));
                    arr_59 [i_17] [i_16] [i_5] [i_4] = ((/* implicit */signed char) ((int) (unsigned short)0));
                    var_43 = 7962245793889689204LL;
                }
                var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1268761567)) ? (6731486992611792904LL) : (2199023255567LL)))) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : (min((((/* implicit */unsigned long long int) 4509829205156182876LL)), (2690265768743354071ULL))))))));
                var_45 = ((/* implicit */_Bool) (-((-(1268761567)))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 4; i_18 < 20; i_18 += 4) 
                {
                    for (long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)-30743)))))));
                            var_47 &= ((/* implicit */_Bool) (short)-26298);
                            arr_66 [i_4] [i_16] = ((/* implicit */unsigned char) (+((+(var_18)))));
                        }
                    } 
                } 
            }
            var_48 += ((/* implicit */_Bool) max(((~(-288183822))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        }
        /* vectorizable */
        for (signed char i_20 = 1; i_20 < 21; i_20 += 3) /* same iter space */
        {
            arr_69 [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */int) var_11)) / (var_9)));
            arr_70 [i_4] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_21 = 3; i_21 < 21; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
            {
                for (unsigned int i_23 = 1; i_23 < 20; i_23 += 4) 
                {
                    {
                        var_49 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((long long int) (signed char)-117)), (((/* implicit */long long int) (signed char)116)))))));
                        arr_80 [(signed char)4] [i_21 - 1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))) > (max((max((((/* implicit */long long int) (unsigned char)243)), (var_12))), (min((var_5), (((/* implicit */long long int) (signed char)117))))))));
                    }
                } 
            } 
        } 
        var_50 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(5248123408463101988ULL))))));
        arr_81 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((~(-1270487307975074589LL))), (((/* implicit */long long int) var_10))))) ? (max((max((var_18), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9223372036854775798LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) : (((/* implicit */unsigned long long int) min((9223372036854775807LL), (2169525880282501571LL))))));
        arr_82 [i_4] [i_4] = max((((/* implicit */int) ((((/* implicit */int) var_17)) > ((-2147483647 - 1))))), (((((((/* implicit */_Bool) -17LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)44055)))) << (((((((/* implicit */_Bool) 212845629)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (1968774152310260699LL))))));
    }
    var_51 = min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_1), (var_13))))))), (min((((/* implicit */long long int) max((((/* implicit */int) (signed char)124)), (-288183822)))), (((((/* implicit */_Bool) var_6)) ? (var_1) : (var_12))))));
    /* LoopNest 2 */
    for (signed char i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        for (unsigned char i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            {
                var_52 = ((/* implicit */unsigned char) 288183821);
                var_53 = ((/* implicit */unsigned short) var_0);
                var_54 = ((/* implicit */long long int) max((var_54), (min((min((((/* implicit */long long int) 288183798)), (-9203458595550869852LL))), (((/* implicit */long long int) (-(2076263121))))))));
                /* LoopNest 2 */
                for (unsigned char i_26 = 1; i_26 < 19; i_26 += 1) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            arr_93 [i_24] [(signed char)14] [(signed char)14] [i_27] [i_24] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 5992941274404266076LL)) ? (((/* implicit */int) (unsigned short)10854)) : (-542069115)));
                            arr_94 [i_27] [i_27] [(_Bool)1] [i_24] [i_27] [i_27] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) var_9)));
                            arr_95 [i_24] [i_25] [i_26] [i_24] [i_26 + 1] [i_24] = ((/* implicit */signed char) (+(min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-6661289346674011139LL))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)7)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 0; i_29 < 20; i_29 += 4) 
                    {
                        for (unsigned long long int i_30 = 2; i_30 < 18; i_30 += 4) 
                        {
                            {
                                var_55 *= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) var_8))));
                                arr_103 [i_24] [i_24] [i_24] [i_24] [(_Bool)1] [i_24] = ((/* implicit */unsigned char) var_15);
                                var_56 = ((/* implicit */_Bool) 2097148);
                                arr_104 [i_24] [i_25] [i_24] [i_29] [i_24] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_0))));
                                var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_31 = 0; i_31 < 20; i_31 += 3) 
                    {
                        for (int i_32 = 0; i_32 < 20; i_32 += 1) 
                        {
                            {
                                var_58 = ((/* implicit */long long int) (((_Bool)1) ? (var_16) : (((/* implicit */int) var_8))));
                                var_59 = ((/* implicit */int) max((var_59), ((-(((/* implicit */int) var_14))))));
                                var_60 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-29939)) && (((/* implicit */_Bool) var_10))));
                                var_61 = ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
                            }
                        } 
                    } 
                    arr_111 [i_24] [i_25] = (-((~(var_3))));
                    var_62 = ((/* implicit */int) ((((/* implicit */int) var_15)) > (var_3)));
                }
                for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) /* same iter space */
                {
                    var_63 = ((/* implicit */unsigned char) min((var_63), (((/* implicit */unsigned char) min(((short)3234), (((/* implicit */short) (unsigned char)237)))))));
                    var_64 = ((/* implicit */_Bool) (unsigned char)223);
                    var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) (-(((/* implicit */int) (!((_Bool)1)))))))));
                    var_66 = ((/* implicit */unsigned short) max(((-(((1784586163) % (-1342274443))))), (max((min((var_9), (var_16))), (-593207695)))));
                }
                for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
                {
                    arr_117 [17ULL] [i_24] [i_24] [(signed char)8] = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)11022)) : (((/* implicit */int) (signed char)-99)))))), ((~(((((/* implicit */int) (short)-3242)) % (((/* implicit */int) var_7))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_35 = 0; i_35 < 20; i_35 += 3) /* same iter space */
                    {
                        var_67 = ((/* implicit */long long int) (~((-(min((17571056095371918758ULL), (((/* implicit */unsigned long long int) (unsigned short)16924))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_36 = 1; i_36 < 18; i_36 += 3) 
                        {
                            var_68 = ((/* implicit */unsigned char) min((var_68), (((/* implicit */unsigned char) (((+(((/* implicit */int) (short)0)))) << ((((-(((/* implicit */int) var_10)))) + (10701))))))));
                            arr_123 [i_24] [i_36 + 2] [i_24] [i_35] [i_35] [19ULL] [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                        }
                        for (long long int i_37 = 0; i_37 < 20; i_37 += 4) 
                        {
                            arr_126 [i_24] [i_24] [i_24] [i_37] = ((/* implicit */signed char) min((((((max((var_16), (((/* implicit */int) (signed char)-55)))) + (2147483647))) << (((((var_3) + (1115980716))) - (8))))), ((+(((/* implicit */int) (signed char)4))))));
                            arr_127 [i_24] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (short)-3214)) ? (((/* implicit */long long int) (-(1342274450)))) : (((-7081823813911790200LL) | (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                            var_69 = max(((~(((/* implicit */int) var_8)))), ((-(((/* implicit */int) (unsigned short)13874)))));
                            var_70 = ((/* implicit */unsigned char) max((var_70), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) > (1008806316530991104LL)))))))));
                            arr_128 [i_24] [i_25] [i_34] [i_24] [i_37] = ((/* implicit */long long int) ((max((((/* implicit */int) var_4)), (-1016558614))) << ((+(((/* implicit */int) (!(((/* implicit */_Bool) -593207670)))))))));
                        }
                        for (unsigned long long int i_38 = 0; i_38 < 20; i_38 += 1) 
                        {
                            var_71 = ((/* implicit */signed char) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-119)), ((unsigned short)1045)))) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_8)))))), (((/* implicit */int) (_Bool)1))));
                            var_72 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)183))));
                            var_73 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)9))))) : ((-(var_5))))) - (((long long int) (unsigned char)19))));
                            var_74 = ((/* implicit */int) (-(max((min((((/* implicit */long long int) (short)-3237)), (var_13))), (min((((/* implicit */long long int) (signed char)-82)), (var_5)))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_39 = 0; i_39 < 20; i_39 += 3) /* same iter space */
                    {
                        var_75 = ((/* implicit */unsigned long long int) var_1);
                        /* LoopSeq 1 */
                        for (unsigned char i_40 = 0; i_40 < 20; i_40 += 4) 
                        {
                            var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (!((_Bool)0)))) : (var_3))))));
                            arr_138 [i_24] [i_40] [i_39] [i_39] [(_Bool)1] = ((/* implicit */unsigned short) (~(var_16)));
                        }
                        var_77 = ((/* implicit */int) (signed char)-105);
                        var_78 = ((/* implicit */short) max((var_78), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned char)223)))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_41 = 1; i_41 < 17; i_41 += 4) 
                    {
                        var_79 = 107746302774530993LL;
                        var_80 = ((/* implicit */short) (~(((int) (_Bool)1))));
                        arr_141 [i_24] [i_24] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) -1689267373)))) ? (((/* implicit */long long int) -220550356)) : (min((107746302774530985LL), (((/* implicit */long long int) var_2)))))), (((/* implicit */long long int) (-((~(((/* implicit */int) var_0)))))))));
                        arr_142 [i_24] [i_34] [i_24] [i_24] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (11507957314184052327ULL))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -718032082)), (max((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                    {
                        var_81 ^= ((/* implicit */unsigned char) (~(-8222610763767659440LL)));
                        var_82 |= ((/* implicit */short) (~(var_3)));
                        arr_147 [i_24] [i_34] [i_24] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) > (((/* implicit */int) (_Bool)1))));
                    }
                }
            }
        } 
    } 
}
