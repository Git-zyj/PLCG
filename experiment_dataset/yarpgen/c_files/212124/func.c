/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212124
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) (-(((/* implicit */int) (short)15))));
        var_16 = ((/* implicit */short) ((((((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-23)) ? (((/* implicit */int) (short)-12624)) : (((/* implicit */int) var_9)))))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) (short)23)) || (((/* implicit */_Bool) (unsigned char)255))))) * (((/* implicit */int) ((((/* implicit */int) (short)-30)) >= (((/* implicit */int) (unsigned char)18)))))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (unsigned char)133))));
            var_17 = ((/* implicit */short) ((((((/* implicit */int) (short)-16)) / (((/* implicit */int) (unsigned char)7)))) - (((/* implicit */int) ((short) max(((short)(-32767 - 1)), ((short)-1)))))));
        }
        for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                arr_12 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)101))));
                var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) < (((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned char)1] [(unsigned char)1] [i_2] [i_2])) > (((/* implicit */int) (unsigned char)180))))))))));
            }
            for (short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ ((~(((/* implicit */int) var_2)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)11541)) & (((/* implicit */int) (short)2397))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_2] [i_6] [i_5] [i_0])) << (((((((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) (short)23)))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)60)), ((short)15)))) : (((/* implicit */int) (short)-1)))) - (55)))));
                        var_22 &= arr_0 [i_4];
                        arr_22 [i_2] [i_6] = (short)3004;
                    }
                    arr_23 [i_0] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((short) arr_15 [i_0] [i_2] [i_4] [i_5])))) ? (((((/* implicit */int) ((unsigned char) (unsigned char)255))) << ((((~(((/* implicit */int) (short)24576)))) + (24592))))) : (((/* implicit */int) ((short) ((((/* implicit */int) var_8)) < (((/* implicit */int) arr_5 [i_5] [i_4] [i_0]))))))));
                }
                var_23 = ((/* implicit */short) min((var_23), (min((arr_4 [i_0]), (var_0)))));
            }
            var_24 = ((/* implicit */unsigned char) max(((short)23), ((short)17028)));
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) /* same iter space */
            {
                var_25 &= ((/* implicit */unsigned char) (~(max((((/* implicit */int) ((unsigned char) (unsigned char)71))), (((((/* implicit */int) (short)-17024)) / (((/* implicit */int) (unsigned char)63))))))));
                var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) min(((~(((((/* implicit */int) (short)23)) % (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_2])))))), (((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0)))) ^ (((((/* implicit */int) (short)-30)) & (((/* implicit */int) var_1)))))))))));
                arr_28 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-3005)) : (((/* implicit */int) (short)-21959))));
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)63)) < (((((((/* implicit */int) var_0)) % (((/* implicit */int) arr_26 [i_2] [i_2])))) ^ (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_31 [i_0]))))))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (!(((/* implicit */_Bool) ((short) (short)-23))))))));
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    arr_35 [i_0] [i_7] = ((/* implicit */unsigned char) (short)-3009);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)10))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0])))))));
                    }
                    var_31 -= ((/* implicit */unsigned char) (short)24055);
                }
                for (short i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                {
                    arr_41 [i_7] [i_2] [i_2] [i_2] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max(((short)-23958), (((/* implicit */short) ((((/* implicit */int) arr_33 [i_0])) != (((/* implicit */int) (short)(-32767 - 1))))))))) ? (((/* implicit */int) ((((((/* implicit */int) var_5)) << (((((/* implicit */int) arr_9 [i_0 + 1])) + (3889))))) > (((((/* implicit */int) arr_33 [(short)4])) ^ (((/* implicit */int) var_6))))))) : ((+(((/* implicit */int) max(((unsigned char)48), ((unsigned char)126))))))));
                    arr_42 [i_0] [i_2] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_7] [i_11])) >= (((/* implicit */int) arr_2 [i_11] [i_11] [i_11]))))) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                    arr_43 [i_0] [i_7] [(unsigned char)7] [i_11] = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_7 [i_0] [i_2])) + (((/* implicit */int) (unsigned char)203)))))), ((~(((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_7] [i_7] [i_0 - 1]))))));
                }
                for (unsigned char i_12 = 1; i_12 < 13; i_12 += 4) 
                {
                    var_32 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) arr_17 [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) var_0)))) <= (((/* implicit */int) (short)-1705))));
                    arr_46 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) arr_13 [i_0 - 1] [i_12 + 2] [i_12])))) : (((((((/* implicit */int) (unsigned char)183)) * (((/* implicit */int) var_2)))) * (((/* implicit */int) arr_31 [i_0 + 1]))))));
                }
            }
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) arr_40 [i_0] [i_0 - 1] [i_2]))));
                var_34 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) (short)511))))) ? (((((/* implicit */_Bool) (short)-15313)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_48 [i_0] [i_0] [i_13] [i_13])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_0])))))));
            }
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
            {
                arr_51 [i_14] [i_0] [i_14] = ((/* implicit */unsigned char) arr_31 [i_14]);
                /* LoopSeq 1 */
                for (unsigned char i_15 = 1; i_15 < 13; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) (-((-(((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)24497))));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((short) (short)5275)))));
                    }
                    for (short i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        arr_58 [i_0] [i_0] [i_14] [i_0] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)250)))) > (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) (short)-16005)) + (((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) (short)-28992))))));
                        var_38 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-2596)) : (((/* implicit */int) (unsigned char)63))))) ? (min((((/* implicit */int) (short)32764)), (((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) var_7)))))) : (((((/* implicit */int) var_14)) % ((~(((/* implicit */int) (unsigned char)58))))))));
                        arr_59 [i_15] [i_15] [i_14] [(short)9] [i_15] = ((/* implicit */unsigned char) max((max((((/* implicit */short) ((((/* implicit */int) (unsigned char)75)) != (((/* implicit */int) var_4))))), (arr_40 [i_15 - 1] [i_15 - 1] [i_14]))), (max(((short)-4962), ((short)-1)))));
                        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */int) var_10)) << (((((/* implicit */int) (short)-32764)) + (32780))))))));
                    }
                    var_40 = ((/* implicit */unsigned char) max((var_40), (((unsigned char) ((((/* implicit */_Bool) ((short) (short)0))) ? ((+(((/* implicit */int) (unsigned char)227)))) : (((((/* implicit */int) (unsigned char)238)) - (((/* implicit */int) (short)-1)))))))));
                    arr_60 [i_14] [i_2] [i_14] [i_15 - 1] [i_14] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (unsigned char)224)))) >= ((-(((/* implicit */int) arr_26 [i_2] [i_15 + 2])))))) ? (((/* implicit */int) (unsigned char)255)) : (((((/* implicit */int) arr_47 [i_0] [i_2] [i_14] [i_15])) | (((((/* implicit */_Bool) (short)2258)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            }
            for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)7)))) ^ ((~(((/* implicit */int) (short)-22195))))));
                var_42 = ((short) (unsigned char)192);
            }
            arr_63 [i_0] [i_2] = ((/* implicit */short) (unsigned char)27);
        }
        for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
        {
            var_43 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)255))));
            var_44 = ((unsigned char) var_9);
            arr_68 [i_0] [i_0] = ((/* implicit */unsigned char) max(((short)32256), (((/* implicit */short) (!(((/* implicit */_Bool) (short)13659)))))));
            var_45 -= ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) (unsigned char)11))) & (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)31)))))), (((/* implicit */int) var_9))));
            var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) arr_49 [i_0] [i_0 - 1] [i_0] [i_0 + 1])), (arr_40 [i_0] [i_0 - 1] [i_19])))))))));
        }
    }
    for (short i_20 = 0; i_20 < 16; i_20 += 4) 
    {
        var_47 = ((/* implicit */unsigned char) (((+(((/* implicit */int) min(((short)-1), (arr_71 [(short)5])))))) * (((/* implicit */int) ((((/* implicit */int) max((arr_69 [i_20] [i_20]), (((/* implicit */short) (unsigned char)7))))) <= (((/* implicit */int) ((short) (unsigned char)234))))))));
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */short) max((var_1), ((unsigned char)255)))), (max((((/* implicit */short) (unsigned char)15)), ((short)-1)))))) : ((~(((((/* implicit */int) arr_69 [i_20] [i_20])) << (((/* implicit */int) (unsigned char)5)))))))))));
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                for (unsigned char i_23 = 2; i_23 < 14; i_23 += 4) 
                {
                    {
                        var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_79 [i_20] [i_20])) & (((/* implicit */int) (short)4095)))))))) ^ (((/* implicit */int) var_8))));
                        var_50 = ((/* implicit */short) ((unsigned char) (short)27172));
                        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) ((((/* implicit */int) arr_73 [i_20] [i_20])) <= (((/* implicit */int) (unsigned char)234))))) / (((((/* implicit */int) arr_78 [i_23] [i_23 + 1] [i_22] [i_20] [i_20] [i_20])) ^ (((/* implicit */int) arr_69 [i_20] [i_20])))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (short)-18410)) - (((/* implicit */int) arr_70 [i_20]))))) ? (((/* implicit */int) max((arr_70 [i_20]), ((unsigned char)1)))) : (((/* implicit */int) ((short) (short)2521))))))))));
                    }
                } 
            } 
        } 
        var_52 = ((short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) >> ((((~(((/* implicit */int) (unsigned char)78)))) + (94)))));
        arr_81 [i_20] = ((/* implicit */unsigned char) (short)-18067);
    }
    var_53 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)(-32767 - 1))), (min((((((/* implicit */int) (unsigned char)166)) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) min(((short)20120), (((/* implicit */short) var_1)))))))));
    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) (unsigned char)248)) : (((((/* implicit */int) (short)1)) ^ (((/* implicit */int) (unsigned char)255))))));
}
