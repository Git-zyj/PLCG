/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193347
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
    var_12 = ((/* implicit */short) (~(min((((/* implicit */int) (signed char)18)), (var_8)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)27565)) ? (((/* implicit */int) (signed char)-18)) : (((/* implicit */int) arr_1 [i_0] [3LL])))), (((/* implicit */int) (signed char)-19))));
        var_14 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_2))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_15 += ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_2 [i_1] [i_2])))));
            var_16 += ((/* implicit */signed char) var_0);
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_1] [i_1])) | (((var_9) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((arr_1 [i_3] [i_1]) ? (var_4) : (((/* implicit */long long int) ((int) var_5))))))));
            /* LoopNest 2 */
            for (long long int i_4 = 1; i_4 < 7; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_19 [i_1] [i_1] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_4 + 1] [i_4 + 2] [i_4 - 1]))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_19 -= ((/* implicit */unsigned short) (+(((arr_16 [i_1] [(short)8] [i_4] [i_5]) + (var_1)))));
                            arr_22 [i_3] [i_5] [i_4] [i_3] [i_1] [i_3] = ((/* implicit */short) ((unsigned int) (-(arr_11 [i_1] [i_1] [i_4 - 1]))));
                            arr_23 [i_3] = ((/* implicit */unsigned char) var_5);
                        }
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            arr_26 [i_1] [i_4] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-15459)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 + 2] [(signed char)9]))) : (0ULL)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)27563))) : (((arr_2 [i_3] [i_7]) ? (((/* implicit */int) arr_24 [i_1] [i_1] [i_4 + 3] [i_5] [i_3])) : (((/* implicit */int) arr_7 [(unsigned short)0]))))));
                            arr_27 [i_3] [i_5] [i_4] [i_3] [i_1] [i_3] = ((/* implicit */long long int) ((signed char) arr_0 [i_3]));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_8 = 3; i_8 < 6; i_8 += 1) 
                        {
                            var_20 ^= ((/* implicit */unsigned int) arr_12 [(signed char)2] [i_3] [2ULL]);
                            var_21 += ((/* implicit */unsigned short) arr_16 [i_5] [(unsigned short)4] [(unsigned short)4] [i_1]);
                            arr_31 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                            var_22 = ((/* implicit */_Bool) arr_24 [i_1] [i_8 - 2] [i_3] [(_Bool)1] [i_3]);
                        }
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            arr_36 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_4 + 2] [i_4] [i_4 - 1] [i_5] [i_4 + 2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11128)))))))));
                            arr_37 [i_9] [i_3] [i_1] = (-(arr_28 [i_4 + 2] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_3]));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                arr_41 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)23179))));
                var_23 = ((/* implicit */short) ((((((/* implicit */int) var_7)) != (-1014868525))) && (((_Bool) arr_2 [i_1] [i_10]))));
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((short) arr_3 [i_1] [i_1])))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_15 [i_1] [i_3] [i_10]))));
            }
            for (unsigned short i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                arr_45 [(unsigned short)8] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) arr_8 [i_11 - 1] [i_11 - 1] [i_11 + 1])) ? ((~(((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) arr_17 [i_3] [i_3] [i_11 + 1])) : (((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_1])))));
                var_26 = ((/* implicit */short) arr_30 [i_1] [i_3] [i_3] [i_11 + 1] [i_11 + 1]);
                var_27 |= ((short) var_5);
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                {
                    arr_48 [i_1] [i_3] [i_3] [i_12] = ((((/* implicit */_Bool) ((long long int) arr_15 [8ULL] [i_3] [i_12]))) ? (var_5) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_3]))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_3] [i_11 + 1] [i_11] [i_12] [i_1]))))) ? ((-(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 9146929612356035854LL)) < (arr_10 [i_1] [i_3] [i_12]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_12] [i_12] [8]))) : (arr_10 [(unsigned short)2] [i_1] [i_1]))))));
                }
                for (signed char i_13 = 3; i_13 < 9; i_13 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_11 - 1] [i_3])) ? (arr_38 [i_11 - 1] [i_3]) : (arr_38 [i_11 - 1] [i_3])));
                        var_31 = ((/* implicit */int) var_5);
                        arr_55 [i_1] [i_3] [i_11] [i_3] [i_3] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned short)65534))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_42 [i_1] [i_1] [i_1] [i_1]))));
                        var_32 = ((/* implicit */short) var_0);
                    }
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_3] [i_3] [i_11 - 1] [i_13] [i_11 - 1] = ((/* implicit */unsigned long long int) arr_32 [i_1] [i_3]);
                        arr_61 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)15459))));
                        var_33 = var_10;
                    }
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_43 [i_11] [i_11] [i_13 - 2])) ? (((/* implicit */int) ((unsigned short) (unsigned short)65534))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_3] [i_16])) == (((/* implicit */int) var_10)))))));
                        arr_66 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [(short)1] [(short)1] [i_3] [i_3]))) : (var_11))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_3])))));
                    }
                    for (signed char i_17 = 3; i_17 < 8; i_17 += 2) 
                    {
                        arr_71 [i_1] [i_3] [i_3] [i_11 - 1] [i_11 - 1] [i_13] [i_17] = ((/* implicit */unsigned short) ((arr_52 [i_1] [i_3] [i_1] [i_1] [i_1]) < (arr_52 [i_1] [i_3] [i_1] [i_1] [i_1])));
                        var_35 ^= ((/* implicit */unsigned long long int) ((long long int) ((short) arr_9 [i_1])));
                        arr_72 [i_1] [i_3] [i_11 + 1] [i_3] [i_17] = ((/* implicit */_Bool) (-(6987847052756881650LL)));
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1935788242)) && (((/* implicit */_Bool) (signed char)18))));
                        var_37 = ((/* implicit */short) arr_13 [i_3]);
                    }
                    var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_3] [i_11]))) ? (arr_63 [i_1] [i_3] [i_13 + 1] [i_13] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30525)))));
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_11 + 1] [i_11 + 1] [i_13] [i_13] [i_13 + 1] [i_3])) ? (arr_28 [i_11 - 1] [i_11 - 1] [i_13] [i_13] [i_13 - 2] [i_3]) : (arr_28 [i_11 - 1] [i_11] [i_11 + 1] [i_13 - 1] [i_13 + 1] [i_3])));
                    var_40 &= ((/* implicit */unsigned short) var_2);
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
                {
                    var_41 -= ((/* implicit */int) ((((/* implicit */int) (short)32767)) != (((/* implicit */int) ((((/* implicit */int) arr_35 [i_18] [(_Bool)1] [(_Bool)1] [i_1])) < (((/* implicit */int) (unsigned short)0)))))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_51 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1])))))) != (arr_4 [i_3])));
                }
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */short) arr_6 [i_1] [i_1] [i_1]);
                    var_44 = ((/* implicit */unsigned long long int) arr_76 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_19 + 1]);
                    var_45 = ((/* implicit */short) ((var_0) & (((/* implicit */unsigned long long int) 1433943262))));
                }
            }
            /* LoopSeq 2 */
            for (int i_20 = 1; i_20 < 8; i_20 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    arr_83 [i_1] [i_3] [i_3] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22263)) ? (((/* implicit */int) arr_46 [i_20] [i_20 + 1] [i_20])) : (((((/* implicit */int) var_3)) >> (((((/* implicit */int) (unsigned short)25402)) - (25377)))))));
                    /* LoopSeq 3 */
                    for (short i_22 = 1; i_22 < 8; i_22 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */long long int) arr_53 [i_1] [i_1] [i_21] [i_1] [i_22]);
                        var_47 = ((/* implicit */signed char) min((var_47), (((/* implicit */signed char) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_82 [i_21])) : (var_0))))))));
                    }
                    for (short i_23 = 1; i_23 < 8; i_23 += 2) /* same iter space */
                    {
                        var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_89 [i_23] [i_3] [i_20 - 1] [i_3] [i_3] [i_1])) ? (((/* implicit */unsigned int) arr_30 [i_1] [i_1] [i_1] [i_1] [i_1])) : (783800302U))) << ((((-(((/* implicit */int) var_10)))) + (31871)))));
                        arr_90 [i_1] [i_3] [i_20] [i_20] [i_21] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >> (2LL)));
                        var_49 = ((/* implicit */short) (-(var_4)));
                        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4978810160631227472LL)) ? (((/* implicit */int) (short)20827)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) arr_86 [i_23 - 1] [i_1] [i_21] [i_20] [i_3] [i_3] [i_1]))) : (((/* implicit */int) (unsigned short)26021)))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
                    {
                        arr_94 [i_3] [i_3] [i_20 + 2] [i_24] [i_24] [i_20] [i_21] = ((/* implicit */short) arr_14 [i_20 + 2] [i_20 + 2] [i_3]);
                        var_51 = ((/* implicit */unsigned short) ((arr_67 [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_3] [i_20 + 2] [8ULL] [i_3]) << (((arr_11 [i_20 - 1] [i_20 + 1] [i_1]) + (6039947645670351266LL)))));
                        var_52 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (_Bool)0)))));
                        arr_95 [i_1] [i_3] [i_20] [i_3] [i_24] [(short)8] [i_21] = ((/* implicit */signed char) arr_69 [i_24] [i_3] [i_20] [i_3] [i_1]);
                    }
                }
                for (unsigned int i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    arr_98 [i_3] [i_3] [i_20] = ((/* implicit */signed char) (-((-(var_11)))));
                    arr_99 [i_3] [i_1] [i_1] [i_1] [i_1] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)41760)) ? (((/* implicit */int) (unsigned short)1)) : (1014868512)));
                    var_53 &= ((/* implicit */unsigned char) -621326359324077440LL);
                }
                for (unsigned short i_26 = 0; i_26 < 10; i_26 += 2) /* same iter space */
                {
                    var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) arr_1 [i_1] [i_3]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_27 = 0; i_27 < 10; i_27 += 1) 
                    {
                        arr_106 [i_26] |= ((/* implicit */unsigned short) -1014868512);
                        var_55 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_62 [i_20] [i_20 - 1] [i_20 + 2] [i_20 - 1] [i_20 - 1] [i_26]))));
                    }
                    for (unsigned short i_28 = 0; i_28 < 10; i_28 += 1) 
                    {
                        var_56 = ((/* implicit */signed char) arr_35 [i_20 + 1] [i_20 + 1] [i_20 + 2] [i_20]);
                        var_57 = ((/* implicit */long long int) ((unsigned long long int) var_7));
                    }
                }
                for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) /* same iter space */
                {
                    var_58 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * ((-(1926395649U)))));
                    var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_79 [i_1] [i_3])) : (arr_30 [i_20 - 1] [i_3] [i_20] [i_20 - 1] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_43 [i_1] [i_3] [i_20 + 1])))) : (((((/* implicit */_Bool) 2368571652U)) ? (-621326359324077443LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))))));
                    var_60 = ((/* implicit */long long int) 1132509107U);
                    arr_112 [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_102 [i_3] [i_20 + 1] [i_20 - 1] [1] [i_20 + 1] [i_3])) ? (((/* implicit */int) arr_74 [i_3] [i_29] [i_20 + 2] [i_20] [i_3] [i_1])) : (((/* implicit */int) ((unsigned short) -621326359324077440LL)))));
                    var_61 = ((/* implicit */unsigned short) ((unsigned long long int) arr_102 [i_3] [i_3] [i_1] [i_1] [i_1] [i_3]));
                }
                var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 621326359324077440LL)) ? (((/* implicit */int) arr_32 [i_1] [i_20])) : (arr_110 [(signed char)6] [i_3] [i_3] [(signed char)6])))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_10))))) : ((-(-636068401232743638LL))))))));
                var_63 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_100 [i_20 + 2] [i_20 - 1] [i_20] [i_3])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [(unsigned short)2] [(unsigned short)2] [i_3] [i_3] [(unsigned short)2] [i_3])))))));
                var_64 = ((/* implicit */unsigned long long int) min((var_64), (((/* implicit */unsigned long long int) arr_62 [i_20 - 1] [i_20] [i_20 + 2] [i_20] [i_20 - 1] [8LL]))));
            }
            for (int i_30 = 1; i_30 < 8; i_30 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned long long int i_31 = 0; i_31 < 10; i_31 += 3) 
                {
                    for (signed char i_32 = 1; i_32 < 9; i_32 += 1) 
                    {
                        {
                            arr_120 [i_1] [i_30 + 1] [i_3] = ((/* implicit */_Bool) ((long long int) arr_10 [i_30 + 1] [i_30] [i_31]));
                            var_65 = ((/* implicit */_Bool) max((var_65), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_69 [i_32 + 1] [6U] [i_32 - 1] [i_32 + 1] [(_Bool)1])) : (((/* implicit */int) arr_69 [i_32 - 1] [(short)8] [i_32 - 1] [i_32 + 1] [i_32])))))));
                            arr_121 [i_1] [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_13 [i_3]);
                        }
                    } 
                } 
                arr_122 [i_1] [i_1] [i_3] [i_30] = ((/* implicit */unsigned char) var_6);
            }
        }
        /* LoopSeq 1 */
        for (long long int i_33 = 0; i_33 < 10; i_33 += 4) 
        {
            var_66 = ((/* implicit */unsigned long long int) max((var_66), (((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [i_33]))) ^ (11217137593751651608ULL))) == (((((/* implicit */_Bool) 19U)) ? (14419998306724659460ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))) ? (((((((/* implicit */_Bool) 1433943257)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4306141817180498218ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)0)))))))));
            arr_126 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((var_5), (((/* implicit */unsigned long long int) 1508535501U)))), (((/* implicit */unsigned long long int) ((arr_77 [i_33] [i_33] [i_1]) ? (2333248286047439267LL) : (((/* implicit */long long int) 1433943274)))))))) ? (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1915139406U)))), (arr_92 [i_33] [i_33]))) : (max((arr_52 [i_1] [i_33] [i_33] [i_33] [i_33]), (arr_92 [i_1] [i_1])))));
        }
        arr_127 [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) 0ULL))));
        /* LoopSeq 2 */
        for (long long int i_34 = 0; i_34 < 10; i_34 += 1) 
        {
            var_67 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) arr_17 [(_Bool)1] [(_Bool)1] [(_Bool)1])) ? (var_0) : (((/* implicit */unsigned long long int) 2663799400U)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_85 [i_34] [i_34] [i_34] [i_34] [i_34]))))));
            var_68 = ((/* implicit */signed char) (-((-(18446744073709551615ULL)))));
        }
        for (unsigned int i_35 = 0; i_35 < 10; i_35 += 4) 
        {
            var_69 |= ((/* implicit */int) (-(arr_9 [i_35])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_36 = 0; i_36 < 10; i_36 += 3) 
            {
                var_70 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_36] [i_1]))));
                arr_137 [i_36] [i_35] [i_35] [i_35] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)3086))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_107 [i_1] [i_35] [i_36] [i_36] [i_36])) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_71 = ((/* implicit */short) arr_73 [i_1] [4LL] [i_35] [i_36]);
                var_72 *= var_9;
                /* LoopNest 2 */
                for (int i_37 = 0; i_37 < 10; i_37 += 4) 
                {
                    for (unsigned int i_38 = 0; i_38 < 10; i_38 += 4) 
                    {
                        {
                            var_73 ^= ((/* implicit */signed char) ((((/* implicit */int) ((short) (_Bool)1))) ^ (var_8)));
                            arr_144 [(unsigned short)4] [(unsigned short)4] [i_36] [i_37] [i_36] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54883))));
                            var_74 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_39 = 0; i_39 < 10; i_39 += 1) 
            {
                arr_149 [i_39] [i_39] [i_39] = ((/* implicit */long long int) ((unsigned int) arr_42 [i_1] [i_1] [i_1] [i_1]));
                /* LoopSeq 2 */
                for (unsigned char i_40 = 0; i_40 < 10; i_40 += 1) 
                {
                    var_75 += ((/* implicit */short) var_9);
                    arr_152 [i_1] [i_1] [i_40] [i_35] [3] [i_40] = ((/* implicit */unsigned char) var_0);
                    arr_153 [i_1] [i_35] [i_40] [i_40] = ((/* implicit */unsigned short) 563879866);
                    var_76 = ((/* implicit */_Bool) 14228056387865271068ULL);
                }
                for (unsigned int i_41 = 0; i_41 < 10; i_41 += 2) 
                {
                    var_77 *= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)223)) != (((/* implicit */int) (short)-14305))));
                    var_78 = ((/* implicit */unsigned short) min((var_78), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)5627)) ? (((/* implicit */int) arr_133 [i_1] [i_39] [i_41])) : (((/* implicit */int) arr_133 [i_1] [i_35] [i_39])))))));
                    var_79 = ((/* implicit */long long int) min((var_79), (((((/* implicit */_Bool) ((unsigned long long int) -563879876))) ? (arr_78 [i_41]) : (((/* implicit */long long int) ((/* implicit */int) arr_101 [i_1] [i_1] [i_1] [i_39] [i_35] [i_41])))))));
                    var_80 |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (_Bool)1)))));
                }
                /* LoopNest 2 */
                for (signed char i_42 = 0; i_42 < 10; i_42 += 3) 
                {
                    for (unsigned long long int i_43 = 0; i_43 < 10; i_43 += 3) 
                    {
                        {
                            var_81 = arr_140 [i_1] [i_1] [i_39] [i_42] [i_42];
                            arr_161 [i_1] [i_1] [i_1] [i_42] [i_1] = ((/* implicit */unsigned int) ((arr_58 [i_1] [i_35] [i_35] [i_35] [i_42] [i_43]) < (arr_58 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                            arr_162 [i_1] [i_35] [i_39] [i_42] [i_43] = ((/* implicit */unsigned int) arr_78 [i_42]);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_44 = 0; i_44 < 10; i_44 += 2) 
            {
                for (long long int i_45 = 1; i_45 < 7; i_45 += 2) 
                {
                    {
                        arr_169 [i_44] [i_44] [i_44] [i_44] [i_44] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_42 [i_1] [i_44] [i_44] [i_45 + 1])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (short)23198)))), (((/* implicit */int) arr_42 [i_1] [i_35] [i_44] [i_45]))));
                        arr_170 [i_1] [i_45 - 1] [i_44] [i_45] [i_45] [i_35] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (unsigned char)0)), (-4522913047609407618LL))) != (((/* implicit */long long int) 2415959343U))))), (((((/* implicit */_Bool) min((arr_20 [i_1] [i_1] [i_1] [i_44] [i_1] [i_1]), (((/* implicit */short) (unsigned char)6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : ((~(18446744073709551615ULL)))))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_46 = 1; i_46 < 8; i_46 += 2) 
        {
            var_82 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-91)) >= (((/* implicit */int) (unsigned short)57621))))) ^ ((-(((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */unsigned long long int) arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)31800))))), (1ULL)))));
            var_83 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_50 [i_1] [i_1] [i_1]))) ? (((((/* implicit */_Bool) (unsigned short)35132)) ? (21ULL) : (((/* implicit */unsigned long long int) -1397669783)))) : (((/* implicit */unsigned long long int) arr_75 [(unsigned char)6] [i_46 + 2] [i_1] [i_1]))));
        }
    }
}
