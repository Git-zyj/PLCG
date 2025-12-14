/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207002
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) (-2147483647 - 1));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
                {
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(var_11))))));
                    var_15 = ((/* implicit */short) (_Bool)1);
                }
                /* vectorizable */
                for (int i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
                {
                    arr_13 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)65535))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    /* LoopSeq 3 */
                    for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        arr_17 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (signed char)-1);
                        arr_18 [i_5 - 1] [i_1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (unsigned short)17278);
                    }
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] [i_2] [i_1 - 1] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                        arr_22 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) 3053508718U)) : (var_10)));
                        var_17 &= ((/* implicit */unsigned long long int) 268435328U);
                    }
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        var_18 += ((/* implicit */signed char) (~(28U)));
                        arr_26 [i_0] [(unsigned char)1] [(unsigned char)1] [(unsigned short)15] [i_2] = ((/* implicit */signed char) var_6);
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_9))));
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) -994745755))))));
                        var_20 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    }
                }
                var_21 = ((/* implicit */int) (unsigned short)17267);
            }
        }
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_10)))) ? ((~(((/* implicit */int) var_12)))) : ((+(((/* implicit */int) var_1))))));
        arr_28 [i_0] |= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        var_23 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        arr_29 [i_0] = ((/* implicit */int) 268435328U);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_9 = 4; i_9 < 16; i_9 += 4) /* same iter space */
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_9))));
            arr_36 [i_9 - 1] [i_9 - 1] [i_8] |= ((/* implicit */unsigned short) var_1);
        }
        for (long long int i_10 = 4; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_41 [i_8] [(unsigned short)15] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1543603676)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (_Bool)1))));
            arr_42 [i_8] [i_10] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)17278);
            arr_43 [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3584))));
        }
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (unsigned short i_12 = 3; i_12 < 14; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_14 = 1; i_14 < 16; i_14 += 4) 
                        {
                            arr_53 [i_11] [i_12] [i_11] [i_11] [(signed char)5] [i_11] [i_11] = ((/* implicit */int) (_Bool)0);
                            arr_54 [i_8] [i_11] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-121))));
                        }
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                        {
                            var_26 -= ((/* implicit */short) 4503595332403200ULL);
                            arr_58 [i_12] [i_11] [(unsigned short)7] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) var_11))));
                            arr_62 [i_8] [i_11] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)116)) ? (3034628097U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (var_5)))));
                            var_28 &= ((/* implicit */int) (signed char)123);
                            var_29 *= ((/* implicit */unsigned short) (short)23877);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(var_6))))));
                            var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2491543882U)) ? (((/* implicit */unsigned long long int) var_0)) : (12681663158518539279ULL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))));
                            var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)23))));
                            var_33 = ((/* implicit */signed char) var_11);
                        }
                        var_34 = ((/* implicit */unsigned long long int) (~(var_4)));
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(994745751))))));
                        var_36 = ((/* implicit */long long int) 12681663158518539262ULL);
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_18 = 1; i_18 < 19; i_18 += 1) 
    {
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) var_11))));
        var_38 = ((/* implicit */unsigned int) 4194176);
    }
    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
    {
        var_39 = ((/* implicit */unsigned short) var_0);
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 20; i_20 += 3) 
        {
            for (signed char i_21 = 0; i_21 < 20; i_21 += 4) 
            {
                {
                    var_40 *= ((/* implicit */_Bool) (~(5765080915191012339ULL)));
                    arr_76 [i_19] [i_20] [i_19] = ((/* implicit */unsigned short) var_1);
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) (unsigned short)61943))));
                    }
                    /* vectorizable */
                    for (unsigned int i_23 = 1; i_23 < 16; i_23 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (-881998720432171871LL) : (((/* implicit */long long int) 137592052U))))));
                        var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) ((((/* implicit */_Bool) 2522082146U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-24095)))))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) (-(var_6))))));
                    }
                    for (int i_24 = 4; i_24 < 18; i_24 += 4) /* same iter space */
                    {
                        arr_84 [i_19] [14U] [(signed char)4] [i_21] &= ((/* implicit */unsigned short) 2714996401U);
                        arr_85 [i_19] [i_20] [8ULL] [i_19] [1LL] = ((/* implicit */unsigned int) (short)-7286);
                    }
                    for (int i_25 = 4; i_25 < 18; i_25 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_26 = 3; i_26 < 19; i_26 += 4) 
                        {
                            arr_91 [i_19] [i_20] [i_19] [i_21] [i_20] [i_19] [i_21] = ((/* implicit */unsigned short) (+(var_10)));
                            var_47 = ((/* implicit */int) max((var_47), ((~((-(((/* implicit */int) var_9))))))));
                        }
                        for (signed char i_27 = 0; i_27 < 20; i_27 += 3) 
                        {
                            var_48 = ((/* implicit */_Bool) var_11);
                            arr_94 [i_25] [i_20] = var_6;
                            var_49 += ((/* implicit */unsigned short) (_Bool)1);
                            var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) (_Bool)0))));
                        }
                        /* vectorizable */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_51 = ((/* implicit */short) (-(var_3)));
                            var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) var_8))));
                            arr_99 [i_19] [i_19] [i_20] [i_21] [i_25] [4U] [i_20] = ((((/* implicit */_Bool) 11412767642079886891ULL)) ? (1282430568061146814LL) : (((/* implicit */long long int) 1410759130U)));
                            arr_100 [i_21] [2ULL] [i_21] [i_28] [i_21] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_10))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_29 = 1; i_29 < 1; i_29 += 1) 
                        {
                            arr_103 [i_19] [i_20] [i_19] [i_19] [i_29] = ((/* implicit */unsigned int) (-(-1455263125)));
                            var_53 = ((((/* implicit */_Bool) (short)7286)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-53)))))) : (var_10));
                        }
                        for (unsigned short i_30 = 0; i_30 < 20; i_30 += 2) 
                        {
                            var_54 *= ((/* implicit */unsigned short) (unsigned char)225);
                            var_55 = ((/* implicit */int) (+(-141801555409263502LL)));
                            arr_106 [i_25] [i_20] [i_19] = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)8175)) : (((/* implicit */int) var_7)));
                        }
                        var_56 += ((/* implicit */short) var_10);
                        arr_107 [i_20] [4] [i_20] [i_20] = ((/* implicit */_Bool) (signed char)-53);
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_31 = 3; i_31 < 16; i_31 += 1) 
        {
            arr_110 [i_31] [i_31] = ((/* implicit */_Bool) -1282430568061146826LL);
            var_57 = ((/* implicit */short) 5765080915191012337ULL);
            var_58 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_9))))));
        }
        for (unsigned short i_32 = 2; i_32 < 18; i_32 += 3) 
        {
            /* LoopSeq 2 */
            for (short i_33 = 1; i_33 < 19; i_33 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_34 = 0; i_34 < 20; i_34 += 4) 
                {
                    var_59 = ((/* implicit */unsigned int) min((var_59), (((/* implicit */unsigned int) (~(21ULL))))));
                    var_60 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (unsigned short)60273))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)27)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-1))))) ? ((~(1455263117))) : (((/* implicit */int) var_8))))));
                }
                /* vectorizable */
                for (_Bool i_35 = 0; i_35 < 0; i_35 += 1) 
                {
                    var_61 = ((/* implicit */unsigned char) (unsigned short)28672);
                    var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (4286578688U) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))))))));
                    var_63 = ((/* implicit */_Bool) max((var_63), (((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
                }
                for (long long int i_36 = 0; i_36 < 20; i_36 += 1) 
                {
                    var_64 = ((/* implicit */long long int) max((var_64), (var_0)));
                    var_65 = ((/* implicit */int) min((var_65), (((/* implicit */int) (-(var_11))))));
                }
                /* vectorizable */
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) (unsigned short)57361))));
                    var_67 = ((/* implicit */_Bool) max((var_67), (((/* implicit */_Bool) (unsigned short)3597))));
                    arr_128 [(unsigned short)17] [i_32] [i_33] [i_32] = ((/* implicit */long long int) var_7);
                }
                arr_129 [i_32] = var_7;
                /* LoopNest 2 */
                for (long long int i_38 = 2; i_38 < 17; i_38 += 3) 
                {
                    for (signed char i_39 = 3; i_39 < 18; i_39 += 1) 
                    {
                        {
                            var_68 = ((/* implicit */int) (~(8283620021334138400LL)));
                            var_69 = ((/* implicit */long long int) 4294967293U);
                            arr_137 [i_19] [i_32] [4] [19] [i_33] [4] [i_39] = (unsigned short)65512;
                            var_70 = ((/* implicit */unsigned int) max((var_70), (1200220811U)));
                        }
                    } 
                } 
            }
            for (unsigned int i_40 = 0; i_40 < 20; i_40 += 1) 
            {
                arr_140 [i_32] [i_32 + 1] [i_32 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned short)52646)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (unsigned short)52627)))))));
                var_71 = ((/* implicit */_Bool) var_8);
                var_72 = (unsigned short)58099;
                /* LoopSeq 1 */
                for (unsigned short i_41 = 1; i_41 < 18; i_41 += 3) 
                {
                    var_73 = ((/* implicit */unsigned short) min((var_73), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(9223372036854775803LL)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */int) (short)15480)))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_42 = 4; i_42 < 16; i_42 += 2) 
                    {
                        var_74 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                        var_75 -= (unsigned short)52651;
                        var_76 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                    }
                    /* vectorizable */
                    for (short i_43 = 0; i_43 < 20; i_43 += 3) 
                    {
                        arr_150 [16LL] [i_32] [13LL] [16LL] [8LL] [i_32] = ((/* implicit */unsigned char) (signed char)-18);
                        var_77 -= ((/* implicit */long long int) var_2);
                        arr_151 [i_19] [i_32] [i_41 + 2] [i_32] [19LL] = ((/* implicit */_Bool) var_5);
                        var_78 = ((/* implicit */long long int) max((var_78), (((/* implicit */long long int) (((!(((/* implicit */_Bool) 3U)))) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_9)))))));
                    }
                    for (long long int i_44 = 0; i_44 < 20; i_44 += 3) 
                    {
                        arr_156 [i_19] [i_32] [(unsigned short)8] [i_44] = (~(var_2));
                        var_79 = (unsigned short)19946;
                        arr_157 [i_44] [i_32] [i_32] [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(6U)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-5))))) ? (2235777823818167828ULL) : (((/* implicit */unsigned long long int) (-(2006363246U)))))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                    }
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_45 = 0; i_45 < 20; i_45 += 3) 
            {
                for (int i_46 = 0; i_46 < 20; i_46 += 2) 
                {
                    {
                        var_80 = ((/* implicit */unsigned int) var_5);
                        /* LoopSeq 1 */
                        for (long long int i_47 = 2; i_47 < 19; i_47 += 2) 
                        {
                            arr_166 [i_19] [i_32] [i_32] [i_19] [i_47] = ((/* implicit */long long int) (short)32767);
                            arr_167 [i_19] [i_32] [5] [i_46] [i_47 - 2] [i_32] [i_45] = ((/* implicit */short) var_5);
                            var_81 = ((/* implicit */int) min((var_81), (((/* implicit */int) (+((+(var_2))))))));
                        }
                    }
                } 
            } 
        }
    }
    var_82 = var_7;
    var_83 = ((/* implicit */short) var_8);
}
