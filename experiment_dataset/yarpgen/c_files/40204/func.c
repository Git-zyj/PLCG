/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40204
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
    var_20 = ((/* implicit */int) (-(min((max((((/* implicit */unsigned long long int) 8452176799547594144LL)), (18446744073709551605ULL))), (4467615697680248981ULL)))));
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))) && ((!(((/* implicit */_Bool) var_5)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))));
        var_23 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-30890))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_24 = ((/* implicit */_Bool) ((signed char) var_16));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1])), (arr_2 [i_1] [i_1])))) / ((-(((/* implicit */int) arr_0 [i_1] [i_1]))))));
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((8452176799547594144LL) > (arr_1 [i_1] [i_1])))), (arr_2 [i_1] [(_Bool)1])))) << (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-8452176799547594133LL))) + (8452176799547594134LL))))))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) : (((((/* implicit */int) arr_0 [i_1] [i_1])) - (((/* implicit */int) arr_0 [i_1] [i_1])))))))));
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 18; i_2 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((arr_3 [i_2 + 2]) ? (((/* implicit */int) arr_3 [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2 + 1])))) - (((((((/* implicit */int) (short)-31563)) + (((/* implicit */int) (unsigned char)32)))) + (var_12))))))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_11 [i_2] [i_2] [i_2 - 1] [i_2] = ((/* implicit */signed char) arr_2 [i_4] [i_4]);
                        var_29 = ((/* implicit */unsigned short) max((((min((((/* implicit */long long int) 1382932416U)), (-8452176799547594159LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) >= (((/* implicit */int) var_7)))))))), (((((/* implicit */_Bool) 4623037051025353344LL)) ? (arr_6 [i_1] [i_2] [i_2] [i_4]) : (arr_4 [i_1] [i_1] [i_1])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_12)), (18446744073709551594ULL))), (((unsigned long long int) var_7)))))));
            var_31 = ((/* implicit */unsigned short) 3890687934407942088ULL);
        }
        for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                for (signed char i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_32 ^= ((/* implicit */long long int) arr_24 [i_1] [i_5 - 1] [(signed char)18] [i_7 - 1]);
                            var_33 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8452176799547594131LL)) && (((/* implicit */_Bool) var_16))))), (1ULL))))));
                            arr_26 [i_1] [i_5] [i_1] [i_7] [i_7] [i_8] [i_8] = ((((/* implicit */_Bool) (unsigned short)38721)) ? (((((/* implicit */_Bool) ((((-608024953) + (2147483647))) << (((((-712210038) + (712210054))) - (16)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))) : (-4275292917400408461LL))) : (max((1048512LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((unsigned long long int) var_5)))));
                arr_29 [i_1] [i_1] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) ^ (((long long int) var_11))));
                arr_30 [i_1] [i_5] [i_9] = ((/* implicit */_Bool) ((unsigned long long int) arr_21 [(unsigned short)18] [i_1] [i_5 - 2] [(signed char)13] [i_1]));
            }
            /* vectorizable */
            for (short i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((arr_3 [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_1 [i_5] [i_10]))) ^ (var_18))))));
                var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_6 [i_1] [i_5 + 1] [i_5] [i_5]) : (arr_6 [i_1] [i_5 - 1] [i_5] [i_5 + 1]))))));
                arr_34 [i_1] [i_5] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)4096))));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 19; i_11 += 4) 
                {
                    arr_37 [i_11] [i_10 + 3] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (arr_35 [i_5] [i_5 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                }
                for (int i_12 = 0; i_12 < 20; i_12 += 4) 
                {
                    var_38 = ((/* implicit */signed char) var_11);
                    arr_40 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)87))));
                }
                var_39 = ((/* implicit */unsigned int) (!(((_Bool) var_15))));
            }
            for (short i_13 = 1; i_13 < 17; i_13 += 1) /* same iter space */
            {
                arr_44 [i_13] [i_1] [i_1] [i_1] = min((((/* implicit */unsigned long long int) (~(((arr_36 [i_1] [i_1] [i_5] [i_13]) << (((((/* implicit */int) var_15)) - (3676)))))))), (((((/* implicit */_Bool) (short)-15292)) ? (5ULL) : (17073534954815809179ULL))));
                arr_45 [i_1] [(signed char)8] = ((/* implicit */short) min((((((/* implicit */_Bool) 956580533981428173LL)) ? (-4275292917400408443LL) : (4078346503707620029LL))), (arr_1 [i_1] [i_13])));
                var_40 = ((/* implicit */unsigned int) ((signed char) arr_28 [i_5 - 1]));
                var_41 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-3538718223749438147LL) / (((/* implicit */long long int) 2054594268))))) ? (min(((~(((/* implicit */int) var_7)))), ((+(((/* implicit */int) (short)4095)))))) : (((/* implicit */int) min(((short)-26677), (((/* implicit */short) (_Bool)1)))))));
            }
            for (short i_14 = 1; i_14 < 17; i_14 += 1) /* same iter space */
            {
                var_42 ^= ((/* implicit */unsigned short) ((unsigned int) var_7));
                var_43 = ((/* implicit */short) ((min((((((/* implicit */_Bool) 2097151ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_1] [1LL]))) : (var_17))), (((/* implicit */unsigned long long int) (!(var_1)))))) + (((/* implicit */unsigned long long int) -2054594285))));
                arr_49 [i_1] [i_5] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_6)), (var_0))), (min((var_0), (((/* implicit */unsigned long long int) var_14))))))) ? (((/* implicit */int) min((arr_19 [i_5 - 2] [i_5 + 2]), (((/* implicit */unsigned short) ((short) var_15)))))) : (((/* implicit */int) var_11))));
            }
        }
        for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            var_44 += ((/* implicit */unsigned long long int) var_5);
            var_45 = ((/* implicit */short) (~((-(min((var_6), (((/* implicit */long long int) -263492250))))))));
            var_46 += ((/* implicit */int) (short)-16);
        }
        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 1) 
            {
                for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    {
                        arr_63 [i_17] [i_17] [13ULL] [i_17] [i_17] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_39 [i_1] [i_16] [i_17] [i_18]))) ? (((/* implicit */unsigned long long int) (+(((int) var_0))))) : (min((var_17), (1857367193151349874ULL)))));
                        var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 12980987466380352874ULL)) || (((/* implicit */_Bool) (signed char)-70))))), ((unsigned short)65531)))) ? (-2054594295) : (((/* implicit */int) (!(((/* implicit */_Bool) -38024330879792134LL)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_19 = 2; i_19 < 17; i_19 += 4) 
            {
                for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) 
                {
                    {
                        arr_69 [i_1] [i_16] [i_19] [i_20] = ((/* implicit */unsigned int) arr_28 [i_16]);
                        var_48 = ((/* implicit */signed char) min((((/* implicit */int) arr_55 [i_16] [i_16])), (min((((var_19) ? (arr_33 [i_1] [i_16] [i_19]) : (((/* implicit */int) arr_62 [i_16] [i_16] [i_16])))), ((-(((/* implicit */int) var_14))))))));
                        var_49 = ((/* implicit */unsigned short) var_14);
                        arr_70 [i_1] [i_16] [i_16] [i_19 + 1] [i_20] = ((/* implicit */int) (+(min((((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_19]))))), (arr_32 [i_19] [i_19 + 3] [i_19] [i_19 + 2])))));
                        /* LoopSeq 3 */
                        for (long long int i_21 = 0; i_21 < 20; i_21 += 1) 
                        {
                            var_50 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9077415790128914767ULL))));
                            arr_73 [i_1] [i_16] [i_16] [i_19] [i_21] [i_21] = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (((arr_48 [i_16]) | (arr_24 [i_21] [i_21] [i_19 + 1] [i_19]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14556056139301609517ULL)) || (((/* implicit */_Bool) (unsigned short)23103)))))));
                        }
                        for (unsigned short i_22 = 2; i_22 < 19; i_22 += 1) 
                        {
                            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) 3538718223749438147LL)) ? (arr_47 [i_1] [i_16] [i_19 + 3]) : ((~(1284724728857401153ULL)))));
                            var_52 = ((/* implicit */int) ((((((/* implicit */_Bool) -6144875695873816137LL)) ? (arr_24 [i_1] [i_16] [i_19 + 1] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (min((arr_24 [i_16] [i_19] [i_16] [i_16]), (arr_24 [i_16] [i_19 - 2] [i_19 + 1] [(unsigned short)12])))));
                        }
                        for (long long int i_23 = 1; i_23 < 17; i_23 += 3) 
                        {
                            var_53 ^= ((/* implicit */_Bool) ((short) (short)7878));
                            var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((((+(var_18))) | (((/* implicit */long long int) ((/* implicit */int) arr_71 [i_19 - 1] [i_16] [i_19] [10] [i_23 + 1] [i_16]))))) : (arr_1 [i_1] [i_23 + 2]))))));
                            arr_79 [i_1] [i_16] [i_19 + 2] [(unsigned short)14] = ((/* implicit */unsigned short) arr_75 [i_1] [i_16] [i_19] [i_19] [i_20] [i_16]);
                            var_55 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1310748642)) ? (((/* implicit */int) (unsigned short)23095)) : (((/* implicit */int) var_10))))) % (((((/* implicit */_Bool) arr_24 [i_16] [i_20] [i_20] [i_20])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9))))));
                            var_56 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_19 - 1] [i_16] [i_19 - 1] [i_19]))) / (-2963073019986691849LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_19 + 1] [i_19] [i_19] [i_19] [i_19 + 3] [i_19])) || (((/* implicit */_Bool) arr_20 [i_19 - 1] [i_19] [i_19] [i_19] [i_19 - 2] [i_19])))))));
                        }
                    }
                } 
            } 
            arr_80 [i_1] [i_16] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)18002)))) % (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)37610))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) * (-5879714346977532028LL)))), (2055161774595041591ULL)))));
            var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) var_16))));
            var_58 = ((/* implicit */int) max((-8972123439912908988LL), (((/* implicit */long long int) 2054594285))));
        }
    }
}
