/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39632
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
    var_12 |= ((/* implicit */unsigned short) (~(7093070255204400545ULL)));
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (7093070255204400565ULL) : (11353673818505151070ULL)));
    var_14 += ((/* implicit */unsigned short) var_5);
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (+((-(11353673818505151071ULL))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 |= ((/* implicit */unsigned short) 18446744073709551597ULL);
                    var_17 &= ((/* implicit */_Bool) (~(arr_6 [i_0] [i_1] [i_0] [i_2])));
                    var_18 ^= ((/* implicit */unsigned long long int) -1861279775);
                    var_19 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16674804250098366652ULL)) ? (var_1) : (1756211625)))) ? (((/* implicit */int) ((unsigned short) 11353673818505151073ULL))) : (((/* implicit */int) ((19ULL) != (((/* implicit */unsigned long long int) 1460802248U))))));
                    arr_9 [i_0] = var_5;
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_20 &= ((/* implicit */unsigned long long int) var_11);
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                {
                    var_21 += ((/* implicit */_Bool) (+(var_10)));
                    arr_18 [i_0] [i_3] [i_0] [18U] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_6)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_11)) % (18446744073709551597ULL)));
                    var_23 = ((/* implicit */int) min((var_23), ((~(((/* implicit */int) arr_5 [i_4]))))));
                    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_4] [(unsigned short)20] [i_3] [i_4] [i_4]))));
                }
            }
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_7] [i_6])) ? (((/* implicit */unsigned long long int) var_1)) : (var_3)))) ? (var_9) : (arr_11 [i_8 - 1]))))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((unsigned int) 19ULL)))));
                            var_27 ^= ((_Bool) ((((/* implicit */int) arr_1 [i_7])) << (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [(unsigned short)0]))));
                            arr_26 [i_0] [i_8 + 1] [i_8 + 1] [i_7] [8ULL] [i_0] [i_0] |= ((/* implicit */_Bool) ((var_11) << (((var_7) - (11690827707444019049ULL)))));
                            arr_27 [i_3] [i_0] = ((/* implicit */_Bool) (-(arr_3 [i_3] [i_6 - 1] [i_8 + 1])));
                        }
                    } 
                } 
                var_28 = ((((/* implicit */int) arr_1 [i_6 - 1])) | (((/* implicit */int) ((unsigned short) 11353673818505151071ULL))));
            }
            for (unsigned short i_9 = 1; i_9 < 20; i_9 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (int i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        {
                            arr_36 [i_9] [i_10] [i_11] [i_3] [i_11] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_5 [i_10]))));
                            var_29 |= arr_4 [i_10];
                        }
                    } 
                } 
                arr_37 [i_9] [(unsigned short)18] [(unsigned short)18] [i_0] &= ((/* implicit */_Bool) var_7);
            }
            arr_38 [16U] |= ((/* implicit */unsigned int) ((unsigned long long int) arr_20 [i_0] [20U]));
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) 14059025721393508468ULL))));
        }
        for (int i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((arr_29 [i_12] [i_12] [i_12]) << (((((var_3) % (var_5))) - (1209832398743227244ULL))))))));
            var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_32 [i_12])) ? (1374915520U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_12] [i_0])))))));
            var_33 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_3 [i_12] [i_12] [i_0])) ? (((/* implicit */unsigned long long int) arr_34 [i_12] [i_12] [i_12] [i_0] [i_0])) : (18446744073709551597ULL)))));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_12])))))));
        }
        for (int i_13 = 3; i_13 < 19; i_13 += 2) /* same iter space */
        {
            arr_45 [i_0] [16] |= ((/* implicit */unsigned short) (+(arr_11 [i_13])));
            arr_46 [i_0] = ((/* implicit */unsigned int) ((arr_40 [i_13 - 2] [i_13] [i_0]) | (18446744073709551597ULL)));
        }
        for (int i_14 = 3; i_14 < 19; i_14 += 2) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) 19ULL))));
            /* LoopSeq 2 */
            for (int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 14059025721393508465ULL)) ? (((/* implicit */unsigned long long int) 1374915503U)) : (arr_50 [i_15] [i_14 - 3] [i_14 - 2] [i_0])));
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((unsigned short) arr_11 [i_15])))));
            }
            for (unsigned long long int i_16 = 1; i_16 < 17; i_16 += 3) 
            {
                /* LoopSeq 4 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 -= ((((/* implicit */_Bool) 1374915503U)) ? (((/* implicit */unsigned int) 1882398037)) : (2084590900U));
                    var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [i_16 + 1] [i_17]))) - (var_11)));
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_16 + 3] [i_16 + 4] [i_14] [i_14] [i_14 - 3]))) : (arr_40 [i_17] [i_16 + 2] [i_14 - 3])))));
                }
                for (unsigned short i_18 = 0; i_18 < 21; i_18 += 2) /* same iter space */
                {
                    var_41 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_20 [i_14] [i_18])) ? (((/* implicit */unsigned long long int) var_0)) : (11353673818505151087ULL)))));
                    var_42 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) != (((17ULL) | (4387718352316043147ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) arr_21 [i_16 + 2] [i_16 + 2] [i_16 + 1]))));
                        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) arr_57 [i_19] [i_19]))));
                        var_45 = ((/* implicit */int) ((arr_3 [i_16 + 4] [i_14 - 2] [i_14 + 1]) << (((arr_3 [i_16 - 1] [i_14 - 3] [i_14 - 3]) - (216071949U)))));
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((((var_11) >= (4294967295U))) ? (var_6) : (((/* implicit */int) arr_23 [i_19] [i_19] [i_19] [i_19] [i_18] [i_19])))))));
                        var_47 += ((/* implicit */_Bool) var_3);
                    }
                    for (unsigned short i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_48 ^= var_4;
                        var_49 -= ((/* implicit */int) 18446744073709551597ULL);
                    }
                }
                for (unsigned short i_21 = 0; i_21 < 21; i_21 += 2) /* same iter space */
                {
                    var_50 = ((/* implicit */int) max((var_50), (var_6)));
                    /* LoopSeq 1 */
                    for (unsigned short i_22 = 4; i_22 < 20; i_22 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_21])))))));
                        var_52 ^= ((/* implicit */unsigned short) 2920051823U);
                        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) ((((2920051796U) | (var_0))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_21]))))))));
                    }
                    var_54 &= var_9;
                    var_55 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_0] [i_14] [i_16 + 2] [i_14 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_16 - 1]))) : (18446744073709551606ULL)));
                }
                for (unsigned long long int i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    var_56 &= ((((/* implicit */unsigned int) -331845089)) | (1374915487U));
                    var_57 &= ((/* implicit */int) (((-(17416968192467081131ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35683)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_24 = 0; i_24 < 21; i_24 += 2) 
                    {
                        var_58 = ((/* implicit */unsigned long long int) min((var_58), (17451448556060672ULL)));
                        var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_24])) | (((/* implicit */int) arr_13 [i_14 - 3] [i_16 + 1] [i_23] [i_24])))))));
                    }
                }
                var_60 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2920051776U)) ? (var_7) : (((/* implicit */unsigned long long int) var_6)))) * (((/* implicit */unsigned long long int) arr_30 [i_14] [i_0]))));
            }
        }
    }
    /* vectorizable */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        var_61 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_25] [i_25] [i_25] [i_25] [(_Bool)1] [i_25]))) >= (17451448556060676ULL)))) | (((/* implicit */int) arr_23 [i_25] [12ULL] [i_25] [i_25] [12ULL] [i_25]))));
        var_62 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_52 [i_25] [i_25] [i_25])) ^ (arr_61 [i_25] [i_25] [16] [i_25] [i_25] [i_25])))) ? (((7093070255204400526ULL) | (arr_55 [i_25] [i_25] [i_25] [i_25]))) : (arr_47 [i_25] [i_25] [i_25])));
        /* LoopSeq 1 */
        for (unsigned long long int i_26 = 1; i_26 < 19; i_26 += 4) 
        {
            var_63 = ((/* implicit */unsigned long long int) max((var_63), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [12U] [i_26]))))))))));
            var_64 ^= ((/* implicit */unsigned short) 1374915532U);
            /* LoopNest 2 */
            for (unsigned short i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                for (unsigned long long int i_28 = 2; i_28 < 19; i_28 += 4) 
                {
                    {
                        var_65 ^= ((/* implicit */unsigned int) ((_Bool) var_11));
                        var_66 &= (!(((/* implicit */_Bool) var_7)));
                        /* LoopSeq 2 */
                        for (unsigned short i_29 = 0; i_29 < 21; i_29 += 2) 
                        {
                            arr_87 [i_26] [i_27] [i_26] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_28] [5ULL] [i_27])) ? (11353673818505151095ULL) : (11353673818505151087ULL)))));
                            var_67 = ((/* implicit */_Bool) max((var_67), (arr_44 [i_25] [i_29])));
                            var_68 += ((/* implicit */unsigned short) var_6);
                            arr_88 [i_25] [i_29] [i_29] [i_28] [i_29] [i_29] [i_29] |= ((/* implicit */int) ((12445545017477079460ULL) % (arr_50 [i_29] [i_26 + 1] [i_26 + 2] [i_26])));
                        }
                        for (unsigned long long int i_30 = 3; i_30 < 20; i_30 += 2) 
                        {
                            var_69 = ((/* implicit */unsigned short) min((var_69), (((/* implicit */unsigned short) var_6))));
                            arr_91 [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_3 [i_28 + 1] [i_27] [i_25])) % (18446744073709551615ULL)));
                        }
                    }
                } 
            } 
        }
        var_70 |= (_Bool)1;
    }
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
    {
        var_71 ^= (((-(arr_53 [18U] [(_Bool)0] [i_31] [18U]))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_14 [i_31] [(unsigned short)0] [i_31])))));
        var_72 = ((/* implicit */unsigned short) max((var_72), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) ((11353673818505151089ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29852))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [(_Bool)0] [i_31]))))) : (max((((/* implicit */unsigned long long int) arr_16 [i_31] [i_31] [i_31] [i_31])), (((19ULL) * (7093070255204400528ULL))))))))));
        var_73 += ((/* implicit */_Bool) ((min(((+(((/* implicit */int) arr_82 [i_31] [i_31] [i_31])))), (((/* implicit */int) var_8)))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29836)) ? (((/* implicit */unsigned int) 8384512)) : (arr_25 [6])))) ? (((var_4) ? (var_10) : (((/* implicit */int) var_4)))) : (max((var_9), (var_1))))) - (2033694994)))));
    }
}
