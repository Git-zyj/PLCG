/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39238
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) (-(722946642U))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_18 [3] [i_3] [i_2] [i_1 - 1] [i_0 + 1] [i_0 + 1] = ((/* implicit */long long int) (-((-(((/* implicit */int) (short)10099))))));
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_13 [(unsigned char)19] [i_0 + 2] [i_1 + 1] [(signed char)13] [(signed char)13])))));
                                var_17 -= ((/* implicit */unsigned char) var_10);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) min((min((((/* implicit */int) (unsigned short)65535)), (-2016771298))), (((/* implicit */int) max(((signed char)39), ((signed char)-46))))));
                        arr_21 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (unsigned short)63880)), (388791125U))), (((/* implicit */unsigned int) (-(arr_8 [i_1 - 2] [i_1] [i_1 - 2]))))));
                        var_19 |= ((/* implicit */signed char) min((((arr_20 [i_0 - 1] [i_1 - 1] [i_2] [i_5] [i_5] [i_2]) & (arr_20 [i_0 + 1] [i_1 + 1] [i_2] [i_2] [(_Bool)1] [i_2]))), (((/* implicit */unsigned int) ((min((var_6), (((/* implicit */int) var_15)))) & (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) -277116278))))))))));
                        var_20 = ((/* implicit */_Bool) max((((((277116278) > (-277116278))) ? (min((277116272), (((/* implicit */int) var_5)))) : (((/* implicit */int) (!((_Bool)1)))))), (max((var_7), (arr_8 [i_0] [i_0 + 1] [i_0 + 1])))));
                    }
                    arr_22 [i_0 - 1] [i_0 - 1] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)-56);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((max((-4872675445030350041LL), (-1050621108974313883LL))) < (((/* implicit */long long int) var_0))))));
                var_22 = ((/* implicit */_Bool) (~(min((min((((/* implicit */int) (unsigned short)43811)), (893706814))), (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-29))))))));
                arr_27 [i_7] [i_7] = (+(((/* implicit */int) (unsigned short)1198)));
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6323304874288845314LL)) ? (6323304874288845321LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -6323304874288845321LL)) > (5257284367967998100ULL)))))));
                        arr_32 [i_7] [i_7] [i_7] [(_Bool)1] = ((/* implicit */_Bool) (~((-(var_6)))));
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        arr_36 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((var_0) << ((((+(max((((/* implicit */unsigned long long int) arr_10 [i_10] [i_8] [i_7] [i_6])), (arr_11 [i_6]))))) - (18446744073709551525ULL)))));
                        arr_37 [i_6] [i_7] [i_10] [(signed char)10] |= ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551599ULL))));
                    }
                    for (signed char i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        arr_41 [4LL] [4LL] [i_8] [i_8] [i_11 + 1] &= ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11 - 1])))) % (((/* implicit */int) arr_30 [i_11 + 1] [i_11 - 1] [i_8] [i_11] [i_11 - 1] [i_11 - 1]))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) > ((~(2779613405465827512ULL)))));
                        var_25 += ((/* implicit */int) max(((!(((/* implicit */_Bool) 16378481715312400965ULL)))), (((1671830479477870009LL) <= (6323304874288845313LL)))));
                        arr_42 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) && (((/* implicit */_Bool) (unsigned short)7259)))))));
                    }
                    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) max((((((/* implicit */_Bool) 7674033515827748670LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)79))) : (1202428431353455950LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)43792)) ? (((/* implicit */int) (unsigned short)21715)) : (((/* implicit */int) (unsigned short)43839))))))))));
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min(((!(((/* implicit */_Bool) (signed char)39)))), ((!(((/* implicit */_Bool) var_11)))))))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_14 = 1; i_14 < 14; i_14 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned int) ((max((((/* implicit */int) (_Bool)0)), (2147483647))) & (((/* implicit */int) arr_29 [i_7] [i_13] [i_12] [i_7]))));
                            var_29 = ((/* implicit */int) (~(min((((/* implicit */long long int) arr_30 [i_14] [i_14 + 1] [i_7] [i_7] [i_14 + 1] [i_7])), (arr_49 [i_14 + 2] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_7])))));
                            var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)43791)));
                            var_31 = ((/* implicit */long long int) arr_17 [i_14 + 2] [i_14 + 2] [i_14 + 2] [i_14] [i_13]);
                        }
                        for (signed char i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((15063733185895719303ULL) << (((3344089760U) - (3344089733U))))))));
                            arr_53 [i_12] &= (-(((/* implicit */int) ((unsigned char) (short)22192))));
                            var_33 = ((/* implicit */unsigned long long int) (signed char)-122);
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2147483647)))))));
                        }
                        arr_54 [i_6] [i_7] [i_7] [i_12] [i_13] [i_13] = ((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (max((1216220931U), (((/* implicit */unsigned int) (short)23881))))));
                        var_35 &= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_6] [i_7] [i_12]))))) && (((((/* implicit */int) (signed char)4)) == ((-(((/* implicit */int) (short)-1))))))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned int) 907695427)) / (arr_14 [i_6] [i_6] [i_6])));
                        arr_58 [i_7] [i_12] [i_7] [i_7] = ((/* implicit */unsigned short) var_4);
                        var_37 += ((/* implicit */signed char) arr_3 [i_12]);
                        var_38 += ((/* implicit */int) ((_Bool) arr_30 [i_6] [0ULL] [i_12] [i_12] [i_16] [i_16]));
                        /* LoopSeq 1 */
                        for (signed char i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) arr_12 [(unsigned short)18]);
                            var_40 = ((/* implicit */signed char) 11591104801284169230ULL);
                            arr_61 [i_6] [i_7] [i_12] [i_7] [i_17] = ((/* implicit */unsigned long long int) var_4);
                            var_41 += ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_4))))));
                        }
                    }
                    arr_62 [i_12] [i_7] [i_12] |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_9)), (arr_34 [i_6]))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))))) + (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_24 [i_12] [i_7]))))), (arr_19 [i_6])))));
                    var_42 = ((/* implicit */unsigned int) var_12);
                }
                for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                {
                    arr_67 [i_18] |= ((/* implicit */long long int) ((979082165925879960ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43839)))));
                    arr_68 [i_6] [i_18] [i_18] |= max((7236380421652492619LL), (((/* implicit */long long int) 1544594096)));
                    arr_69 [i_18] [i_7] [i_6] = ((/* implicit */_Bool) arr_50 [i_6] [i_6] [i_7] [i_18] [i_18] [i_18] [i_18]);
                }
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
                {
                    var_43 = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) var_2)))));
                    arr_72 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((signed char) max((((/* implicit */int) var_11)), (-1548648935))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) /* same iter space */
                    {
                        var_44 = ((/* implicit */long long int) min((((/* implicit */int) (unsigned short)43774)), ((-(((/* implicit */int) (unsigned short)65530))))));
                        var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) (((+(1614253000681236506ULL))) ^ (((/* implicit */unsigned long long int) (~((+(var_1)))))))))));
                        var_46 = min((((/* implicit */unsigned long long int) -1)), (72057594037919744ULL));
                        var_47 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43811))) > (max((max((((/* implicit */unsigned long long int) arr_66 [i_7] [i_7])), (8836254577758643052ULL))), (((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18014))) : (15101240505661298460ULL)))))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 16; i_21 += 1) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) ((min((3345503568048253179ULL), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)88))) % (var_13)))))) << (((((/* implicit */int) arr_17 [i_21] [i_19] [i_7] [i_7] [i_6])) % (((/* implicit */int) arr_73 [i_6] [i_6] [i_19] [i_21]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 2; i_22 < 13; i_22 += 3) 
                        {
                            arr_80 [i_7] [i_7] [i_19] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (min((15192042832165571781ULL), (((/* implicit */unsigned long long int) 554683586)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_38 [i_22 - 2] [i_7] [11LL])) >= (var_1)))))));
                            arr_81 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                            arr_82 [i_7] = (-(((/* implicit */int) (signed char)(-127 - 1))));
                        }
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 1) /* same iter space */
                    {
                        arr_86 [i_7] [i_7] [i_19] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (arr_50 [i_23] [i_23] [i_7] [i_19] [i_7] [i_7] [i_6]));
                        arr_87 [i_6] [i_7] [i_19] = ((/* implicit */_Bool) ((short) ((((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_6] [i_7] [1LL] [11]))) & (var_1))) <= (((long long int) (signed char)56)))));
                    }
                    for (signed char i_24 = 1; i_24 < 13; i_24 += 4) 
                    {
                        var_49 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 28882839729738276LL)) ? (min((4294967295U), (((/* implicit */unsigned int) (_Bool)1)))) : (max((arr_79 [i_7]), (((/* implicit */unsigned int) (signed char)-10))))))) ? (var_13) : (((/* implicit */long long int) -1626971819)));
                        var_50 = ((/* implicit */long long int) max((((/* implicit */int) (signed char)-10)), (arr_63 [i_24] [i_24 + 3] [i_24 + 3] [i_24 + 2])));
                        var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (((unsigned int) (_Bool)1)))))));
                    }
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_25 = 0; i_25 < 11; i_25 += 2) 
    {
        arr_95 [i_25] = ((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */signed char) arr_56 [i_25] [i_25] [i_25])), (arr_35 [i_25])))), (((long long int) arr_56 [i_25] [i_25] [i_25]))));
        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((int) ((4191276317972868511LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))))));
        var_53 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)43791)), (5844077118090039478LL)));
    }
    var_54 = ((/* implicit */signed char) max((var_54), (((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)33032)) ? (3624066261982928803ULL) : (((/* implicit */unsigned long long int) -1485621104)))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_3))))), (((unsigned int) 2097151))))))))));
    var_55 = ((/* implicit */_Bool) (-(((min((((/* implicit */int) (signed char)15)), (var_10))) % (((-727596596) % (var_10)))))));
}
