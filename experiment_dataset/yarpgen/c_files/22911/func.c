/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22911
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        arr_2 [22ULL] |= ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) arr_0 [i_0 + 1] [i_0 + 1])));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_15);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (short)20893)) ? (71776119061217280ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20880)))));
            var_18 = ((((/* implicit */int) (unsigned char)220)) < (((/* implicit */int) (short)20880)));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned char) (~(((arr_0 [i_0] [i_0 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
            arr_10 [i_0] = ((/* implicit */unsigned short) min((min((1125899898454016LL), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)20910)))))), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) /* same iter space */
    {
        arr_13 [(unsigned short)9] [(unsigned short)9] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_14))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 3; i_4 < 11; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) max((var_20), (arr_7 [20])));
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        var_21 = ((/* implicit */int) var_10);
                        var_22 &= ((/* implicit */unsigned short) var_5);
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [(unsigned char)4] [i_6] [i_3 + 1])) << (((var_2) - (2042630770U)))));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 3; i_7 < 11; i_7 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) min((max((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0)))), ((+(((/* implicit */int) arr_1 [i_7])))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (0ULL)))) || (((/* implicit */_Bool) 7411088380950856947LL)))))));
            arr_24 [i_7] = ((/* implicit */signed char) max((((((/* implicit */int) arr_20 [i_3 - 1] [i_7] [(_Bool)1] [i_3 + 1])) >= (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) arr_22 [i_7]))))));
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 7803103657946491355ULL))));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_7))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 3; i_8 < 11; i_8 += 1) /* same iter space */
        {
            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_8 - 1] [i_8 - 2] [i_8 - 1])) ? (71776119061217280ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0)))))));
            /* LoopNest 2 */
            for (unsigned char i_9 = 3; i_9 < 10; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) ((((unsigned long long int) var_16)) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                            var_29 += ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)-20894)))) == (((/* implicit */int) ((_Bool) var_3)))));
                        }
                        for (signed char i_12 = 1; i_12 < 8; i_12 += 2) /* same iter space */
                        {
                            arr_39 [(_Bool)0] [(unsigned char)8] [(signed char)0] [i_8] [i_10] = ((unsigned long long int) arr_11 [i_3] [i_8]);
                            var_30 = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_27 [i_3] [(short)4] [i_8])) : (arr_37 [2U] [i_8 - 2] [i_8 - 2] [i_8 - 2] [i_12 + 2] [i_8] [(unsigned char)0]));
                        }
                        arr_40 [(unsigned char)11] [i_8] [0U] [10U] = ((/* implicit */unsigned char) var_8);
                        arr_41 [i_10] [(_Bool)1] [0ULL] [(signed char)0] &= ((/* implicit */unsigned short) arr_30 [i_3] [(short)0] [i_8] [i_8] [4ULL] [i_10 + 1]);
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(short)8] [(short)8])) || (((/* implicit */_Bool) var_10)))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (short)20894))));
        }
    }
    /* vectorizable */
    for (unsigned char i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 3; i_14 < 11; i_14 += 2) 
        {
            for (short i_15 = 2; i_15 < 9; i_15 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned long long int) (short)0);
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7121)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1798585962113756196LL)));
                        arr_52 [i_13] [i_14 - 3] [i_16] [9U] [(unsigned char)4] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_13] [i_14 - 2])) && (((/* implicit */_Bool) var_8))));
                        var_35 = (short)-6750;
                    }
                    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) arr_29 [i_13] [2ULL]);
                        /* LoopSeq 4 */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 2) 
                        {
                            var_37 -= ((/* implicit */unsigned char) var_4);
                            var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            arr_63 [i_13] [i_13] [i_13] [i_13] [(unsigned char)0] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_38 [i_13] [i_14] [(unsigned short)6] [i_19] [i_19] [i_13 + 1])) && (((/* implicit */_Bool) 10643640415763060282ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_13] [i_15])))))));
                            var_39 = arr_42 [i_13];
                        }
                        for (short i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            var_40 = arr_4 [i_14] [i_20] [i_17];
                            var_41 = var_8;
                        }
                        for (short i_21 = 3; i_21 < 9; i_21 += 2) 
                        {
                            var_42 = ((/* implicit */int) (+(((var_11) - (var_4)))));
                            arr_69 [(unsigned short)11] [(short)6] [8ULL] [8ULL] [i_21] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_5))));
                            var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_17] [i_17] [(unsigned short)4] [i_21]))) ^ (var_9)));
                        }
                    }
                    for (unsigned char i_22 = 0; i_22 < 12; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */unsigned int) (_Bool)1);
                        arr_73 [11] [(unsigned short)8] |= (~(((/* implicit */int) var_13)));
                    }
                    var_45 = ((/* implicit */long long int) (signed char)-102);
                }
            } 
        } 
        arr_74 [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17531))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_16 [i_13] [i_13] [i_13] [2LL])))));
        var_46 = ((/* implicit */unsigned int) max((var_46), ((-(var_11)))));
        /* LoopSeq 2 */
        for (unsigned char i_23 = 1; i_23 < 11; i_23 += 3) 
        {
            arr_79 [i_23] [i_23] = ((/* implicit */_Bool) var_2);
            var_47 += ((/* implicit */unsigned short) ((int) arr_77 [i_23 - 1] [(unsigned short)2]));
            arr_80 [i_23] [i_23] [i_13 + 1] = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_26 = 3; i_26 < 11; i_26 += 2) 
                {
                    arr_91 [(unsigned char)10] [(unsigned char)10] [i_25] [i_25] [i_25] |= ((/* implicit */long long int) var_4);
                    var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) (unsigned char)0))));
                    /* LoopSeq 4 */
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (7803103657946491386ULL)));
                        arr_96 [i_24] [i_24] [i_27] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)3584)) ? (1829143811U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95)))));
                    }
                    for (short i_28 = 1; i_28 < 11; i_28 += 1) /* same iter space */
                    {
                        arr_99 [i_24] [i_26 - 2] [i_25] [i_26] = ((/* implicit */unsigned char) var_13);
                        arr_100 [i_13] [i_24] [(unsigned char)2] [2ULL] [i_28 - 1] = ((/* implicit */int) (+(var_2)));
                        arr_101 [i_26] [i_24] [i_25] [i_24] [i_24] = ((long long int) arr_67 [i_26] [8ULL] [i_26] [i_26] [i_26]);
                        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((var_0) ? (7803103657946491355ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    }
                    for (short i_29 = 1; i_29 < 11; i_29 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_29 + 1] [i_13 - 1] [i_24])) ? (arr_15 [i_29 + 1] [i_13 + 1] [i_24]) : (1099511627775ULL)));
                        var_52 = ((/* implicit */short) (~(((/* implicit */int) var_14))));
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (18446744073709551615ULL)));
                        var_54 &= var_9;
                    }
                    for (unsigned long long int i_30 = 2; i_30 < 11; i_30 += 2) 
                    {
                        var_55 = ((/* implicit */unsigned long long int) arr_56 [i_13] [i_24] [i_25] [i_25]);
                        arr_106 [i_25] [i_24] = var_0;
                    }
                    var_56 &= ((/* implicit */unsigned long long int) (signed char)-102);
                }
                for (short i_31 = 1; i_31 < 10; i_31 += 1) 
                {
                    arr_110 [i_13 - 1] [i_24] [i_31] [i_13 - 1] = ((/* implicit */int) (+(11332515143225639989ULL)));
                    var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) var_1))));
                    var_58 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_90 [9] [i_24] [i_25] [i_24] [(unsigned char)3] [i_25])) && (((/* implicit */_Bool) ((int) var_4)))));
                    var_59 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_102 [i_13] [i_13] [i_24] [i_13] [i_31]))));
                    var_60 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_89 [i_13 - 1]))));
                }
                /* LoopSeq 1 */
                for (int i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    var_61 |= ((/* implicit */unsigned long long int) var_7);
                    arr_113 [i_13 + 1] [8ULL] [i_25] [i_32] [8ULL] &= ((/* implicit */unsigned long long int) var_10);
                    var_62 = ((/* implicit */_Bool) max((var_62), (arr_76 [i_32])));
                }
            }
            for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 1) 
            {
                var_63 = ((/* implicit */unsigned char) 536870911U);
                arr_116 [i_24] = ((/* implicit */long long int) ((((/* implicit */int) arr_45 [i_13 - 1])) > (((/* implicit */int) var_14))));
                var_64 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (arr_70 [(_Bool)1] [i_13 - 1] [i_33] [i_24])));
            }
            arr_117 [9ULL] [i_24] [i_24] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) var_16))))));
            /* LoopSeq 2 */
            for (int i_34 = 0; i_34 < 12; i_34 += 1) 
            {
                var_65 = ((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_103 [8U] [8U] [(unsigned char)0] [8U] [i_13 + 1] [i_13 - 1]))));
                arr_121 [i_24] = ((/* implicit */unsigned char) ((int) (short)17541));
                var_66 = ((/* implicit */int) max((var_66), (((((/* implicit */_Bool) ((long long int) arr_37 [i_13] [i_24] [i_34] [i_24] [8LL] [(_Bool)1] [i_13]))) ? (((/* implicit */int) arr_72 [i_13] [i_13 - 1] [7ULL] [i_13 + 1] [i_13])) : (arr_60 [0] [0] [i_24])))));
            }
            for (unsigned long long int i_35 = 0; i_35 < 12; i_35 += 2) 
            {
                var_67 = ((/* implicit */unsigned long long int) (signed char)64);
                var_68 = ((/* implicit */short) min((var_68), (((/* implicit */short) (unsigned char)48))));
                arr_124 [i_24] [i_24] [3ULL] = ((/* implicit */unsigned short) var_14);
            }
            arr_125 [i_24] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_58 [i_13 + 1] [i_13 + 1] [i_13 + 1] [i_13 + 1] [6ULL]))));
        }
        arr_126 [i_13] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_43 [i_13 + 1]))));
    }
    for (unsigned long long int i_36 = 2; i_36 < 19; i_36 += 3) 
    {
        arr_129 [i_36] = ((/* implicit */unsigned long long int) ((unsigned short) ((int) arr_6 [i_36] [i_36])));
        var_69 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((13666054770554719845ULL), (10551778752065250245ULL))))));
        /* LoopNest 3 */
        for (unsigned long long int i_37 = 0; i_37 < 22; i_37 += 1) 
        {
            for (int i_38 = 0; i_38 < 22; i_38 += 2) 
            {
                for (int i_39 = 0; i_39 < 22; i_39 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_40 = 3; i_40 < 19; i_40 += 1) 
                        {
                            var_70 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)146)) ? (9223055909639839430ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))))))));
                            var_71 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        }
                        var_72 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_127 [i_36])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-8))))) ? (var_8) : (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)0))));
                        var_73 |= ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_16)))), ((!(((/* implicit */_Bool) -1184122211))))))), (max((var_8), (((/* implicit */unsigned long long int) arr_137 [i_36 + 3]))))));
                        var_74 *= ((/* implicit */int) ((((/* implicit */int) ((short) arr_8 [4LL] [i_36] [i_36]))) > (((/* implicit */int) var_16))));
                    }
                } 
            } 
        } 
        var_75 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_12), (var_16))))) <= (arr_7 [(unsigned char)12])))), (1333571159U)));
    }
    var_76 = ((/* implicit */signed char) var_15);
    var_77 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-(var_4))))))) >> (((/* implicit */int) var_0))));
}
