/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207617
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
    var_13 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] &= var_1;
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                var_14 |= ((/* implicit */signed char) ((unsigned short) (unsigned short)65535));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_2 [i_2 - 2]);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2 + 2])) : (((/* implicit */int) var_8))));
                    var_17 = ((/* implicit */int) -1LL);
                }
                arr_15 [i_2] [i_1] [i_2 + 2] [i_2] |= ((/* implicit */short) (signed char)-64);
            }
            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                arr_18 [i_4] [i_4] [i_1] [i_1] |= min((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (13710625352150289588ULL))), (((/* implicit */unsigned long long int) var_3)));
                var_18 *= ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (arr_13 [i_4]) : (arr_13 [i_0]))), (((/* implicit */int) ((_Bool) -1036134322)))));
            }
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 13710625352150289588ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (0LL)));
                var_20 = ((/* implicit */short) arr_1 [i_0] [i_1]);
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)40548)), (3LL))))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 4; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)0)), (1LL)))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (arr_26 [i_0] [i_0] [i_5] [i_6] [i_6] [i_7] [i_7])))), ((~(4736118721559262027ULL)))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((4736118721559262030ULL) % (4736118721559262027ULL))))));
                            arr_27 [i_1] [i_6 - 3] [i_5] [i_5] [i_1] [i_0] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2))) <= (4736118721559262021ULL))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)112)) - (1953715612))) * (((/* implicit */int) var_6))))));
                            arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) min((arr_13 [i_0]), (((/* implicit */int) ((min((-8LL), (((/* implicit */long long int) var_1)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))))))))));
            arr_29 [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_0]);
        }
        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
        {
            arr_32 [i_8] [i_0] = arr_6 [i_0] [i_8];
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) 
                {
                    {
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_25 [i_10 - 1] [i_10] [i_10] [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (((((/* implicit */_Bool) max((var_5), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20395)) ? (var_11) : (((/* implicit */int) var_3))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_8] [i_9])) : (13710625352150289576ULL)))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 13710625352150289599ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_9] [i_9] [i_0] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (((2465283174U) << (((var_0) - (1372481996))))))))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) var_3);
            var_28 -= ((/* implicit */short) max((4736118721559262056ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
        {
            var_29 = ((/* implicit */_Bool) max((var_29), ((_Bool)1)));
            var_30 = (~(((/* implicit */int) (_Bool)1)));
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((/* implicit */int) arr_40 [i_0])) + (((/* implicit */int) arr_40 [i_11])))))));
            /* LoopSeq 3 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_32 = ((/* implicit */signed char) min((var_32), ((signed char)101)));
                var_33 = ((/* implicit */int) (((-(var_4))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20))) : (13710625352150289589ULL)))));
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)15230)))))));
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_35 *= ((/* implicit */unsigned long long int) arr_45 [i_0] [i_0]);
                var_36 = ((/* implicit */int) min((var_36), (((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_11] [i_13])) ? (arr_17 [i_0] [i_11] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10))))))));
                arr_47 [i_0] [i_0] [i_11] [i_13] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_37 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16514)) ? (var_0) : (((((/* implicit */_Bool) (unsigned short)65528)) ? (65280) : (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                var_38 -= ((/* implicit */signed char) var_2);
                var_39 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)37803))));
                var_40 |= ((/* implicit */unsigned int) ((-2147483637) / (2147483636)));
                arr_52 [i_0] [i_11] [i_14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned short)37780))));
                /* LoopSeq 3 */
                for (int i_15 = 4; i_15 < 10; i_15 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) var_10))));
                        arr_60 [i_16] [i_15] [i_14] [i_11] [i_0] |= ((((/* implicit */_Bool) arr_56 [i_0] [i_11] [i_14] [i_15] [i_15 - 2] [i_16] [i_0])) ? (((/* implicit */int) (signed char)97)) : (((/* implicit */int) (signed char)117)));
                        var_42 = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -1483788962))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_63 [i_0] [i_0] [i_15] [i_17] [i_17] [i_14] [i_17] = var_5;
                        var_43 -= ((/* implicit */_Bool) ((long long int) var_9));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */int) arr_38 [i_15 - 1] [i_18] [i_15 - 1] [i_15 - 2] [i_18] [i_18])) <= (((/* implicit */int) (signed char)-41)))))));
                        var_45 += ((((/* implicit */_Bool) (unsigned short)37803)) ? (((/* implicit */int) (_Bool)1)) : (2044));
                        arr_68 [i_0] = ((/* implicit */signed char) (unsigned short)15210);
                    }
                    for (signed char i_19 = 1; i_19 < 10; i_19 += 3) 
                    {
                        var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2044)) ? (((/* implicit */int) var_1)) : (-1274286968)));
                        var_47 |= ((/* implicit */unsigned short) -2045);
                    }
                    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) (signed char)-117))));
                }
                for (int i_20 = 1; i_20 < 8; i_20 += 4) /* same iter space */
                {
                    arr_76 [i_20] [i_20] [i_20] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) 1483788960)) : (823935593916440293LL)));
                    arr_77 [i_0] [i_11] [i_20] [i_20] [i_14] [i_0] = ((/* implicit */unsigned short) ((_Bool) -2132618811));
                    arr_78 [i_0] [i_0] [i_0] [i_20] [i_14] [i_14] = ((/* implicit */unsigned short) arr_58 [i_0] [i_11] [i_14] [i_20] [i_11]);
                    var_49 = ((/* implicit */unsigned short) ((unsigned int) -2077643637));
                    var_50 |= ((/* implicit */int) ((unsigned short) (_Bool)1));
                }
                for (int i_21 = 1; i_21 < 8; i_21 += 4) /* same iter space */
                {
                    arr_82 [i_0] [i_11] [i_11] [i_14] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_39 [i_21 + 4]))));
                    /* LoopSeq 4 */
                    for (int i_22 = 0; i_22 < 12; i_22 += 1) 
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8231149030354965895LL)) ? (((/* implicit */int) arr_80 [i_0] [i_11] [i_11] [i_11] [i_21 + 2] [i_11])) : (((/* implicit */int) arr_80 [i_0] [i_11] [i_11] [i_14] [i_0] [i_0]))));
                        arr_85 [i_0] [i_0] [i_14] [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_20 [i_21 + 2] [i_21 + 2] [i_14] [i_21]));
                    }
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        arr_88 [i_23] [i_0] [i_0] [i_11] [i_11] [i_0] = ((/* implicit */_Bool) arr_64 [i_0] [i_11] [i_14] [i_21 + 2] [i_23]);
                        var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) ((arr_36 [(signed char)8] [i_23]) + (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) var_12)) : (var_9))))))));
                        var_53 = ((/* implicit */unsigned short) max((var_53), (((/* implicit */unsigned short) ((-8231149030354965903LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        arr_89 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) (signed char)76));
                    }
                    for (long long int i_24 = 4; i_24 < 11; i_24 += 2) 
                    {
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_2)))) ? ((+(823935593916440293LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_11] [i_14] [i_24]))))))));
                        arr_92 [i_21] [i_24] = ((/* implicit */signed char) ((arr_90 [i_24 - 4] [i_11] [i_14] [i_14] [i_24] [i_14]) << (((/* implicit */int) var_8))));
                        var_55 = ((/* implicit */signed char) ((((823935593916440312LL) - (((/* implicit */long long int) var_0)))) > (((/* implicit */long long int) -2077643655))));
                        arr_93 [i_0] [i_0] [i_11] [i_11] [i_0] [i_21] [i_11] = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_8 [i_0] [i_11] [i_14])));
                        var_56 = var_1;
                    }
                    for (int i_25 = 1; i_25 < 10; i_25 += 1) 
                    {
                        arr_96 [i_0] [i_11] [i_14] [i_21] [i_25] = ((unsigned short) arr_56 [i_25 + 2] [i_14] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        var_57 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                    var_58 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_11] [i_21 + 1] [i_21] [i_21 + 3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_21 + 2] [i_21 - 1] [i_14] [i_14] [i_11] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-10099))))) : (((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (7360237419875284955LL)))));
                    arr_97 [i_0] [i_11] [i_14] [i_21] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (8231149030354965908LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) % (((/* implicit */long long int) var_2))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
    {
        arr_101 [i_26] = (unsigned short)52701;
        arr_102 [i_26] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_91 [i_26] [i_26] [i_26] [i_26] [i_26])) ? (((/* implicit */int) arr_91 [i_26] [i_26] [i_26] [i_26] [i_26])) : (-1462198287)));
        /* LoopSeq 1 */
        for (signed char i_27 = 0; i_27 < 12; i_27 += 4) 
        {
            arr_106 [i_26] = ((int) 1964653609323224432ULL);
            arr_107 [i_27] = ((((/* implicit */int) (signed char)27)) & (((/* implicit */int) (signed char)127)));
            /* LoopSeq 1 */
            for (signed char i_28 = 0; i_28 < 12; i_28 += 3) 
            {
                var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) var_6))));
                var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_69 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]) >> (((((/* implicit */int) var_5)) - (44851)))))) ? (arr_64 [i_26] [i_26] [i_26] [i_28] [i_28]) : (((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25899)))))))))));
                arr_112 [i_28] [i_28] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32199)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)19))) : (arr_95 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26])))) ? (((((/* implicit */_Bool) 2063)) ? (var_7) : (((/* implicit */int) (signed char)-3)))) : (((/* implicit */int) var_6)));
                var_61 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_26] [i_26] [i_27] [i_26] [i_27] [i_28] [i_27])) ? (((/* implicit */int) var_8)) : (((var_9) / (((/* implicit */int) var_12))))));
            }
        }
    }
    var_62 += ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)41)) ? (var_11) : (((/* implicit */int) (_Bool)1))))) > (min((((/* implicit */unsigned long long int) (short)-7059)), (3029795234943106289ULL)))))), (-1117992767)));
    /* LoopSeq 2 */
    for (unsigned short i_29 = 1; i_29 < 9; i_29 += 3) 
    {
        var_63 = ((/* implicit */signed char) (_Bool)1);
        /* LoopSeq 1 */
        for (long long int i_30 = 0; i_30 < 11; i_30 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_31 = 2; i_31 < 10; i_31 += 1) 
            {
                for (unsigned short i_32 = 3; i_32 < 9; i_32 += 4) 
                {
                    {
                        var_64 = ((/* implicit */signed char) max((var_64), (((/* implicit */signed char) (unsigned short)65526))));
                        var_65 = ((/* implicit */signed char) var_0);
                        var_66 -= min((((/* implicit */signed char) var_12)), ((signed char)39));
                        var_67 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-3))));
                    }
                } 
            } 
            arr_124 [i_29 + 1] [i_29 + 1] = ((((/* implicit */_Bool) (signed char)19)) ? (((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) (unsigned short)28)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (_Bool)1)))))) : (arr_64 [i_30] [i_30] [i_29] [i_30] [i_30]));
        }
    }
    /* vectorizable */
    for (unsigned int i_33 = 4; i_33 < 13; i_33 += 4) 
    {
        var_68 = ((/* implicit */int) min((var_68), (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) ((unsigned short) (signed char)58))))))));
        arr_129 [i_33] [i_33] = (~(((arr_126 [i_33] [i_33]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_128 [i_33]))))));
        var_69 = ((/* implicit */signed char) min((var_69), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (signed char)-6)))))));
        var_70 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65507)) ? (((/* implicit */int) arr_127 [i_33 - 3])) : (((/* implicit */int) var_6))));
    }
    var_71 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65497)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)96)) : (-2114420911)))))))));
}
