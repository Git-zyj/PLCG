/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220502
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) -1))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                var_17 = (~((((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_0 [i_2] [10])))));
                var_18 = ((/* implicit */signed char) (((~(((/* implicit */int) min(((short)-2214), ((short)-1)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 268435455))))))));
                arr_8 [i_2] = ((/* implicit */unsigned char) (unsigned short)3485);
                var_19 = (!(((_Bool) (~(((/* implicit */int) (unsigned char)255))))));
            }
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) != (((((/* implicit */int) arr_2 [i_3])) + (((/* implicit */int) (short)-30881)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [(_Bool)1])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
                    var_21 = ((/* implicit */short) arr_10 [i_1]);
                }
                var_22 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)2214))))) ? (((int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [(unsigned short)9]))))))));
                arr_14 [i_0] [(_Bool)1] [i_3] = arr_11 [i_0] [i_1] [i_3] [i_3] [i_3];
                arr_15 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (signed char)63)) : (arr_12 [i_1] [i_1] [i_3] [i_0] [i_1] [i_0]))) != (((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)14084))))), ((short)16962))))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    /* LoopSeq 4 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        arr_27 [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_18 [i_1] [i_5] [i_7]);
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_26 [i_0] [i_0]))));
                    }
                    for (signed char i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_29 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]))))));
                        arr_30 [i_5] [(short)8] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_2))), ((+(((/* implicit */int) (signed char)94))))));
                        var_25 = ((/* implicit */int) ((short) (-2147483647 - 1)));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) max((436527200), (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_5])))))) > (((((/* implicit */_Bool) (short)30490)) ? (0) : (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)28131))))))));
                        var_27 = ((/* implicit */short) ((arr_26 [i_5] [i_5]) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)65524))));
                    }
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) arr_22 [i_0] [i_5] [i_6] [i_5]))) ? (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) arr_28 [i_1] [i_6] [i_5] [i_1] [i_0] [i_0])) : (264879767))) : (((int) 1072693248))))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (~(1072693258))))) ? ((~(((/* implicit */int) max((arr_32 [i_9] [(signed char)5] [i_5] [i_9] [(unsigned short)2]), ((unsigned short)37408)))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (short)5292)))))))));
                        arr_33 [i_0] [i_1] [i_5] [i_6] [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (short)4491)) / (1561938608)));
                        arr_34 [i_5] [i_5] [i_1] [i_5] = ((/* implicit */short) (~(((/* implicit */int) (signed char)10))));
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) min((arr_28 [i_9 - 2] [i_9] [i_9 + 2] [i_9] [i_9] [i_9 - 3]), (arr_28 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 - 3] [i_9 + 2] [i_9 + 2]))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)4952)) ^ (arr_3 [i_0] [i_1] [i_5])));
                        var_32 = ((/* implicit */unsigned char) ((arr_3 [i_10] [i_6] [i_1]) / (arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 2] [i_10 + 3])));
                        var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) -14)) && (((((/* implicit */int) arr_21 [i_0] [i_10] [i_10] [i_10])) >= (304820794)))));
                    }
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) ((short) ((short) ((_Bool) 649356571))));
                        var_35 = ((/* implicit */short) ((-1) & (((/* implicit */int) (unsigned char)168))));
                        arr_40 [i_5] [i_1] [i_5] = ((1249861140) ^ (((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) (unsigned short)65532))))));
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) ((short) ((unsigned char) -649356572)));
                        var_36 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_11] [(short)9] [(short)9] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_19 [(signed char)4] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (short)-32305)) : (((/* implicit */int) (unsigned short)8315)))));
                    }
                    for (int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        arr_44 [i_1] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-868)))));
                        var_37 = ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 2067551398)))));
                    }
                    for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        var_38 = (((-(((/* implicit */int) arr_17 [i_5] [i_1] [i_5])))) / ((((_Bool)1) ? ((-(-1))) : (((((/* implicit */_Bool) (short)25491)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_48 [i_5] = ((/* implicit */unsigned char) arr_43 [(signed char)6] [i_1] [i_1] [(signed char)6] [i_1] [i_5] [(signed char)3]);
                    }
                    for (short i_14 = 2; i_14 < 8; i_14 += 2) 
                    {
                        var_39 = ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (304820809)))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_42 [i_0] [i_5] [i_6])))) : (min((2147483628), (-869122689))));
                        arr_51 [i_0] [i_5] [i_5] [i_6] [i_14] = ((/* implicit */unsigned short) min((arr_12 [(_Bool)1] [i_1] [i_5] [i_6] [i_14] [0]), (((arr_26 [i_5] [i_1]) ? (((/* implicit */int) arr_17 [i_5] [i_5] [i_5])) : (((((/* implicit */int) arr_26 [i_5] [i_5])) + (((/* implicit */int) (short)-8192))))))));
                    }
                }
                arr_52 [i_1] [i_5] [i_1] [(unsigned char)8] = ((/* implicit */int) arr_25 [i_5]);
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((int) arr_35 [i_0] [i_5] [i_0] [i_0] [i_0])), (((/* implicit */int) ((arr_35 [i_0] [i_5] [i_1] [i_5] [i_5]) && (((/* implicit */_Bool) 27914820)))))))) ? ((~(((((/* implicit */_Bool) arr_29 [i_0] [i_1] [i_5] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)87)) : (arr_7 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((signed char) (_Bool)1)))));
            }
            for (int i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                arr_55 [i_15] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) (short)24080)) ? (((/* implicit */int) (_Bool)1)) : (-309286551))))), (((short) ((((/* implicit */_Bool) (unsigned short)65191)) ? (((/* implicit */int) (unsigned short)1024)) : (((/* implicit */int) (unsigned char)128)))))));
                arr_56 [i_15] [i_1] [i_15] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) ((short) (_Bool)1)))), ((+(((/* implicit */int) arr_53 [i_15] [i_15] [i_1] [i_0]))))));
                arr_57 [i_0] [i_15] [i_0] [i_0] = min((1036338407), (-304820793));
                /* LoopSeq 2 */
                for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 3; i_17 < 10; i_17 += 2) 
                    {
                        arr_64 [i_15] [i_1] [i_15] = ((/* implicit */short) 16744448);
                        var_41 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_26 [i_15] [i_17]))));
                        var_42 = ((/* implicit */int) (short)-5353);
                        var_43 = ((/* implicit */signed char) 76031464);
                    }
                    var_44 = ((/* implicit */unsigned short) var_12);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_18 = 3; i_18 < 11; i_18 += 2) /* same iter space */
                    {
                        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))) : (((int) arr_63 [i_15] [i_0] [i_15] [i_0] [i_0] [i_0] [i_15]))));
                        arr_67 [i_18 - 3] [i_16] [i_15] [i_1] [i_15] [i_1] [i_0] = ((/* implicit */short) ((signed char) arr_16 [i_1]));
                        var_46 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) (short)-21951)) : (32484538))));
                        arr_68 [i_18] [i_16] [i_15] [i_16] [i_15] = ((/* implicit */int) ((_Bool) 1594730457));
                    }
                    for (short i_19 = 3; i_19 < 11; i_19 += 2) /* same iter space */
                    {
                        arr_71 [i_15] [i_16] [i_15] [i_0] [i_15] = ((((_Bool) (!(arr_26 [i_15] [i_1])))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (short)5352))))) ? (((/* implicit */int) (short)271)) : (((/* implicit */int) arr_61 [i_19] [i_16] [i_15] [i_1] [i_0])))) : (((/* implicit */int) (short)0)));
                        var_47 = ((/* implicit */short) ((((((-32484538) | (((/* implicit */int) (unsigned short)23574)))) | (((/* implicit */int) arr_11 [i_19] [i_19 - 3] [(unsigned short)11] [i_19] [i_19])))) | (min((((/* implicit */int) arr_58 [i_19 - 2] [i_19 - 1] [i_19 + 1] [i_19 - 3] [i_19 + 1])), (((((/* implicit */_Bool) -904397922)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)23554))))))));
                        var_48 = (+(((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) (unsigned short)50654)) : (((/* implicit */int) var_2)))));
                    }
                    var_49 |= ((/* implicit */unsigned short) arr_58 [i_0] [i_0] [i_15] [i_1] [i_15]);
                }
                for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                {
                    arr_75 [i_15] [i_15] [11] [i_15] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_15] [i_20]);
                    arr_76 [i_15] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) 1601768073)) ? (((/* implicit */int) (short)-5353)) : (((/* implicit */int) (unsigned char)176)))), (((/* implicit */int) (short)1062))));
                }
                var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_31 [i_15] [i_1] [i_0] [i_0]))) ? (((((/* implicit */int) (unsigned char)226)) ^ ((~(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)16828)))))));
            }
            var_51 -= ((/* implicit */int) (short)11098);
            arr_77 [i_1] [i_1] [(signed char)7] = ((/* implicit */short) min((((/* implicit */int) (short)11108)), (((76031490) & (((/* implicit */int) (short)13915))))));
            arr_78 [i_1] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) -1385603817)) ? (((/* implicit */int) (short)12852)) : (((/* implicit */int) (unsigned short)13534)))), (((/* implicit */int) ((signed char) -76031490))))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) (signed char)125))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            var_52 = ((/* implicit */signed char) arr_65 [i_0] [i_0] [i_21] [i_0] [i_0] [i_0]);
            arr_81 [i_21] [i_0] [(unsigned short)8] = ((((/* implicit */_Bool) arr_7 [i_0] [i_21] [i_21])) ? (((/* implicit */int) (short)-16678)) : (2074962816));
        }
    }
    var_53 = ((/* implicit */short) var_2);
    /* LoopSeq 1 */
    for (int i_22 = 0; i_22 < 19; i_22 += 2) 
    {
        arr_86 [i_22] [i_22] = ((/* implicit */short) arr_83 [i_22]);
        /* LoopSeq 2 */
        for (unsigned char i_23 = 4; i_23 < 18; i_23 += 4) 
        {
            var_54 = ((/* implicit */short) (~(((int) min((1169713223), (((/* implicit */int) (unsigned short)13534)))))));
            arr_90 [(unsigned char)10] [(signed char)2] = ((/* implicit */unsigned short) ((short) (short)0));
            var_55 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-76031517) * (((((/* implicit */_Bool) arr_83 [i_23])) ? (0) : (76031519)))))) ? ((-((~(((/* implicit */int) (_Bool)1)))))) : ((((~(((/* implicit */int) (unsigned char)127)))) + (max((76031517), (((/* implicit */int) arr_89 [i_22]))))))));
        }
        for (int i_24 = 4; i_24 < 15; i_24 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_25 = 0; i_25 < 19; i_25 += 1) 
            {
                arr_97 [2] [i_24] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) 1328248576)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_25])) ? (((/* implicit */int) (short)-12411)) : (((/* implicit */int) arr_84 [4]))))) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)99))))))) : (((/* implicit */int) (short)-885))));
                /* LoopSeq 1 */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_100 [i_26] [i_24] [5] [i_24] [i_24] [i_22] = ((/* implicit */short) ((unsigned char) (!(((/* implicit */_Bool) arr_92 [i_22] [i_24] [i_25])))));
                    var_56 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)35385)) ? (((((/* implicit */int) max((arr_99 [i_22] [i_24] [i_25] [i_26]), (((/* implicit */unsigned short) arr_98 [i_24] [i_25] [i_24 - 1] [i_24]))))) / ((-(arr_83 [i_24 + 2]))))) : (((((/* implicit */int) arr_94 [i_24 - 1] [i_24 + 2] [i_24 - 2])) * (((/* implicit */int) arr_89 [i_24]))))));
                    var_57 = ((/* implicit */unsigned short) max((var_57), (((unsigned short) ((unsigned char) arr_95 [i_24 - 3] [i_24 - 1] [i_24 - 4])))));
                    var_58 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_99 [i_26] [(signed char)6] [i_24 - 4] [i_22]))))) != (arr_92 [i_25] [i_25] [i_25])))) != (((/* implicit */int) ((short) (unsigned short)26955)))));
                    var_59 = ((((/* implicit */_Bool) (((~(-1130436986))) | (((/* implicit */int) arr_95 [i_24] [i_24 + 4] [i_24 - 3]))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_84 [i_22])))))) : (((/* implicit */int) (_Bool)1)));
                }
            }
            arr_101 [i_24] = ((/* implicit */_Bool) -6);
            /* LoopSeq 1 */
            for (signed char i_27 = 1; i_27 < 17; i_27 += 2) 
            {
                arr_104 [i_27] [i_24] [i_22] = ((/* implicit */int) (signed char)-95);
                arr_105 [i_27] [i_27] [i_22] [i_27] |= ((/* implicit */signed char) (_Bool)1);
                arr_106 [i_24] [i_24] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned short)26944))))))) && ((!(((/* implicit */_Bool) -1385603808))))));
                arr_107 [i_22] [i_24] [i_27 + 2] = ((/* implicit */signed char) 936579398);
            }
        }
        var_60 = 572252110;
        /* LoopSeq 3 */
        for (short i_28 = 0; i_28 < 19; i_28 += 3) 
        {
            var_61 = ((/* implicit */unsigned short) (!(((_Bool) -936579398))));
            var_62 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_85 [(short)0])), (2147483647)))) ? (((/* implicit */int) ((unsigned char) -791658402))) : (((/* implicit */int) arr_84 [i_22]))))) ? ((+(((((/* implicit */_Bool) 197480949)) ? (arr_83 [i_22]) : (((/* implicit */int) arr_96 [i_22] [i_22] [i_22])))))) : (((int) arr_102 [i_22] [i_22] [i_22] [i_28])));
        }
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) /* same iter space */
        {
            var_63 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_110 [i_29]))) ? (((/* implicit */int) ((unsigned char) arr_91 [i_29]))) : (((((/* implicit */int) arr_95 [i_22] [i_22] [i_22])) ^ (arr_110 [i_29])))));
            arr_112 [i_29] [i_29] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)27)) ? (1838721869) : (arr_83 [i_22]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_30 = 0; i_30 < 19; i_30 += 4) 
            {
                arr_115 [i_22] [i_29] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_110 [i_22])) ? (((/* implicit */int) arr_95 [i_22] [i_29] [i_22])) : (-778631266)));
                arr_116 [i_29] [i_29] [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) arr_85 [i_22])) ? (((/* implicit */int) arr_85 [i_22])) : (((/* implicit */int) arr_85 [i_22]))));
            }
        }
        for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
        {
            var_64 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [i_31])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)104)), ((short)30720)))) : (((/* implicit */int) arr_85 [i_22]))));
            var_65 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_120 [i_22] [i_31])) ? (((/* implicit */int) min((arr_103 [i_31] [i_31] [i_31] [i_31]), ((short)-11352)))) : (((int) 1385603794)))));
        }
    }
    var_66 = ((/* implicit */short) max(((~(((/* implicit */int) min((((/* implicit */short) (signed char)124)), ((short)15503)))))), (((/* implicit */int) (signed char)-53))));
}
