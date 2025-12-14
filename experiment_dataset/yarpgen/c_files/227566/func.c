/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227566
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_12) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)191))))))) || (((/* implicit */_Bool) max((10252764302765871538ULL), (((/* implicit */unsigned long long int) (signed char)-126))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) var_13);
        var_19 = var_7;
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_0 [(_Bool)1]) : (var_9)))) ? (var_3) : (arr_0 [i_0]))));
            arr_5 [i_0 - 1] [6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((arr_2 [i_0] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (unsigned char)48)), (var_16))))) : ((-(((/* implicit */int) (signed char)-126))))));
            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7654779972079094473ULL)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126)))))) || (((/* implicit */_Bool) (short)-21996)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_3] [i_0] [i_3] [i_4 + 4] = ((/* implicit */unsigned long long int) max((arr_15 [i_3] [i_3]), (((/* implicit */unsigned int) ((unsigned char) (_Bool)1)))));
                            var_22 = ((/* implicit */long long int) arr_7 [i_2]);
                            var_23 = ((/* implicit */unsigned short) ((long long int) (signed char)-126));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                {
                    {
                        arr_25 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)46657)) ? (max((9223372036854775807LL), (((/* implicit */long long int) arr_4 [i_0] [i_7] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [i_0 + 3] [i_0] [i_0 - 1])), (var_1))))))) << (((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) arr_17 [i_0] [i_0 + 4]))))) ? (min((8601997806868671773ULL), (((/* implicit */unsigned long long int) 7580474405161333221LL)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11944)) ^ (((/* implicit */int) arr_1 [4]))))))) - (7580474405161333221ULL)))));
                        var_24 = ((/* implicit */long long int) (+(arr_17 [i_7] [i_6])));
                        var_25 |= ((/* implicit */signed char) var_9);
                    }
                } 
            } 
            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -782868581825263468LL)))) * (((((/* implicit */unsigned long long int) (~(arr_15 [i_0] [i_0])))) ^ (arr_21 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
            var_27 ^= ((/* implicit */signed char) max((((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)-115))))))), ((-9223372036854775807LL - 1LL))));
        }
        for (signed char i_8 = 4; i_8 < 22; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 20; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    {
                        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) var_15)))))))), (((((/* implicit */_Bool) arr_28 [i_0 + 4] [i_8] [i_9])) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 1837228451)) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_9]))) : (var_4)))))))))));
                        var_29 = max((max((var_9), (((/* implicit */unsigned int) (~(arr_30 [i_0] [i_0 + 4] [i_0] [i_0] [i_0])))))), (max((((/* implicit */unsigned int) max((((/* implicit */signed char) var_8)), ((signed char)-115)))), (arr_0 [i_8]))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max((max((18446744073709551613ULL), (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((17178820608LL), (((/* implicit */long long int) var_16))))))))));
                    }
                } 
            } 
            var_31 ^= max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_0] [i_0 + 2]))) + (var_3)))))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_20 [i_0 + 2]))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) ((short) arr_8 [i_0] [i_0] [i_8]))) ? (max((((/* implicit */unsigned int) (signed char)114)), (2787702914U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_7 [i_0 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))))) : (var_16)));
            /* LoopNest 3 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (+(((/* implicit */int) arr_29 [i_13] [i_13])))))));
                            var_34 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned short)20342)))) != ((+(((/* implicit */int) arr_24 [i_12] [i_12] [i_12] [i_12]))))))), (((((/* implicit */unsigned long long int) min((arr_15 [i_11] [i_12]), (((/* implicit */unsigned int) var_7))))) / (arr_23 [i_0] [i_8] [i_11] [i_12])))));
                        }
                    } 
                } 
            } 
        }
        for (short i_14 = 2; i_14 < 21; i_14 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_16 = 2; i_16 < 20; i_16 += 4) 
                {
                    var_35 = ((/* implicit */unsigned long long int) var_13);
                    var_36 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0 + 1] [i_0 + 3] [i_0 + 3])) ? (var_12) : (var_16)))), ((-(var_10)))));
                    var_37 = ((/* implicit */unsigned char) var_6);
                }
                for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((int) -6917976104924259550LL)))));
                    var_39 = ((/* implicit */unsigned long long int) (+(5584631624351247578LL)));
                    var_40 ^= ((/* implicit */int) 821768980U);
                    var_41 = ((/* implicit */short) max((min((arr_2 [i_0 + 2] [i_14 + 1]), (((/* implicit */long long int) var_1)))), (((((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_14]))))) - (((var_10) / (((/* implicit */long long int) ((/* implicit */int) var_15)))))))));
                    var_42 = ((/* implicit */int) ((-5964853537853935071LL) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_13) : (var_10))))))));
                }
                for (unsigned long long int i_18 = 1; i_18 < 19; i_18 += 4) 
                {
                    var_43 ^= ((/* implicit */short) 1152921504338411520LL);
                    var_44 = ((min((max((((/* implicit */unsigned long long int) var_6)), (7ULL))), (((/* implicit */unsigned long long int) arr_20 [i_14 + 2])))) & (max((((/* implicit */unsigned long long int) (short)2338)), (((unsigned long long int) 1807045238031982826LL)))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) var_12))));
                    var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (unsigned short)20342)), (2814809979067542353LL))))))));
                    var_47 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)45193))));
                }
                var_48 = ((/* implicit */unsigned short) max(((+(arr_31 [i_14 - 1] [i_14 - 2] [i_14 + 1] [i_14 + 2]))), (((/* implicit */unsigned long long int) arr_36 [i_14]))));
            }
            var_49 ^= ((/* implicit */short) var_9);
            var_50 *= ((/* implicit */signed char) arr_35 [i_0] [i_0] [i_0]);
        }
        /* LoopNest 3 */
        for (signed char i_19 = 3; i_19 < 20; i_19 += 4) 
        {
            for (unsigned short i_20 = 0; i_20 < 23; i_20 += 4) 
            {
                for (signed char i_21 = 2; i_21 < 20; i_21 += 4) 
                {
                    {
                        var_51 = ((/* implicit */unsigned long long int) var_0);
                        var_52 = ((/* implicit */long long int) min((((int) arr_20 [i_0 + 3])), ((((~(((/* implicit */int) arr_19 [i_19 - 1] [i_19 - 1] [i_0])))) - (((/* implicit */int) var_8))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            var_53 = ((/* implicit */signed char) -1279386462);
            var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) 9002801208229888ULL))));
            arr_64 [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (short)21995)))), (((((/* implicit */int) arr_8 [i_0 + 3] [i_0] [i_0 + 2])) - (((/* implicit */int) ((_Bool) var_8)))))));
            /* LoopNest 2 */
            for (long long int i_23 = 1; i_23 < 19; i_23 += 4) 
            {
                for (unsigned short i_24 = 1; i_24 < 22; i_24 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
                        {
                            var_55 ^= ((/* implicit */signed char) arr_70 [i_0] [i_0 - 2] [i_25 - 1]);
                            var_56 = ((/* implicit */short) max((var_56), (((/* implicit */short) ((((/* implicit */int) arr_29 [i_0 - 1] [i_23 - 1])) <= (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (int i_26 = 3; i_26 < 22; i_26 += 1) 
                        {
                            var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_67 [i_0 + 4] [i_26 + 1]) + (9223372036854775807LL))) >> (((((/* implicit */int) var_6)) - (81)))))) || (((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)18878)))), (max((-976568310), (((/* implicit */int) (signed char)10)))))))));
                            var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))) : (var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(var_10))))))));
                            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (signed char)115))));
                            var_60 = ((/* implicit */signed char) arr_30 [i_24 + 1] [i_24] [i_24] [(signed char)15] [i_24 - 1]);
                            var_61 = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_76 [i_0] [i_0 - 2] [i_0] = ((/* implicit */long long int) (short)-21996);
                        var_62 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)53863)) || (((/* implicit */_Bool) var_13))));
                        var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)46658))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_68 [i_0] [i_0] [i_0 + 2]))))) : ((~(var_16)))))) ? (((((/* implicit */long long int) min((arr_17 [i_23 + 4] [i_22]), (((/* implicit */unsigned int) arr_8 [i_22] [i_23 - 1] [i_24 + 1]))))) | (max((arr_67 [i_23] [i_23]), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_24 - 1])))))));
                    }
                } 
            } 
        }
        for (unsigned int i_27 = 1; i_27 < 21; i_27 += 4) 
        {
            var_64 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_11 [i_0] [i_0 + 3] [i_0] [i_0] [i_0 + 3] [i_0 + 2]), (arr_11 [i_0] [i_0] [i_0] [14ULL] [i_0 - 2] [i_0 + 4]))))) % (((unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]))));
            var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) var_1))));
            /* LoopNest 2 */
            for (short i_28 = 1; i_28 < 19; i_28 += 3) 
            {
                for (long long int i_29 = 1; i_29 < 22; i_29 += 3) 
                {
                    {
                        var_66 ^= ((/* implicit */long long int) arr_80 [i_0] [i_27 + 2] [(unsigned short)2] [i_29 + 1]);
                        /* LoopSeq 1 */
                        for (short i_30 = 1; i_30 < 22; i_30 += 4) 
                        {
                            arr_87 [i_0] [i_27] [i_28] [i_30] [i_30] = ((/* implicit */unsigned char) var_12);
                            arr_88 [i_28] [i_27] [i_30] [i_30] [i_30] [i_28] = ((/* implicit */long long int) max((max((var_9), (((/* implicit */unsigned int) ((signed char) (unsigned short)60))))), (((/* implicit */unsigned int) min((max((var_1), (((/* implicit */short) arr_52 [i_28 + 4])))), (((/* implicit */short) ((signed char) (signed char)10))))))));
                        }
                    }
                } 
            } 
            var_67 = ((/* implicit */unsigned short) arr_56 [5ULL] [5ULL] [i_27 - 1]);
        }
        for (unsigned short i_31 = 3; i_31 < 21; i_31 += 4) 
        {
            var_68 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_45 [i_0] [i_0]))))) ? (((/* implicit */int) max(((short)-12242), ((short)-2)))) : (((/* implicit */int) arr_10 [i_31 + 2] [i_31 + 2])))), (((/* implicit */int) max(((short)18117), (((/* implicit */short) (_Bool)1)))))));
            var_69 += ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-8))));
            var_70 -= ((/* implicit */long long int) var_11);
            var_71 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))) >= (arr_71 [i_31] [i_31 + 1] [i_31] [i_31 - 1] [i_0 + 4])))), (((max((((/* implicit */unsigned long long int) 1279386456)), (arr_21 [i_0] [i_0] [i_31] [i_31 + 2]))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)57)))))))));
            /* LoopNest 2 */
            for (_Bool i_32 = 1; i_32 < 1; i_32 += 1) 
            {
                for (_Bool i_33 = 0; i_33 < 0; i_33 += 1) 
                {
                    {
                        var_72 = ((/* implicit */int) max((var_72), (((/* implicit */int) ((signed char) (short)18117)))));
                        var_73 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((short)-28237), (((/* implicit */short) (signed char)86)))))));
                        var_74 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((short)-21996), (((/* implicit */short) ((((/* implicit */_Bool) 34357641216LL)) || (((/* implicit */_Bool) -34357641216LL)))))))) >> (((((/* implicit */int) (short)-29359)) + (29369)))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_34 = 2; i_34 < 21; i_34 += 1) 
        {
            arr_99 [i_34] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_70 [i_0 - 1] [i_0 - 1] [i_34 - 1])) ? (((/* implicit */int) arr_70 [i_0 + 3] [i_0] [i_34 - 2])) : (((/* implicit */int) arr_70 [i_0 + 4] [i_0] [i_34 + 2]))));
            arr_100 [i_0] [i_0 + 1] |= arr_51 [i_0];
            var_75 = ((/* implicit */unsigned short) ((arr_48 [i_0] [i_0 - 1] [i_34 - 1] [i_0] [i_34 + 1] [i_0]) / (arr_48 [8U] [i_0 + 3] [i_34] [i_0 - 2] [i_34 + 2] [i_34 - 1])));
            /* LoopNest 2 */
            for (signed char i_35 = 2; i_35 < 21; i_35 += 1) 
            {
                for (short i_36 = 1; i_36 < 22; i_36 += 3) 
                {
                    {
                        var_76 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) - (var_3)))));
                        var_77 = ((/* implicit */signed char) max((var_77), (((/* implicit */signed char) arr_80 [i_0] [i_34 - 2] [i_35] [i_35 + 1]))));
                        var_78 = ((/* implicit */unsigned int) max((var_78), (((/* implicit */unsigned int) (~(337220312138361861ULL))))));
                        arr_106 [i_0 + 2] [i_35] [i_35 - 2] [i_35 - 2] = ((/* implicit */short) 34357641211LL);
                        var_79 *= ((/* implicit */_Bool) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_65 [i_35])))) ? (arr_79 [i_0 + 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_0 + 1] [i_34 - 1] [i_0] [i_36]))))));
                    }
                } 
            } 
            var_80 = ((/* implicit */int) (-(3955510743U)));
        }
    }
    var_81 ^= ((/* implicit */short) max((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) -1733005940)) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1279386462)) || (((/* implicit */_Bool) var_11))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))), (var_13)))));
    var_82 += ((/* implicit */unsigned long long int) var_4);
    var_83 ^= ((/* implicit */unsigned short) var_12);
}
