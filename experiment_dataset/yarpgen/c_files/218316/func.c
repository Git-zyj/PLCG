/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218316
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))) >= (2ULL))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) var_15))))))));
    var_20 = ((/* implicit */unsigned long long int) ((short) var_9));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(-1200469333)))), (((arr_4 [i_0 + 2] [i_0 + 2]) << (((arr_4 [i_0 - 1] [i_0 + 1]) - (3290095846431552651ULL))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned short) var_4)))));
                    var_23 = ((/* implicit */unsigned short) 0LL);
                    var_24 = (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) 4294967283U)) ? (var_16) : (((/* implicit */int) var_5)))) - (971370859))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned int) (~(((1LL) / (((/* implicit */long long int) var_6))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_1] [i_3] [i_4]))))))));
                    }
                }
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((_Bool) ((0LL) == (((/* implicit */long long int) -330273701))))))));
                        arr_18 [i_0 + 1] [i_0] [(signed char)4] [i_2] [i_5] [(signed char)4] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_2 - 1])))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) var_12))))), (((unsigned long long int) var_16))))));
                        arr_19 [i_0] [i_6] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)5))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551613ULL)))))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) (~(((((var_15) | (((/* implicit */long long int) ((/* implicit */int) var_1))))) & (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((unsigned short) (+(4U)))))));
                        arr_22 [i_7] [i_5] [i_0] [i_1 - 2] [i_0] = ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_7]);
                    }
                    var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_13 [i_1 + 2] [i_2] [(_Bool)1] [i_2 + 1]) : (((/* implicit */long long int) max((((((/* implicit */int) var_4)) << (((var_0) - (1112396058U))))), (((/* implicit */int) max((var_17), (((/* implicit */unsigned char) var_8)))))))))))));
                    var_31 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((short) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)4]))) <= (4294967295U))))) : (((unsigned int) 0)))), (((/* implicit */unsigned int) ((short) (+(-8654185906408475397LL)))))));
                }
                for (unsigned short i_8 = 1; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)29)))) != (((/* implicit */int) var_14))))), ((+(arr_8 [i_0] [i_0 + 2] [i_0] [i_9 - 1] [i_2 - 2] [i_8 + 1]))))))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((arr_10 [i_0] [1U] [i_2 - 2] [i_8] [i_2 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (max((arr_10 [i_0] [i_1] [i_2] [i_9] [i_2 + 1]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_26 [6LL] [6LL] [i_2] [i_8] [i_2 - 1] [i_9 - 1] [i_1])) - (110)))))))))));
                        arr_28 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_16 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1] [(_Bool)1] [i_8 - 1]);
                        var_34 = ((/* implicit */long long int) 3461789434644834071ULL);
                    }
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) var_11))));
                    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((arr_9 [i_1 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) % (((long long int) arr_9 [i_1 + 1])))))));
                    var_37 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) > ((+(((/* implicit */int) ((signed char) (_Bool)1))))));
                }
                var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) max((var_10), (((/* implicit */unsigned int) ((min((5ULL), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_1] [0LL] [0LL] [i_0])))) <= (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))))))))));
            }
            /* vectorizable */
            for (short i_10 = 4; i_10 < 10; i_10 += 1) 
            {
                arr_31 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 1] [i_1 - 2] [i_10 + 1])) != (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_10 - 3]))));
                arr_32 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                arr_33 [i_0] [i_0] = ((/* implicit */long long int) var_13);
            }
            arr_34 [i_0 + 2] [i_0 + 2] [i_1] = ((/* implicit */signed char) (+(var_15)));
            /* LoopSeq 2 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                arr_38 [i_0 + 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11]))) | (var_11)))))) >= ((-(arr_0 [i_1 - 2])))));
                var_39 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) ((int) arr_9 [i_11]))))));
                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1]))));
                var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_18))))) && (((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) arr_36 [i_0] [i_0] [i_0 + 1]))))));
                var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (+(-1411092717))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 2) 
                    {
                        arr_45 [i_0] [i_1] [i_12] [i_13] [i_13] [i_12] = ((/* implicit */unsigned short) (~(arr_40 [9ULL] [i_0] [(unsigned short)0] [9ULL])));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_10))) ? (arr_15 [i_14 + 2] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                    }
                    for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
                    {
                        arr_48 [i_0] [i_13] [i_0] [i_0] [i_15] [i_0] [i_15] = ((/* implicit */unsigned int) 4ULL);
                        var_44 = ((/* implicit */_Bool) arr_5 [i_13] [i_1] [i_12]);
                    }
                    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1)))))))));
                    var_46 = var_3;
                    var_47 = ((/* implicit */unsigned short) arr_0 [i_13]);
                }
                /* vectorizable */
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (-(arr_8 [i_0 + 2] [i_0 - 1] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_16 - 1]))))));
                    arr_52 [1U] [i_1] [1U] [i_16] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_42 [i_0] [0LL] [i_12] [i_16])) : (0))) != (arr_25 [i_0] [i_0] [i_12])));
                }
                for (long long int i_17 = 3; i_17 < 10; i_17 += 1) 
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36756))) * (var_10))))) != (((long long int) (!(((/* implicit */_Bool) 18446744073709551613ULL))))));
                    var_49 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 18446744073709551601ULL)))));
                    var_50 = ((/* implicit */unsigned short) arr_42 [(_Bool)1] [i_1] [i_1] [i_1]);
                }
                var_51 = ((/* implicit */unsigned short) max((((((long long int) arr_26 [i_0] [i_1] [i_0] [i_1] [(short)7] [i_0] [i_0])) & (arr_13 [i_0] [i_0] [i_12] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_1 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_35 [i_1 - 1] [i_0 - 1])) : (((/* implicit */int) arr_53 [i_12] [i_1] [i_12] [i_0 + 1])))))));
                var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) var_4))));
                var_53 = ((/* implicit */unsigned int) var_8);
            }
            var_54 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 0LL))) >> (((max((10874774665693294609ULL), (((arr_24 [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) arr_40 [i_0 + 2] [i_1] [i_0] [i_1])))))) - (10874774665693294580ULL)))));
        }
        for (unsigned char i_18 = 1; i_18 < 7; i_18 += 1) 
        {
            var_55 = ((/* implicit */unsigned long long int) max((var_55), (min((((/* implicit */unsigned long long int) (unsigned short)0)), (((((unsigned long long int) var_15)) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [(short)8] [i_18] [(_Bool)0] [i_0] [i_18] [(_Bool)0] [i_0])))))))));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 2; i_19 < 9; i_19 += 2) /* same iter space */
            {
                var_56 = ((/* implicit */unsigned short) ((unsigned int) var_13));
                var_57 = ((/* implicit */_Bool) (+(((((/* implicit */int) ((unsigned char) (_Bool)1))) % (((/* implicit */int) var_12))))));
                /* LoopSeq 1 */
                for (unsigned int i_20 = 1; i_20 < 8; i_20 += 1) 
                {
                    var_58 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18446744073709551603ULL)));
                    var_59 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((17U) * (0U))) & (min((528892563U), (((/* implicit */unsigned int) -769440330)))))) : (((/* implicit */unsigned int) arr_17 [i_18] [i_0] [i_19] [8LL] [6ULL]))));
                    var_60 = ((/* implicit */long long int) ((((unsigned long long int) var_5)) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */unsigned int) 0)) : (4294967268U))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_21 = 2; i_21 < 9; i_21 += 2) /* same iter space */
            {
                var_61 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_46 [i_21 + 1] [i_0 - 1] [i_21] [i_18]))));
                /* LoopSeq 1 */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        var_62 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_0 + 1] [i_18] [i_0 + 1] [i_22 + 1])) ? (arr_67 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_16))))));
                        arr_72 [i_0] [10ULL] [i_21] [i_18] [i_21] [i_21] [i_18] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_9)) ? (var_10) : (13U))));
                        arr_73 [i_0] [i_18 - 1] [i_18 - 1] [(_Bool)1] [i_21] [(_Bool)1] [i_18] = ((/* implicit */_Bool) ((arr_24 [i_0] [i_0 + 1] [i_0] [i_0 - 1]) % (arr_24 [i_18] [i_21] [i_22] [i_23])));
                        var_63 = ((/* implicit */unsigned char) min((var_63), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [5LL] [i_21] [i_21] [i_22]))) : (arr_15 [i_21] [i_0])))))));
                    }
                    for (unsigned int i_24 = 3; i_24 < 9; i_24 += 2) 
                    {
                        var_64 = ((/* implicit */_Bool) (-(((/* implicit */int) var_18))));
                        var_65 = ((/* implicit */long long int) max((var_65), (((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_8 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [(_Bool)1] [i_24]))))))));
                    }
                    var_66 = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) 0U)));
                    var_67 = ((/* implicit */unsigned char) max((var_67), (((/* implicit */unsigned char) ((((_Bool) (_Bool)1)) ? ((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0])))) : (((/* implicit */int) arr_58 [i_21] [i_21])))))));
                    var_68 = ((/* implicit */_Bool) max((var_68), (((/* implicit */_Bool) (-(((var_7) ? (((/* implicit */long long int) ((/* implicit */int) (short)3))) : (7LL))))))));
                    var_69 = ((/* implicit */int) min((var_69), (((/* implicit */int) var_14))));
                }
            }
        }
        for (short i_25 = 3; i_25 < 10; i_25 += 2) 
        {
            var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_42 [i_25] [i_25 + 1] [i_25 - 1] [i_25 - 1]), (max((arr_35 [i_25] [i_25]), (((/* implicit */short) arr_2 [i_0])))))))) < (max((var_0), (((/* implicit */unsigned int) max((arr_2 [(signed char)3]), (var_18)))))))))));
            /* LoopSeq 2 */
            for (long long int i_26 = 4; i_26 < 10; i_26 += 2) 
            {
                var_71 = ((/* implicit */_Bool) min((max((((/* implicit */short) var_7)), (arr_47 [i_25] [i_25] [i_25] [i_0] [i_25] [i_0 - 1] [i_26 - 3]))), (max((arr_47 [i_25] [i_25] [i_25 - 3] [i_26 - 2] [i_26] [i_26 + 1] [i_26]), (arr_47 [i_25] [i_25] [i_25 - 1] [i_25 - 3] [i_25 - 1] [i_25 - 3] [i_26 + 1])))));
                var_72 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_4))), (min((((/* implicit */unsigned short) var_12)), (var_5))))))));
            }
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                var_73 = ((/* implicit */unsigned int) arr_77 [(short)0] [i_25] [i_27]);
                var_74 = ((/* implicit */_Bool) max((var_74), (((/* implicit */_Bool) (+((~(((/* implicit */int) var_2)))))))));
                arr_84 [i_25] [i_25] [i_25] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) <= (22LL)))), (((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16ULL)) ? (((/* implicit */int) arr_46 [i_27] [i_0 + 1] [i_27] [i_25 - 2])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) var_14)))))))) : (((min((var_11), (((/* implicit */unsigned int) (unsigned char)255)))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_25] [(unsigned short)8]))))));
                var_75 = ((/* implicit */long long int) max((var_75), (((long long int) ((arr_11 [i_0] [i_0 + 1] [i_25] [i_25] [i_27]) && (((/* implicit */_Bool) var_10)))))));
            }
            var_76 = ((/* implicit */unsigned short) min((var_76), (((/* implicit */unsigned short) (((~(0LL))) | (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
        }
        var_77 = ((/* implicit */_Bool) ((((var_15) - (((/* implicit */long long int) ((/* implicit */int) ((-15) < (((/* implicit */int) var_13)))))))) | (((/* implicit */long long int) min((((unsigned int) var_17)), (((/* implicit */unsigned int) var_17)))))));
        arr_85 [i_0 + 2] = ((/* implicit */unsigned char) (-(((var_18) ? (((/* implicit */unsigned long long int) ((var_18) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))))) : (arr_82 [i_0] [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (unsigned short i_28 = 4; i_28 < 14; i_28 += 2) 
    {
        arr_89 [10U] [10U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_6)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_88 [i_28 + 1]))) : (var_11))))));
        arr_90 [i_28] [(_Bool)0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((_Bool) arr_86 [i_28 - 3] [i_28]))) : ((~(((/* implicit */int) arr_88 [i_28 + 1]))))));
    }
}
