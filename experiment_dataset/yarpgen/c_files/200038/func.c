/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200038
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) ((signed char) var_8));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((unsigned char) (~(var_17))));
            var_22 = ((/* implicit */short) var_12);
            var_23 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)51045)) & (((/* implicit */int) var_12))));
        }
        for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            var_24 = var_2;
            var_25 = ((/* implicit */signed char) ((short) var_5));
            arr_10 [i_0] = (((_Bool)1) ? (((((/* implicit */_Bool) var_3)) ? (var_18) : (((/* implicit */int) var_14)))) : (-1683191167));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */short) ((((-4585972958811440378LL) + (9223372036854775807LL))) << (((4585972958811440370LL) - (4585972958811440370LL)))));
                var_27 = ((/* implicit */unsigned long long int) (unsigned char)149);
                var_28 += ((/* implicit */short) var_18);
            }
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */short) ((unsigned long long int) var_9));
                var_30 ^= ((/* implicit */short) var_9);
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((short) ((-6376737522228212629LL) ^ (((/* implicit */long long int) 1128761000U))))))));
                arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_8)));
            }
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
            {
                arr_22 [i_0] [(short)5] [(short)11] = ((/* implicit */unsigned int) var_14);
                var_32 = ((int) var_13);
            }
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
            {
                arr_25 [i_6] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */int) var_12)) << (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)41)))) + (26271)))));
                var_33 = ((/* implicit */short) var_19);
                var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)103)) % (((/* implicit */int) (signed char)41))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42))) * (var_5)));
                            arr_30 [i_0] [i_0] [i_0] [(unsigned char)0] [i_0] &= ((/* implicit */unsigned int) ((7020887748226221847ULL) << (((((/* implicit */int) (unsigned char)255)) - (229)))));
                            arr_31 [i_6] [i_2] [i_6] [i_7] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_19)));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */signed char) 819289506);
        }
        var_38 = (~(((/* implicit */int) var_10)));
    }
    for (short i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        arr_34 [i_9] = ((/* implicit */unsigned char) var_17);
        arr_35 [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) (signed char)127)))) : (((int) (unsigned char)109)))) >= (((/* implicit */int) var_13))));
        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((((((/* implicit */int) ((short) var_7))) >> (((/* implicit */int) ((short) var_15))))) & ((+(((/* implicit */int) (short)-6295)))))))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
    {
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (signed char)72))));
        var_41 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -845236596)) || (((/* implicit */_Bool) 18336916696653144147ULL)))))) > (7020887748226221847ULL))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) 11044979663177480505ULL))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)7186)), ((unsigned short)10771)))) ? (((/* implicit */int) max((((/* implicit */short) var_15)), (var_14)))) : (((((/* implicit */_Bool) var_13)) ? (var_17) : (((/* implicit */int) (short)32761))))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 19; i_11 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_12 = 4; i_12 < 18; i_12 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
            {
                var_42 = ((/* implicit */unsigned char) var_5);
                /* LoopSeq 1 */
                for (signed char i_14 = 1; i_14 < 18; i_14 += 2) 
                {
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) (short)-2458)))) : (((((/* implicit */int) (signed char)69)) & (((/* implicit */int) (unsigned char)133))))));
                    var_44 = ((/* implicit */unsigned short) (signed char)-74);
                }
                arr_46 [i_13] [i_13] [i_13] [i_13] = ((/* implicit */long long int) (signed char)-45);
                /* LoopSeq 4 */
                for (int i_15 = 0; i_15 < 19; i_15 += 1) 
                {
                    var_45 ^= ((/* implicit */long long int) var_0);
                    arr_49 [i_13 - 1] [i_12] [i_15] [i_15] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-1231)) ? (1005396503) : (var_18)))));
                    var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((unsigned int) var_6)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        arr_54 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((signed char) (signed char)-112));
                        var_47 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        var_48 = (((-(524287U))) - (((((/* implicit */_Bool) 205847958200968632LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))));
                    }
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_49 = ((short) (+(((/* implicit */int) var_12))));
                    var_50 = ((/* implicit */int) ((short) var_4));
                }
                for (signed char i_18 = 0; i_18 < 19; i_18 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) (short)-4111))))) ? (((/* implicit */int) (unsigned char)163)) : (((var_17) & (((/* implicit */int) var_2))))));
                        var_52 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
                        var_53 += ((/* implicit */short) (+(((/* implicit */int) (unsigned short)55569))));
                        var_54 += ((/* implicit */unsigned short) var_1);
                        arr_66 [i_13] [i_13 + 1] [i_13] [i_13 + 2] [i_13] = ((/* implicit */unsigned short) var_13);
                    }
                    for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        var_55 = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_14)))));
                        arr_69 [(unsigned char)3] [i_20] [i_20] [i_20] |= ((/* implicit */signed char) var_2);
                    }
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 3) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        arr_72 [i_11] [i_18] [i_13] [i_11] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)9966)) != (var_11))))));
                        var_57 = ((/* implicit */_Bool) max((var_57), (((/* implicit */_Bool) var_8))));
                        var_58 = ((/* implicit */signed char) var_5);
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 4; i_22 < 18; i_22 += 2) /* same iter space */
                    {
                        var_59 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (signed char)127))) != ((~(((/* implicit */int) (signed char)-48))))));
                        var_60 = (+(((/* implicit */int) var_9)));
                        arr_77 [i_11] [i_11] [i_11] [2U] [(unsigned char)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25211)) ? (((/* implicit */int) ((unsigned short) -364511674))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)26903)) : (-728466046)))));
                    }
                    for (unsigned char i_23 = 4; i_23 < 18; i_23 += 2) /* same iter space */
                    {
                        arr_82 [i_23 + 1] [i_18] [i_13] [(unsigned short)15] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) ((2875842522U) == (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) >= ((+(((/* implicit */int) (unsigned short)15))))));
                        var_61 = (signed char)-67;
                    }
                    for (unsigned char i_24 = 4; i_24 < 18; i_24 += 2) /* same iter space */
                    {
                        var_62 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((long long int) 622463075U)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))));
                        arr_85 [i_11] [i_12 - 3] [i_11] [i_11] [i_24] = ((/* implicit */signed char) ((unsigned long long int) (-(((/* implicit */int) (short)-3922)))));
                    }
                    for (unsigned short i_25 = 3; i_25 < 17; i_25 += 1) 
                    {
                        arr_88 [i_12] [(signed char)13] [i_25 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)101)))))) ? (((/* implicit */int) (_Bool)1)) : (923790495)));
                        var_63 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)0));
                        var_64 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */int) ((short) var_19))) : ((~(((/* implicit */int) (signed char)62))))));
                    }
                    arr_89 [i_13 - 1] [i_12] [i_12] [i_18] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
                    arr_90 [i_12 - 2] [i_18] [i_13 - 1] [i_12 - 2] [i_11] [(_Bool)1] = ((/* implicit */unsigned long long int) (signed char)0);
                    var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (unsigned short)9988))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)66))))) : (((((/* implicit */_Bool) (signed char)-61)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25483))) : (1363277917834337484ULL)))));
                }
                for (unsigned char i_26 = 1; i_26 < 18; i_26 += 1) 
                {
                    arr_94 [i_11] [i_26] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_19) : (((/* implicit */unsigned int) var_17))));
                    var_66 *= var_0;
                }
            }
            for (signed char i_27 = 0; i_27 < 19; i_27 += 1) /* same iter space */
            {
                var_67 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) -205847958200968619LL)) ? ((-(1998693388))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) >= (-205847958200968621LL))))));
                arr_97 [i_11] [i_11] [i_11] [i_11] = ((int) (signed char)-120);
                var_68 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)161)) ^ (var_17)));
            }
            for (signed char i_28 = 0; i_28 < 19; i_28 += 1) /* same iter space */
            {
                var_69 = var_15;
                var_70 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)8)) && (((/* implicit */_Bool) (short)14549))));
            }
            var_71 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)14525)))))));
        }
        for (long long int i_29 = 3; i_29 < 18; i_29 += 3) 
        {
            var_72 = ((/* implicit */unsigned long long int) (((-(var_4))) | (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            arr_104 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_12))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) 1749443398636962207LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (var_4)))));
        }
        var_73 = (unsigned short)2;
        arr_105 [i_11] = ((/* implicit */unsigned short) (unsigned char)169);
        arr_106 [i_11] &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 1506982479)) - (14850523452314799344ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    }
    for (unsigned int i_30 = 0; i_30 < 20; i_30 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_31 = 0; i_31 < 20; i_31 += 3) /* same iter space */
        {
            var_74 = ((/* implicit */unsigned char) min((var_74), (((/* implicit */unsigned char) ((int) (signed char)62)))));
            var_75 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_17)) ? (8742441128165185499LL) : (((/* implicit */long long int) var_19)))));
            var_76 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
        }
        for (int i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
        {
            var_77 &= ((/* implicit */long long int) ((((((/* implicit */int) (short)-3481)) | (((/* implicit */int) max((((/* implicit */short) var_7)), (var_14)))))) == (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)153))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)91))))) : (((/* implicit */int) ((signed char) (short)-29206)))))));
            arr_118 [i_32] [i_32] [i_30] = ((/* implicit */int) (((~(((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (unsigned char)102))))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)2040)) : (((/* implicit */int) var_10))))))))));
            arr_119 [i_30] [i_30] [i_30] = ((signed char) ((short) var_11));
            var_78 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned short)39276)) : (((/* implicit */int) var_16)))) <= (((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) var_9)))))));
        }
        var_79 = ((/* implicit */short) min((var_79), (((/* implicit */short) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */int) (((~(var_5))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) : (((/* implicit */int) (short)32760)))))));
        var_80 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) var_10))))));
    }
}
