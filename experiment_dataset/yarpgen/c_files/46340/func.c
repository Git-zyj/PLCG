/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46340
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_0 [i_0] [(signed char)5])))));
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_19 |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) min((-6318631199214917895LL), (((/* implicit */long long int) 14U))))) ? ((-(arr_1 [(unsigned char)4] [(unsigned char)4]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (2964469552855391943ULL)))))));
        var_20 = ((/* implicit */signed char) max((var_20), ((signed char)60)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((3979157883U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_4)))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2] [i_3 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)37983))) - (6318631199214917894LL)))) : (arr_1 [i_2] [i_1])));
                /* LoopSeq 1 */
                for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_23 |= ((/* implicit */_Bool) ((unsigned int) ((arr_10 [i_1] [i_1] [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                    var_24 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) arr_3 [6ULL])))) / (((/* implicit */int) var_9))));
                }
                var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_3 - 1] [i_3] [i_2] [i_3 - 1] [i_1])) ? ((~(arr_13 [i_2] [i_2] [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                arr_14 [i_1] [i_1] [4U] [i_2] |= ((/* implicit */int) ((((((/* implicit */_Bool) 6318631199214917874LL)) && (((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_1])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
            var_26 = ((/* implicit */_Bool) min((var_26), ((_Bool)0)));
        }
        for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            var_27 = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27577))) / (4478192581342513490ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_8 = 2; i_8 < 8; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2642315410730505293ULL)) || (((/* implicit */_Bool) -6773727899054006322LL))));
                        var_29 -= ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (((((/* implicit */_Bool) 13795621942668320307ULL)) ? (var_0) : (((/* implicit */unsigned long long int) var_2)))));
                        var_30 = ((/* implicit */unsigned long long int) ((((var_11) & (((/* implicit */long long int) var_13)))) % (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [10ULL] [i_6] [i_6] [i_6] [i_6])))));
                        arr_25 [i_1] [i_1] [i_6] [i_8 + 1] [(short)1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) & (((/* implicit */int) (unsigned short)3))));
                    }
                    arr_26 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((var_11) + (((/* implicit */long long int) arr_15 [0ULL])))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 6248128150129611300ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_5] [i_6 - 1] [i_7]))) : (var_15))))));
                }
                var_31 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63535)) ? (((/* implicit */int) (short)25414)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-6318631199214917895LL))) : (((/* implicit */long long int) 67108800U)))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 12; i_9 += 4) 
                {
                    for (short i_10 = 2; i_10 < 8; i_10 += 2) 
                    {
                        {
                            arr_33 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-((-(arr_28 [i_1])))));
                            var_32 = ((/* implicit */signed char) (unsigned short)65519);
                            arr_34 [i_1] [(unsigned short)11] [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) max((6318631199214917873LL), (((((/* implicit */long long int) 1437325249U)) ^ (-6318631199214917898LL)))));
                            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
                        }
                    } 
                } 
                arr_35 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45365)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33921))) : (3889056027U)))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) -7774550351670607727LL)))))) ^ (arr_24 [i_1] [i_5 + 4] [i_5 - 1] [i_5] [i_6 + 2] [i_6] [i_6])))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 1; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_34 = max((6318631199214917874LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 405911284U))))));
                            var_35 = (signed char)127;
                            var_36 = (signed char)-50;
                        }
                    } 
                } 
            }
        }
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
        {
            arr_45 [i_1] [i_1] = ((/* implicit */unsigned short) -6318631199214917916LL);
            arr_46 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1139916231U)) ? (((/* implicit */long long int) 405911300U)) : (6318631199214917920LL)));
            arr_47 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2313276262U)))))))) || (((/* implicit */_Bool) arr_15 [i_1]))));
        }
    }
    for (unsigned short i_14 = 1; i_14 < 19; i_14 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) -5537957994876359563LL)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -15LL)), (6327068903401090945ULL))))));
                var_38 = ((/* implicit */unsigned int) ((unsigned short) ((((2322768037867384941ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2001)) - (((/* implicit */int) (_Bool)1))))))));
                var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 4) 
                {
                    var_40 ^= ((/* implicit */signed char) (unsigned short)58706);
                    var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_55 [(unsigned short)16] [i_15] [i_16] [i_15]) ? (((/* implicit */int) arr_55 [(_Bool)1] [(unsigned short)8] [i_16] [(unsigned short)8])) : (((/* implicit */int) (short)15320))))) ? (((/* implicit */int) max(((unsigned short)4), (((/* implicit */unsigned short) arr_55 [6ULL] [(unsigned short)10] [i_16] [i_17]))))) : ((-(((/* implicit */int) arr_55 [16ULL] [(signed char)6] [i_16] [(signed char)6])))))))));
                    var_42 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_15] [i_15] [i_16] [4ULL]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) | (arr_53 [i_14 - 1] [i_14 - 1] [i_17 + 3]))));
                }
                var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 6318631199214917916LL))) ? (((/* implicit */int) (unsigned short)36794)) : (((/* implicit */int) ((((/* implicit */_Bool) 8965914946174096618ULL)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (-6318631199214917917LL)))))))));
            }
            for (unsigned long long int i_18 = 2; i_18 < 16; i_18 += 3) 
            {
                var_44 = ((/* implicit */unsigned char) var_15);
                var_45 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)65359))));
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) (unsigned short)65359)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2006))) : (-6318631199214917886LL))) : (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_50 [i_14] [i_14])))))))))));
            }
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_53 [i_14 + 1] [i_19] [i_20]), (((/* implicit */unsigned long long int) arr_51 [i_15]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_19] [i_15] [i_14]))) : (max((arr_62 [i_15] [i_15]), (((/* implicit */unsigned long long int) (_Bool)0))))))) ? (((max((-6318631199214917917LL), (((/* implicit */long long int) arr_52 [i_15])))) >> (((arr_50 [i_14 + 1] [i_14 + 1]) - (963965480U))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        var_48 ^= ((/* implicit */int) max((((((/* implicit */_Bool) (~(6318631199214917874LL)))) ? (((((/* implicit */_Bool) arr_58 [i_14] [i_14] [i_19])) ? (1912229910U) : (arr_52 [i_19]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((arr_63 [i_14 - 1] [i_14 - 1] [i_15] [i_19] [i_19]) - (var_5)))));
                    }
                } 
            } 
            var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), (max((3468562264097273871ULL), (((/* implicit */unsigned long long int) 457471990U))))))))));
            arr_66 [i_15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
        }
        var_50 = ((/* implicit */unsigned long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_48 [i_14]))));
        /* LoopSeq 1 */
        for (signed char i_21 = 0; i_21 < 20; i_21 += 3) 
        {
            arr_69 [i_21] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (9708202145366188187ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_22 = 0; i_22 < 20; i_22 += 4) 
            {
                arr_72 [i_14] [(unsigned short)15] [i_14] = ((/* implicit */unsigned short) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)122)) && (((/* implicit */_Bool) -15LL))))))))));
                var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_52 [i_22]) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_14] [i_22])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_54 [i_14] [i_14 - 1] [i_22]))))))))) < ((+(min((var_1), (((/* implicit */long long int) arr_51 [i_21])))))))))));
            }
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                arr_76 [10ULL] [i_23] = ((/* implicit */unsigned short) ((min((min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) arr_60 [i_14 + 1] [i_14] [i_14 - 1])))) | ((~(arr_62 [i_14] [i_21])))));
                var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 5798097994082806466ULL))) + (((/* implicit */int) ((unsigned char) ((3LL) & (-6318631199214917921LL)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                {
                    arr_81 [i_23] [8U] [i_14] [i_23] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)141))));
                    var_53 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-70)))))));
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_63 [i_14] [i_14] [i_14] [i_14] [i_23])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -6748838851917276592LL))))) : (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned short)18)))))));
                    var_55 = ((/* implicit */unsigned short) max((var_55), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2776492549857785729ULL)) ? (457471970U) : (((/* implicit */unsigned int) 1303053460))))))))));
                }
                for (long long int i_25 = 0; i_25 < 20; i_25 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_26 = 1; i_26 < 17; i_26 += 4) /* same iter space */
                    {
                        var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) min((((/* implicit */long long int) 3837495291U)), (min((27LL), (-15LL))))))));
                        var_57 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 3477483911U)) ? (1877597093U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5707))))));
                    }
                    for (short i_27 = 1; i_27 < 17; i_27 += 4) /* same iter space */
                    {
                        var_58 = ((/* implicit */unsigned long long int) ((((-6748838851917276592LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-29379)) + (29390))) - (10)))));
                        var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_67 [i_25])))) ? (((/* implicit */int) ((5341855583897863980LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91)))))) : (((/* implicit */int) var_14))))) + (((long long int) ((unsigned char) arr_60 [(signed char)16] [i_23] [i_27]))))))));
                    }
                    var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3584))) + (4378262810653670699ULL))))));
                }
            }
        }
        var_61 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-(var_8)))) * (max((18189115209645347723ULL), (((/* implicit */unsigned long long int) 6748838851917276582LL)))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((-(-6LL))))))));
        var_62 = ((/* implicit */unsigned long long int) arr_70 [i_14] [i_14] [i_14] [i_14 - 1]);
    }
    for (short i_28 = 0; i_28 < 25; i_28 += 4) 
    {
        var_63 = -596432051063726835LL;
        var_64 = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((6748838851917276597LL) <= (((/* implicit */long long int) 3989122376U))))))) + ((~((-(((/* implicit */int) var_10))))))));
        var_65 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (short)29384))));
        arr_95 [i_28] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_94 [i_28] [i_28])), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 5LL)) && (((/* implicit */_Bool) 6062480109297735043LL))))), (((long long int) (short)29382))))));
        var_66 = ((((/* implicit */_Bool) (-(12850020445555298065ULL)))) ? (((((/* implicit */_Bool) 3118012039U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_94 [i_28] [i_28]))))) : (((((/* implicit */_Bool) arr_94 [i_28] [i_28])) ? (3477483895U) : (3118012039U))));
    }
    var_67 *= var_12;
    var_68 = ((/* implicit */_Bool) (short)-798);
}
