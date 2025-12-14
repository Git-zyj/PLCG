/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226216
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (unsigned short)31467);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_12 [i_1] [i_1] [(unsigned short)3] [(unsigned short)3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_15)) ? (arr_11 [9U] [i_2] [(unsigned short)7]) : (((/* implicit */int) (unsigned short)31457)))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2] [2U] [i_3])) ? (((/* implicit */int) (short)8911)) : (((/* implicit */int) (unsigned short)31470)))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_3] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31488)))))))))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) var_5)) : (var_17))) / (arr_11 [i_0] [i_1] [i_2]))))));
                            var_22 = var_14;
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)34066)) : (((/* implicit */int) arr_5 [i_0]))))))) ^ (((arr_4 [i_0]) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31450)) | (((/* implicit */int) arr_3 [i_1] [i_0]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_6 [i_1] [(signed char)3] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 14; i_6 += 3) 
            {
                {
                    arr_20 [i_4] [(short)0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4])))) < (((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4]))))));
                    arr_21 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (var_3) : (arr_15 [i_5] [(unsigned short)9])))) ? (((/* implicit */int) arr_14 [i_6])) : (((-1056216739) % (953804154))))))));
                    var_24 = ((/* implicit */unsigned long long int) arr_18 [i_6]);
                }
            } 
        } 
        arr_22 [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (short)-19327)) == (((/* implicit */int) arr_18 [3]))));
        arr_23 [i_4] = ((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4]);
        var_25 = ((/* implicit */_Bool) min(((unsigned short)31463), (((/* implicit */unsigned short) (signed char)29))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_31 [i_4] [4] [i_8] [i_9] = var_19;
                        arr_32 [i_4] [i_4] [i_4] [i_8] [i_9] = ((/* implicit */unsigned int) -1337616312);
                        var_26 -= ((/* implicit */_Bool) arr_14 [i_9]);
                    }
                } 
            } 
        } 
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 2) 
    {
        var_27 = ((/* implicit */unsigned int) arr_19 [i_10] [i_10] [i_10] [i_10]);
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) % (((/* implicit */int) (unsigned short)15223))))) ? (((((/* implicit */_Bool) 524160)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10] [(signed char)5]))) : (3325259970210091977ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19308)))));
        var_29 = min((3325259970210091983ULL), (3325259970210091999ULL));
        /* LoopSeq 4 */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned short)34041)) >> (((-1492967053) + (1492967077))))), (var_4)));
            /* LoopSeq 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_40 [i_10] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_10] [i_12])) * (((((/* implicit */int) arr_37 [i_12])) | (((/* implicit */int) arr_37 [i_10]))))));
                var_31 = ((/* implicit */signed char) ((((((/* implicit */int) arr_25 [10ULL] [10ULL] [i_12])) / (arr_1 [i_12] [i_10]))) == (((/* implicit */int) arr_25 [i_10] [i_11] [i_12]))));
            }
            for (signed char i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) var_10);
                arr_43 [i_10] [9ULL] [i_11] [i_13] = ((/* implicit */unsigned short) var_9);
            }
            for (signed char i_14 = 0; i_14 < 12; i_14 += 3) /* same iter space */
            {
                arr_47 [i_14] [i_11] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_44 [i_10] [i_10] [i_11] [i_14])), (148622838)));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_11] [i_14])) ? (((/* implicit */int) arr_29 [i_14] [i_10] [i_14] [i_10])) : (((/* implicit */int) ((18U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_11] [i_14]))))))))))));
            }
            var_34 *= ((/* implicit */signed char) (~(((/* implicit */int) ((arr_7 [i_10] [i_10] [i_11]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7]))))))));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 12; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            arr_57 [(signed char)8] [i_11] [5] [i_16] [(signed char)6] = ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 266799191U)) ? (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */int) var_6)) : (var_3))) : (arr_11 [i_11] [(unsigned short)7] [i_17]))))));
                            arr_58 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_15])) <= (((/* implicit */int) (!(((/* implicit */_Bool) 15121484103499459643ULL)))))));
                            var_35 = ((/* implicit */int) max((var_35), (((((/* implicit */_Bool) max((705701076U), (((/* implicit */unsigned int) arr_33 [i_10] [i_11]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_33 [9ULL] [i_16])) >= (((/* implicit */int) arr_33 [i_17] [i_16]))))) : (((/* implicit */int) ((((/* implicit */int) arr_33 [i_10] [i_16])) >= (((/* implicit */int) arr_33 [i_17] [i_11])))))))));
                            arr_59 [0U] [i_11] [i_16] [i_17] = var_2;
                            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_10]) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_27 [i_11] [i_15] [i_17])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_10] [i_17])) ? (var_3) : (((/* implicit */int) var_7))))) ? (arr_1 [i_11] [i_11]) : (((/* implicit */int) ((((/* implicit */_Bool) 1787313839)) || (((/* implicit */_Bool) arr_24 [i_15] [i_16] [i_17]))))))))));
                        }
                        var_37 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_11]))) < (arr_53 [i_10] [2] [i_15] [i_16]))));
                        var_38 = ((/* implicit */int) (short)-1567);
                    }
                } 
            } 
        }
        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            arr_62 [i_10] [i_10] [2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))) + (3589266190U)));
            arr_63 [i_10] [i_18] [i_10] = ((/* implicit */int) arr_51 [i_18] [i_10]);
            arr_64 [i_10] [i_18] = ((/* implicit */int) 15121484103499459634ULL);
            arr_65 [i_10] [i_18] [i_18] = ((/* implicit */unsigned int) 1763147655);
        }
        for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
        {
            arr_68 [i_10] [i_10] [i_19] = ((var_9) != (((/* implicit */unsigned int) var_0)));
            arr_69 [i_10] [i_19] = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_19 [i_10] [i_10] [i_10] [i_10])) * (((/* implicit */int) (unsigned short)8465)))) == (((((/* implicit */_Bool) (unsigned short)34087)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 36074231)) ? (((/* implicit */int) arr_44 [i_10] [i_10] [7ULL] [i_19])) : (((/* implicit */int) arr_48 [i_10]))))))));
            var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_10] [i_19] [i_10] [i_10] [(short)5] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-114)) <= (((/* implicit */int) arr_26 [i_10] [i_10])))))) : (8062030616080174285ULL)));
            arr_70 [i_10] = (~(((((/* implicit */_Bool) arr_0 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10] [i_19] [i_10] [i_10]))) : (((unsigned int) 15U)))));
        }
        for (unsigned int i_20 = 0; i_20 < 12; i_20 += 1) 
        {
            var_40 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_10] [i_10] [i_20]))) : (var_9))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) | (15121484103499459647ULL)))) ? (var_12) : (((var_12) ^ (((/* implicit */unsigned long long int) arr_72 [i_20])))))));
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 12; i_21 += 2) 
            {
                for (unsigned short i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    for (unsigned short i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        {
                            arr_82 [i_10] [i_20] [i_10] [i_10] [8] [i_10] |= ((((((/* implicit */_Bool) arr_14 [i_21])) ? (((((/* implicit */_Bool) arr_45 [i_22] [7U])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_22]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))));
                            arr_83 [i_22] [i_20] [i_10] [i_20] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27746)) - (((/* implicit */int) arr_77 [i_23] [i_23] [i_22] [i_21] [i_20] [i_10]))))) ? (((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) -1))))) : (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) arr_50 [4U] [i_20] [i_21] [i_22])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_10] [i_20] [i_20])) ? (((/* implicit */int) var_18)) : (var_2)))) : (((10025275053944173387ULL) | (arr_79 [i_10] [i_20] [1ULL] [1ULL] [i_23])))))));
                            var_41 = var_12;
                            arr_84 [i_20] = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31465)) || (((/* implicit */_Bool) 1772791777U))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_29 [i_10] [i_10] [(signed char)2] [i_22]))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_24 = 0; i_24 < 12; i_24 += 1) 
            {
                for (short i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    for (int i_26 = 0; i_26 < 12; i_26 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */signed char) ((((arr_89 [i_10] [i_20] [i_24] [i_24]) < (arr_89 [i_26] [i_25] [i_24] [i_20]))) && (((var_15) == (((/* implicit */unsigned int) arr_89 [i_10] [i_24] [i_25] [i_26]))))));
                            arr_92 [i_10] [i_20] [i_10] [i_20] [i_26] = ((/* implicit */int) arr_19 [i_10] [i_20] [i_24] [i_26]);
                        }
                    } 
                } 
            } 
        }
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_8 [i_10] [i_10] [i_10] [(signed char)6] [i_10] [i_10]))));
    }
    for (unsigned short i_27 = 0; i_27 < 21; i_27 += 2) 
    {
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_93 [i_27])) ? (-1513656006) : (((/* implicit */int) arr_95 [i_27]))))) : (((/* implicit */unsigned long long int) min(((~(1763147645))), (((/* implicit */int) (_Bool)1)))))));
        arr_96 [i_27] = ((max((((/* implicit */unsigned int) (short)-1554)), (((((/* implicit */_Bool) arr_95 [i_27])) ? (33554431U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) % (((/* implicit */unsigned int) (~(var_17)))));
    }
    for (unsigned int i_28 = 0; i_28 < 10; i_28 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 10; i_29 += 4) 
        {
            for (int i_30 = 0; i_30 < 10; i_30 += 4) 
            {
                {
                    arr_104 [i_30] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1567)) * (((var_17) / (((/* implicit */int) arr_17 [i_28] [i_29] [i_30]))))));
                    var_45 = ((/* implicit */int) arr_53 [i_28] [i_29] [i_30] [(unsigned short)11]);
                }
            } 
        } 
        arr_105 [i_28] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_29 [i_28] [i_28] [(signed char)12] [i_28]) || (((/* implicit */_Bool) -1763147660)))))))) ? (((/* implicit */int) (unsigned short)34071)) : (((/* implicit */int) (unsigned short)48688))));
        arr_106 [i_28] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_16 [5] [5ULL] [5ULL]) >> (((3388002166U) - (3388002142U))))))) ? (arr_99 [i_28]) : (((/* implicit */int) ((signed char) var_4)))));
    }
    var_46 = ((/* implicit */int) var_6);
    var_47 = ((/* implicit */signed char) (unsigned short)31438);
    var_48 = ((/* implicit */short) var_3);
}
