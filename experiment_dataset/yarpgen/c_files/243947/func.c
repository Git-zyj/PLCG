/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243947
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
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)39))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (unsigned short)20879))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (((int) 831508189U))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_9 [i_0] [i_2] [i_2] [i_2 - 1] [i_3])), (((long long int) (unsigned short)44650))));
                    var_15 = ((/* implicit */int) arr_8 [i_2]);
                    arr_12 [i_2] [i_1] = ((/* implicit */unsigned int) arr_6 [i_2] [(short)1] [i_2 + 1]);
                }
                for (int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 10758631367559831953ULL)))) : (((((/* implicit */_Bool) 126679163U)) ? (arr_9 [i_1] [i_2 + 1] [i_2] [i_1] [i_0]) : (113668416U)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_4]))))) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2 - 1])) : (-1343633972))) : (((/* implicit */int) (unsigned short)12447))));
                    var_16 = ((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_10 [i_0] [i_1] [i_2 + 1] [i_4])));
                    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) arr_5 [i_0] [(unsigned char)4] [i_2] [i_0]))))) <= (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_2] [i_1] [i_4])) ? (((((/* implicit */unsigned long long int) 4168288142U)) / (4506864202992541979ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_18 ^= ((/* implicit */unsigned int) ((((long long int) arr_8 [i_0])) > (((/* implicit */long long int) (~(3767978238U))))));
                arr_20 [i_0] [i_1] [i_5] [i_5] = ((unsigned long long int) ((1343633982) & (((/* implicit */int) (unsigned short)56524))));
                var_19 = ((/* implicit */unsigned char) ((signed char) arr_3 [i_5]));
                var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_0] [i_1] [i_5]))) ^ (((unsigned long long int) ((arr_1 [i_1]) ? (((/* implicit */int) (unsigned short)52849)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0])))))));
            }
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_7])) ? (((long long int) arr_26 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) (!(arr_1 [i_6])))))))) ? (363936639) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_7]))));
                arr_30 [i_0] [i_6] [i_7] = ((/* implicit */int) (unsigned short)44650);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_6]))) : (113668416U))) * (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-5474)), ((unsigned short)41661))))))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_8 = 3; i_8 < 8; i_8 += 2) 
            {
                var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -32533945)) ? (3102006686U) : (((/* implicit */unsigned int) 1343633982))))));
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    arr_36 [i_0] [i_8] [i_8] [i_9] = ((unsigned char) ((((((/* implicit */_Bool) 871178111)) ? (arr_27 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_35 [i_0] [i_0] [i_8] [5U] [5U] [i_0])))) / (-1343634008)));
                    var_23 = ((/* implicit */unsigned char) 1408898400U);
                }
                arr_37 [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [(signed char)5] [i_8] [9U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8]))) : ((-(16731526659971682823ULL))))))));
            }
            for (unsigned short i_10 = 2; i_10 < 9; i_10 += 2) /* same iter space */
            {
                arr_42 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((arr_0 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 14859545117996876932ULL))))));
                arr_43 [i_0] [i_0] [i_6] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 871178084)) ? (((/* implicit */int) arr_41 [i_10] [(signed char)1] [i_6] [i_0])) : (((/* implicit */int) ((-1691599299152512367LL) != (((/* implicit */long long int) arr_31 [i_10 - 2] [i_0] [i_0] [1ULL])))))));
            }
            /* vectorizable */
            for (unsigned short i_11 = 2; i_11 < 9; i_11 += 2) /* same iter space */
            {
                arr_46 [i_0] [i_6] = ((/* implicit */int) arr_24 [7U] [i_6] [i_0]);
                var_24 = ((/* implicit */short) 11227446498064715974ULL);
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) arr_4 [i_13] [(unsigned short)9]);
                        var_26 -= ((/* implicit */long long int) arr_1 [i_12]);
                    }
                    arr_52 [i_11] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_11 + 1] [i_11 + 1] [i_0]))));
                    var_27 = ((/* implicit */unsigned char) ((-1854332119) + (((/* implicit */int) arr_15 [i_11 - 2] [i_11] [i_11] [i_12 - 1]))));
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_11 + 1] [i_11 + 1] [i_12])) & (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned char i_14 = 1; i_14 < 8; i_14 += 2) 
                {
                    var_29 -= ((/* implicit */short) (-(((/* implicit */int) arr_13 [i_11 - 2] [i_11] [i_11] [i_11] [i_11] [i_11 - 2]))));
                    arr_56 [i_14] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) arr_49 [i_14 + 2] [i_14] [i_14 + 1] [i_14 + 2] [2] [i_14] [i_14]);
                    arr_57 [i_0] [i_0] [i_14] [i_0] = ((/* implicit */short) arr_19 [i_14] [i_14] [i_14] [i_14 + 2]);
                    arr_58 [i_0] [i_14] [i_6] [i_0] [i_14] [i_14 - 1] = ((/* implicit */long long int) (_Bool)0);
                }
            }
            var_30 |= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_48 [i_0] [i_6] [i_0] [i_6] [i_0] [i_6])))) & (((/* implicit */int) (unsigned short)26345))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                var_31 ^= ((/* implicit */long long int) (((+(4146941343U))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17533)))))));
                var_32 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_15] [i_0] [i_0])) || (((/* implicit */_Bool) arr_21 [i_0] [i_6] [i_6]))));
                arr_62 [i_0] [i_0] = ((/* implicit */_Bool) arr_22 [i_6] [i_0]);
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(((/* implicit */int) arr_39 [i_6] [i_15])))))));
            }
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                arr_65 [i_16] [i_6] [i_0] = ((/* implicit */long long int) ((short) (short)15037));
                arr_66 [i_6] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)56505))));
                arr_67 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_16] [i_6] [i_0])) / (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4603797669750773502ULL)));
            }
            for (long long int i_17 = 1; i_17 < 8; i_17 += 2) 
            {
                arr_72 [i_0] [i_17] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned char) arr_21 [(unsigned short)1] [i_17] [i_17 - 1])))));
                /* LoopSeq 2 */
                for (unsigned char i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) arr_69 [i_17] [i_17 + 1] [i_17]);
                    var_35 = ((/* implicit */signed char) 1343634014);
                }
                for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 1; i_20 < 9; i_20 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned short) max((arr_53 [i_0] [i_6] [i_17] [i_19]), (((/* implicit */unsigned int) arr_81 [i_0] [i_0] [i_0] [i_17] [i_0] [i_0] [i_0]))));
                        arr_83 [i_17] [i_17] [i_19] = min((arr_21 [i_0] [i_6] [(unsigned short)4]), (((/* implicit */unsigned int) (unsigned char)201)));
                        arr_84 [i_0] [i_17] [i_17] [1U] [i_17] = ((/* implicit */short) arr_23 [i_0] [i_6] [(unsigned short)1]);
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
                    }
                    var_38 -= (unsigned char)201;
                }
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_22 = 0; i_22 < 10; i_22 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) ((_Bool) ((_Bool) -1343633972))))));
                        var_40 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_47 [i_0] [i_21] [i_17] [i_17])) + (((/* implicit */int) (unsigned char)192)))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 10; i_23 += 1) 
                    {
                        var_41 *= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_27 [i_23] [i_17] [i_6] [i_0])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) arr_68 [i_0] [i_0] [i_21] [i_21]))))));
                        var_42 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294020364691533151ULL)) ? (((((/* implicit */_Bool) ((arr_86 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (-3360812220915571857LL) : (((/* implicit */long long int) 968460957U))))) ? (((/* implicit */int) arr_95 [i_17] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_63 [i_21] [i_0] [i_17 + 1] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)125)) && (((/* implicit */_Bool) 17216799027211801003ULL)))))));
                        var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_17 - 1] [i_0]))) ^ (17216799027211801019ULL)))) ? (((/* implicit */unsigned long long int) -1343633978)) : (7129584055094548253ULL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_24 = 4; i_24 < 7; i_24 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) arr_39 [i_17 + 1] [i_17 + 1]))));
                        arr_99 [i_6] [i_6] [i_6] [i_6] [i_17] [i_6] = 892814539U;
                    }
                    arr_100 [i_17] [i_6] [(short)5] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_75 [i_0] [i_0] [i_21] [i_21] [i_0] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_6] [i_17] [i_21])))))) : (((unsigned long long int) 1343633978))));
                    var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) -1464719661))));
                }
                var_46 ^= ((/* implicit */signed char) (_Bool)1);
            }
        }
        var_47 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-29))))) ? (arr_8 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-25)) > (arr_19 [i_0] [i_0] [3] [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -660666789))) && (((/* implicit */_Bool) arr_47 [i_0] [i_0] [2ULL] [i_0])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) /* same iter space */
    {
        arr_103 [i_25] [i_25] = ((/* implicit */signed char) ((((unsigned int) arr_101 [i_25])) / (((/* implicit */unsigned int) ((/* implicit */int) arr_102 [i_25])))));
        arr_104 [i_25] [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38956)) ? (2846535985973948209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231)))));
    }
    for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 3) /* same iter space */
    {
        arr_107 [i_26] [i_26] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_106 [i_26]))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((-3360812220915571878LL) == (((/* implicit */long long int) ((/* implicit */int) arr_102 [i_26]))))))) > (((15600208087735603407ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_106 [i_26]))))))))));
        var_48 ^= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((((long long int) (unsigned short)52649)) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    }
    var_49 ^= var_11;
    /* LoopSeq 2 */
    for (short i_27 = 0; i_27 < 11; i_27 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_28 = 2; i_28 < 9; i_28 += 3) 
        {
            var_50 ^= ((/* implicit */unsigned char) (_Bool)1);
            var_51 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_106 [i_27]))) % (arr_109 [i_27]))))) ? ((~(4294020364691533165ULL))) : (((/* implicit */unsigned long long int) 3360812220915571881LL))));
            var_52 ^= ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) (unsigned short)60892)))));
            var_53 ^= ((/* implicit */short) min((arr_110 [i_28 - 2] [i_28 - 1]), ((!(((/* implicit */_Bool) 3360812220915571857LL))))));
        }
        for (signed char i_29 = 0; i_29 < 11; i_29 += 3) 
        {
            var_54 += ((/* implicit */_Bool) arr_109 [i_27]);
            arr_115 [i_29] [i_29] [i_29] = ((/* implicit */unsigned short) arr_111 [i_27] [i_27] [i_29]);
            var_55 = ((/* implicit */unsigned int) max((var_55), (((/* implicit */unsigned int) arr_110 [i_29] [i_27]))));
            var_56 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_105 [i_27] [i_27]), (((/* implicit */unsigned char) (_Bool)1)))))));
        }
        /* vectorizable */
        for (int i_30 = 1; i_30 < 10; i_30 += 2) 
        {
            arr_119 [i_30] = ((/* implicit */unsigned long long int) arr_114 [i_27]);
            var_57 = ((short) 1191219685U);
        }
        arr_120 [i_27] = ((/* implicit */unsigned short) (_Bool)1);
        arr_121 [i_27] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_105 [i_27] [i_27])) && (((/* implicit */_Bool) arr_105 [i_27] [i_27]))))) > (((/* implicit */int) arr_105 [i_27] [i_27]))));
    }
    /* vectorizable */
    for (short i_31 = 0; i_31 < 11; i_31 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_32 = 1; i_32 < 9; i_32 += 2) 
        {
            var_58 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_122 [i_32 + 1] [i_31]))));
            var_59 -= ((/* implicit */unsigned char) (_Bool)1);
            arr_126 [i_32] [i_31] [i_31] = ((/* implicit */signed char) ((short) (unsigned short)4644));
        }
        for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
        {
            arr_131 [i_33] [(signed char)3] = ((/* implicit */_Bool) (+(12861052670162167558ULL)));
            var_60 -= ((/* implicit */long long int) ((short) 1191219676U));
            arr_132 [i_31] |= ((/* implicit */int) (_Bool)1);
        }
        var_61 = ((/* implicit */signed char) min((var_61), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        arr_133 [i_31] = ((/* implicit */unsigned char) (((_Bool)1) ? (-1186817895812908750LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1048948993)) ? (1724147172U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_129 [i_31] [i_31]))))))));
    }
}
