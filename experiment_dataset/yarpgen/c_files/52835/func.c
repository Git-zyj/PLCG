/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52835
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_15)))) ^ (((/* implicit */int) var_13)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            var_19 ^= ((/* implicit */unsigned short) arr_6 [i_1] [i_1] [i_1]);
            arr_7 [i_0] [i_0] [i_1 + 1] = ((/* implicit */_Bool) (-(var_3)));
        }
        arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-61)) < (((/* implicit */int) (!((!(((/* implicit */_Bool) 15197547225423625703ULL)))))))));
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                {
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-3)) - (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) -1099839654666684322LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_13 [i_3] [i_3] [i_3 + 1] [i_3])))));
                    arr_15 [i_3] = ((/* implicit */unsigned short) (signed char)51);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) min((((/* implicit */short) var_17)), (var_13)))) ? (((((/* implicit */_Bool) (unsigned short)4452)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (5631557293388070192LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-60), ((signed char)111)))))))));
                            arr_22 [i_0] [i_2] [i_2] [i_3] [i_4] [i_2] |= ((/* implicit */signed char) min((max((arr_10 [i_3 + 1] [i_2 - 1]), (((((/* implicit */_Bool) 72057594037927935LL)) ? (arr_1 [i_2]) : (((/* implicit */int) arr_2 [i_2] [i_3])))))), (((/* implicit */int) ((((/* implicit */_Bool) 1036484064U)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_2))))))))));
                        }
                        arr_23 [i_3] [i_3] [i_3] = ((/* implicit */int) ((3580179286U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157)))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_10))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    }
                    var_21 += ((/* implicit */short) 35184372023296LL);
                }
            } 
        } 
        arr_25 [i_0] [i_0] = max((((/* implicit */int) (signed char)-103)), (max((168331239), (((/* implicit */int) (_Bool)1)))));
        var_22 = ((/* implicit */int) max((var_22), (max((((arr_10 [i_0] [i_0]) / (((/* implicit */int) var_17)))), ((+(arr_10 [i_0] [i_0])))))));
    }
    for (long long int i_6 = 3; i_6 < 16; i_6 += 1) 
    {
        arr_30 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_6 - 3])) ? (arr_26 [i_6 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((arr_26 [i_6 - 1]), (arr_26 [i_6 + 1]))) : ((~(arr_26 [i_6 - 1])))));
        arr_31 [i_6] = ((/* implicit */unsigned int) max((arr_28 [i_6]), (((/* implicit */int) ((signed char) (signed char)-72)))));
        arr_32 [i_6] = max((14278211285236129093ULL), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))))));
    }
    for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 2; i_8 < 23; i_8 += 2) 
        {
            arr_39 [i_7] [i_7] = ((/* implicit */unsigned short) ((13715563754411444945ULL) >> (((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) (~(arr_33 [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) var_10)), ((signed char)96))))) : (arr_35 [i_8 + 1] [i_7])))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            var_24 *= ((/* implicit */short) (~((~(arr_41 [i_9] [i_9] [i_7])))));
            arr_42 [i_7] = ((/* implicit */unsigned long long int) -5848411554120416686LL);
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) min(((+(arr_41 [i_10] [i_10] [i_7]))), (((/* implicit */unsigned int) (short)-24082))));
                            arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)169))))) + ((~(((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) arr_47 [i_7] [i_9] [i_11] [i_12]))));
                            arr_53 [14] [i_11] [i_10] [i_9] [i_7] = ((/* implicit */int) ((min((((/* implicit */unsigned int) (short)3584)), (3907162821U))) >> (((((/* implicit */int) (unsigned char)161)) - (132)))));
                            arr_54 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (((((/* implicit */int) (_Bool)1)) ^ (1684895946)))))) ? (arr_36 [i_7] [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-117))));
                        }
                    } 
                } 
                arr_55 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (+(arr_37 [i_7])))))));
                /* LoopSeq 1 */
                for (unsigned short i_13 = 4; i_13 < 24; i_13 += 3) 
                {
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) 1671792911))));
                    arr_58 [i_7] [i_13] [i_7] [i_7] [i_7] = ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_35 [i_13] [i_13])))) && (((/* implicit */_Bool) 496587242U))))) + (((/* implicit */int) arr_50 [i_7] [i_7] [i_7] [i_7] [i_13 - 1])));
                }
                /* LoopNest 2 */
                for (int i_14 = 4; i_14 < 24; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 36028797018955776LL)) ? (((/* implicit */int) ((signed char) (!(arr_38 [i_10] [i_9]))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (13938949661065868524ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_7] [i_9] [i_14] [i_15])) ? (((/* implicit */int) arr_44 [i_9] [i_10] [i_15])) : (((/* implicit */int) (signed char)-66))))))))));
                            arr_66 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_46 [i_14] [i_14] [i_14 - 2]) * (arr_46 [i_14] [(unsigned short)5] [i_14 - 4])))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)16383)))) : (((((/* implicit */_Bool) arr_44 [i_14 - 1] [i_14 - 1] [22LL])) ? (((/* implicit */int) (signed char)77)) : (((/* implicit */int) var_12))))));
                            arr_67 [i_7] [i_7] [i_7] [i_14 - 2] [i_15] = ((int) max(((!(((/* implicit */_Bool) var_3)))), (arr_50 [i_7] [i_14 - 3] [i_7] [i_15] [i_15])));
                            arr_68 [i_15] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) max((99028320), (((/* implicit */int) arr_57 [i_15] [i_14] [i_9] [i_7]))))), (max((((/* implicit */unsigned int) (unsigned short)20111)), (arr_56 [i_7] [i_9] [i_10] [i_14]))))), (((/* implicit */unsigned int) var_8))));
                        }
                    } 
                } 
                arr_69 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */_Bool) arr_63 [i_9] [i_10]);
            }
            for (unsigned short i_16 = 3; i_16 < 23; i_16 += 4) 
            {
                arr_72 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)202)) * (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) : (((/* implicit */int) var_14)))) | ((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_18 = 2; i_18 < 23; i_18 += 2) 
                    {
                        arr_77 [i_7] [i_7] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_70 [i_7] [i_7] [i_7]), (((/* implicit */unsigned short) (short)16482))))))))) : (min((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (9057243578595044851ULL))), (4930742345152721262ULL)))));
                        arr_78 [i_7] [i_9] [4LL] &= ((/* implicit */long long int) max((max((arr_46 [i_9] [i_16 - 2] [i_18 - 2]), (((/* implicit */unsigned long long int) (signed char)-22)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_9] [i_16 + 1] [i_18 + 2])))))));
                    }
                    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_48 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16 + 2])) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) var_17))))));
                        var_29 = ((/* implicit */unsigned int) ((min((max((arr_37 [i_7]), (var_9))), (((/* implicit */long long int) ((((-648176647) + (2147483647))) << (((((/* implicit */int) var_1)) - (39205)))))))) * (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)51245)))))));
                        arr_81 [i_7] [i_9] [i_16] [i_17] [i_19] = ((/* implicit */long long int) var_11);
                        arr_82 [i_7] [i_7] [i_16] [i_16] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_61 [i_19] [i_17] [i_16 - 3] [i_9] [i_9] [i_7])) ? (var_8) : (((/* implicit */int) (unsigned short)25189))))));
                    }
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) /* same iter space */
                    {
                        arr_85 [i_7] [i_9] [i_16 - 2] [i_16 - 2] [i_20] = ((/* implicit */int) max((min((max((arr_76 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)-10)), (3473628912U))))));
                        arr_86 [i_20] [i_17] [i_7] [i_9] [i_7] = ((/* implicit */int) ((((max((((/* implicit */long long int) (short)-7143)), (var_9))) + (9223372036854775807LL))) >> (max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */int) arr_44 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_7))))))));
                        arr_87 [i_20] [i_17] [i_17] [i_16 + 1] [i_9] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)7)), (768U)))) ? (-1508426860) : (((/* implicit */int) (unsigned char)204))));
                    }
                    for (unsigned char i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
                    {
                        var_30 *= ((/* implicit */signed char) (-(((max((arr_43 [i_17] [i_9]), (((/* implicit */unsigned int) (unsigned char)0)))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))));
                        var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)42419)), (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3793295598U)))));
                        arr_90 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-((((_Bool)1) ? (((((/* implicit */_Bool) var_5)) ? (14506895282890707388ULL) : (((/* implicit */unsigned long long int) arr_62 [i_16] [7LL] [7LL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 129024LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_71 [i_7] [i_7] [i_7] [i_7])))))))));
                        arr_91 [i_17] &= ((/* implicit */_Bool) 265751435U);
                    }
                    var_32 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (signed char)-31)), ((~((~(7478970958801614764ULL)))))));
                }
            }
        }
        arr_92 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_7] [i_7] [i_7] [i_7])) & (arr_33 [i_7])))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_15)))), ((!(((/* implicit */_Bool) 12804947654513926146ULL))))))) : (max((((/* implicit */int) var_0)), ((+(((/* implicit */int) (short)16382)))))));
    }
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        arr_96 [i_22] = (+((+(((/* implicit */int) arr_50 [i_22] [i_22] [i_22] [i_22] [i_22])))));
        /* LoopSeq 2 */
        for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_89 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))), (((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */int) arr_89 [i_23] [i_23] [i_22] [i_22] [i_22] [i_22])) : (((/* implicit */int) var_10)))))))));
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                for (short i_25 = 3; i_25 < 12; i_25 += 2) 
                {
                    {
                        var_34 = ((/* implicit */_Bool) var_6);
                        arr_106 [i_25 + 1] [i_25] = ((/* implicit */_Bool) (+((+(((/* implicit */int) ((3032748543U) > (((/* implicit */unsigned int) var_8)))))))));
                    }
                } 
            } 
            arr_107 [i_22] [i_22] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)81))));
            arr_108 [i_22] [i_22] = max((max((((/* implicit */long long int) max((-1994306620), (((/* implicit */int) (signed char)77))))), (((((/* implicit */_Bool) 6963844499560768543ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)13))) : (6072247663757287711LL))))), (((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) + (((((/* implicit */long long int) (-2147483647 - 1))) % (var_9))))));
        }
        for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 4) 
        {
            arr_113 [i_22] [i_22] = ((/* implicit */unsigned int) arr_83 [i_26] [i_26] [i_26] [i_26] [i_22]);
            arr_114 [i_22] [i_26] [i_26] = min((((/* implicit */short) (signed char)119)), (max((((/* implicit */short) var_11)), (max((arr_105 [i_22]), (((/* implicit */short) arr_79 [i_22] [i_22] [4ULL] [i_26] [i_26])))))));
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))))));
            var_36 += ((/* implicit */unsigned char) (-(6165074987085783942LL)));
        }
        arr_115 [i_22] [i_22] = ((/* implicit */unsigned char) max((var_12), (((/* implicit */short) (!(((/* implicit */_Bool) arr_109 [i_22] [i_22])))))));
    }
    var_37 ^= ((/* implicit */unsigned int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) (!(var_10)))), (var_5)))), (max((max((var_9), (-6899542005425115921LL))), (((/* implicit */long long int) var_7))))));
}
