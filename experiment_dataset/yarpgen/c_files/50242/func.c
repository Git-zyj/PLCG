/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50242
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (((+(((((/* implicit */int) arr_6 [i_1] [i_1] [22])) - (((/* implicit */int) (unsigned short)25106)))))) - (((/* implicit */int) arr_6 [i_3] [i_3] [i_2]))));
                        arr_10 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) (short)-14585)), (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [12ULL]))));
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((signed char) arr_6 [i_0 - 3] [i_0 - 3] [i_0]));
                        var_17 -= ((/* implicit */short) (((+(((/* implicit */int) var_9)))) - (max((((/* implicit */int) arr_0 [i_3])), ((-(((/* implicit */int) var_12))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0 + 1] [i_0 + 1]);
        arr_12 [(signed char)0] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) && (((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) max(((short)14580), ((short)-14567))))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            arr_18 [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_5])))))));
            var_20 |= ((/* implicit */short) (((-(((/* implicit */int) arr_6 [i_5 - 1] [i_5 - 1] [i_4])))) % (((/* implicit */int) max(((unsigned char)171), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4])) || (((/* implicit */_Bool) var_14))))))))));
            var_21 -= ((/* implicit */unsigned char) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_5 - 1] [(_Bool)1] [i_5]) : (((/* implicit */int) arr_15 [i_4] [(short)18]))))));
        }
        for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)183)), ((-(((/* implicit */int) (signed char)44))))));
            arr_22 [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_5 [i_4] [i_4] [i_4] [i_6 + 3]))) > (arr_5 [i_4] [i_4] [i_6 + 2] [i_6 + 3])));
        }
        var_23 *= ((/* implicit */short) (-((-(((/* implicit */int) (short)14582))))));
        var_24 = ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_14 [i_4])) && (((/* implicit */_Bool) arr_0 [i_4])))) && ((!(((/* implicit */_Bool) var_10))))))));
        var_25 = min((((/* implicit */unsigned long long int) max((arr_15 [i_4] [8ULL]), (((/* implicit */unsigned short) arr_1 [(unsigned char)0]))))), ((~((+(10549025796138514323ULL))))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_21 [i_7] [i_7]));
        /* LoopSeq 4 */
        for (long long int i_8 = 3; i_8 < 15; i_8 += 1) 
        {
            arr_29 [7] [i_8] = ((/* implicit */unsigned char) (~(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_7]))) : (arr_19 [i_8] [i_7] [i_7])))));
            var_26 = ((/* implicit */unsigned short) arr_3 [i_7] [i_7] [i_8]);
            var_27 *= ((/* implicit */unsigned char) arr_9 [i_7] [i_7] [i_7] [i_8 - 2]);
        }
        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 17; i_10 += 4) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned short) var_2);
                        var_29 = ((/* implicit */unsigned long long int) arr_8 [i_7] [(signed char)22] [i_11 + 1] [i_11 + 1]);
                        arr_40 [i_7] [i_9] = ((/* implicit */long long int) ((unsigned short) arr_37 [i_11 + 1] [i_11 - 2] [i_11] [i_10 - 2]));
                        arr_41 [i_7] [i_9] [i_9] [i_11] [i_10] [i_7] = (+((~(((/* implicit */int) var_0)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (int i_13 = 3; i_13 < 14; i_13 += 3) 
                {
                    for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        {
                            arr_52 [i_7] [i_13] [(short)12] [i_13] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_13 - 2] [i_12 + 1]))));
                            var_30 ^= ((((/* implicit */int) var_13)) == (arr_3 [i_7] [i_14] [i_9]));
                        }
                    } 
                } 
            } 
            var_31 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))));
            arr_53 [i_7] [i_9] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_21 [i_7] [i_7])) ^ (((/* implicit */int) arr_43 [i_9] [i_7] [i_7]))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            var_32 = ((/* implicit */unsigned char) ((var_6) ? (((/* implicit */long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) / (arr_45 [i_7] [i_7] [i_7] [i_7])))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */int) arr_44 [i_7] [i_15] [i_15] [i_15])) : (arr_3 [i_7] [i_7] [(signed char)18])))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) arr_28 [i_7] [1] [1]))));
        }
        for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
        {
            arr_58 [i_7] [i_7] [i_16] = ((/* implicit */short) (unsigned char)200);
            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_44 [i_7] [i_16] [i_7] [i_7]))));
            var_35 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-14582)) < (((/* implicit */int) arr_16 [i_16] [i_16] [i_16]))));
            arr_59 [i_16] [i_16] = ((/* implicit */unsigned long long int) var_3);
        }
        /* LoopNest 2 */
        for (short i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 18; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_19 = 1; i_19 < 16; i_19 += 4) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 15; i_20 += 3) 
                        {
                            {
                                arr_68 [i_7] [i_17] [i_18] [i_19] [i_20] = ((((/* implicit */_Bool) arr_15 [i_7] [i_20])) ? (arr_67 [i_7] [i_17] [i_18] [i_19 - 1] [i_19] [i_19 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_7] [i_20] [i_17]))));
                                arr_69 [i_20] [i_20] = ((/* implicit */short) (signed char)32);
                                arr_70 [i_20] [i_20] [i_18] [i_20] [i_20] [i_20] [i_7] = ((/* implicit */short) (~(arr_61 [i_19 + 1] [i_20 + 2])));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_7] [i_17])) || (((/* implicit */_Bool) arr_3 [i_18] [i_18] [i_7]))));
                }
            } 
        } 
        arr_71 [i_7] &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)90))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))) : (((arr_28 [i_7] [i_7] [i_7]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_7] [i_7])))))));
    }
    /* LoopSeq 1 */
    for (long long int i_21 = 1; i_21 < 14; i_21 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_22 = 1; i_22 < 16; i_22 += 4) 
        {
            var_37 = ((/* implicit */unsigned short) (-((+(var_1)))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_22 + 1] [i_22 + 1] [i_22 - 1]))))) ? (17143706361701294828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_16 [i_22 + 1] [i_22 - 1] [i_22 - 1]), (arr_16 [i_22 + 1] [i_22 - 1] [i_22 + 1])))))));
            arr_78 [i_21] [i_22 + 1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_55 [i_21 + 1])), (((((/* implicit */int) arr_55 [i_21 - 1])) ^ (((/* implicit */int) arr_55 [i_21 + 1]))))));
            arr_79 [i_21] = ((/* implicit */signed char) ((long long int) (~(arr_45 [16ULL] [i_22 - 1] [i_22] [(signed char)4]))));
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [(_Bool)1] [i_21] [i_21 + 1])) >> (((arr_50 [i_22] [i_22] [i_22] [(unsigned char)12] [i_22 + 1] [i_22]) + (6719551541985345034LL)))))) || (((_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (var_11))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_24 = 1; i_24 < 15; i_24 += 1) 
            {
                for (long long int i_25 = 3; i_25 < 16; i_25 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 4) 
                        {
                            arr_91 [i_21] [i_23] [i_24] [i_24] [i_24] [i_25] [i_26] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_26] [i_23])) > (((/* implicit */int) var_12))));
                            var_40 &= ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                            var_41 ^= ((/* implicit */long long int) ((unsigned char) arr_64 [i_24 + 2] [i_24 + 2]));
                        }
                        for (unsigned long long int i_27 = 0; i_27 < 17; i_27 += 4) 
                        {
                            var_42 ^= ((/* implicit */signed char) arr_0 [i_21]);
                            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1348059708)) ? (((/* implicit */int) arr_33 [i_23] [i_23])) : (((/* implicit */int) (short)32753))));
                        }
                        arr_95 [i_21] [i_23] [i_24] [7ULL] &= ((/* implicit */unsigned char) arr_3 [i_21 - 1] [0LL] [i_24 - 1]);
                    }
                } 
            } 
            var_44 -= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)172))));
            /* LoopSeq 1 */
            for (long long int i_28 = 0; i_28 < 17; i_28 += 3) 
            {
                arr_99 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_97 [i_21 - 1] [(_Bool)1] [i_28])) / ((~(-1901399518)))));
                arr_100 [i_21] [i_21] [i_21] = ((/* implicit */unsigned long long int) ((signed char) arr_16 [i_21 + 1] [i_21 + 1] [i_21 - 1]));
                var_45 = ((/* implicit */long long int) var_14);
                /* LoopSeq 2 */
                for (unsigned char i_29 = 2; i_29 < 16; i_29 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_46 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (unsigned char)68))) * ((~(((/* implicit */int) arr_42 [i_30] [i_28] [i_23]))))));
                        var_47 = ((/* implicit */unsigned char) 2123295524752254880ULL);
                        var_48 = (~(((/* implicit */int) arr_98 [(short)4] [i_21 + 3] [13U])));
                        arr_106 [i_21] [i_21 + 1] [i_21 + 1] [i_21 + 1] [i_21] [i_30] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_86 [i_21] [i_23] [i_28] [i_29 - 2] [i_30]))));
                        arr_107 [i_23] [i_29] [0ULL] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)6]))) : (arr_75 [i_21]))));
                    }
                    arr_108 [i_21] [i_23] [(unsigned char)2] [i_21] = ((/* implicit */_Bool) arr_21 [i_29] [i_29]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 1; i_31 < 14; i_31 += 1) 
                    {
                        var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_12))) ? (((/* implicit */unsigned long long int) ((int) var_7))) : (var_7)));
                        var_50 = ((/* implicit */signed char) (~(arr_46 [i_31] [i_31] [i_31 - 1] [i_31] [i_31] [i_31 + 2])));
                        arr_111 [i_31] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_75 [i_31]))))));
                        var_51 = arr_103 [i_21 + 3] [i_29 + 1] [i_29 - 2];
                    }
                }
                for (unsigned short i_32 = 0; i_32 < 17; i_32 += 3) 
                {
                    arr_116 [i_28] [i_23] = ((/* implicit */unsigned char) ((unsigned long long int) arr_14 [18ULL]));
                    var_52 = ((2833198039828752289LL) - (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_21 + 2]))));
                }
            }
            arr_117 [i_21] [i_23] = ((/* implicit */unsigned char) 5121849326596930870LL);
            /* LoopNest 2 */
            for (signed char i_33 = 1; i_33 < 14; i_33 += 1) 
            {
                for (short i_34 = 1; i_34 < 16; i_34 += 3) 
                {
                    {
                        arr_123 [i_21] [i_23] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
                        var_53 = ((/* implicit */_Bool) ((unsigned short) arr_47 [8ULL] [i_23] [i_33 - 1] [i_33] [i_33] [i_34]));
                        arr_124 [i_21] [(short)9] [i_21] [(short)5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_115 [i_34 + 1] [(unsigned char)9] [i_21 + 2] [i_33 + 1]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_35 = 1; i_35 < 14; i_35 += 3) 
        {
            arr_129 [i_35] [i_35] = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_21] [i_35] [i_21]))))), (arr_126 [i_35]))))));
            var_54 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_97 [i_21 - 1] [i_21 + 1] [i_21 + 2])))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) arr_115 [i_21] [i_21] [i_21] [i_35])))))))));
            var_55 = ((/* implicit */long long int) var_9);
        }
        arr_130 [i_21] [i_21] = ((/* implicit */signed char) var_13);
        /* LoopNest 2 */
        for (unsigned long long int i_36 = 3; i_36 < 16; i_36 += 4) 
        {
            for (unsigned long long int i_37 = 3; i_37 < 14; i_37 += 4) 
            {
                {
                    arr_135 [i_21] [i_36] [i_37] = ((/* implicit */short) arr_7 [i_21] [i_21 + 3] [i_37 - 3]);
                    arr_136 [(_Bool)1] |= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_81 [i_21 + 1]))) ^ (((/* implicit */int) ((arr_30 [i_21 + 3] [i_36 - 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_21 - 1] [4]))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_38 = 0; i_38 < 17; i_38 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_39 = 0; i_39 < 17; i_39 += 3) 
                        {
                            arr_142 [i_36] [i_36] [i_36] [i_39] = ((/* implicit */unsigned int) ((unsigned long long int) (!(arr_87 [i_21] [i_36]))));
                            var_56 = ((/* implicit */short) arr_35 [i_37 + 3] [i_36 - 1]);
                        }
                        for (int i_40 = 4; i_40 < 15; i_40 += 4) 
                        {
                            var_57 += ((/* implicit */short) (~(((/* implicit */int) arr_87 [i_36 + 1] [i_40]))));
                            var_58 = ((/* implicit */unsigned long long int) arr_35 [i_36] [i_40]);
                            arr_146 [i_38] [i_36] [i_36] = ((/* implicit */long long int) (~(arr_145 [i_36] [(signed char)6] [i_36 + 1] [i_36] [i_36 - 1])));
                            arr_147 [i_21] [i_21 + 3] [i_21] [i_21] [i_36] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_21 + 1] [i_36 - 1] [i_21 + 1] [i_36 - 1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_41 = 0; i_41 < 17; i_41 += 3) 
                        {
                            arr_150 [i_36] = ((/* implicit */unsigned long long int) (+(var_1)));
                            var_59 = ((/* implicit */unsigned char) (-(var_5)));
                            arr_151 [i_21] [i_21] [i_36] [i_36] [i_21] [i_41] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_89 [i_21 - 1] [i_36 - 3] [i_37 + 2]))));
                            var_60 = ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_4)))) >= (((/* implicit */int) ((_Bool) arr_49 [i_21] [i_21] [i_36] [i_38]))));
                        }
                        for (unsigned short i_42 = 1; i_42 < 15; i_42 += 1) 
                        {
                            var_61 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-31))));
                            arr_155 [i_36] [i_36] [i_37] [i_37] [i_42] = ((/* implicit */unsigned short) arr_66 [0] [i_36] [i_37] [i_36] [0] [i_21]);
                        }
                        var_62 = ((/* implicit */unsigned char) ((unsigned int) arr_125 [i_36]));
                        var_63 = ((/* implicit */long long int) var_13);
                    }
                    var_64 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_6 [i_37 - 1] [i_36 - 1] [i_21 - 1])), (arr_105 [i_21 + 1] [i_21 + 1] [i_36 - 3] [i_37 - 2]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_6 [i_37 + 3] [i_36 - 3] [i_21 + 3]), (arr_6 [i_37 + 1] [i_36 - 1] [i_21 - 1])))))));
                }
            } 
        } 
    }
}
