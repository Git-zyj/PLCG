/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195250
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((arr_1 [i_1 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) || (((/* implicit */_Bool) arr_1 [i_1 + 1]))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((1882608433) >= (((/* implicit */int) (unsigned char)0)))) ? (((int) 4499219648745213505ULL)) : (-132349303)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(unsigned short)10] [i_1])) || (((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1]))))), (((long long int) arr_0 [i_1]))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])) : (arr_1 [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 10; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    arr_17 [i_2 + 1] [i_2] = ((/* implicit */int) min((3782589275U), (3782589269U)));
                    var_18 ^= ((/* implicit */unsigned long long int) min((((max((((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2])), (arr_4 [i_2 + 1] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_13 [i_2] [i_2 - 2] [i_2])), (arr_15 [(unsigned short)8] [(unsigned char)10] [(unsigned char)10]))))))), (((/* implicit */long long int) arr_15 [(unsigned char)10] [6ULL] [i_4]))));
                    var_19 &= ((/* implicit */long long int) ((arr_10 [i_2 + 1]) % (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [(short)9])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_0 [i_2])))) <= (((/* implicit */int) ((unsigned short) arr_1 [i_2]))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_25 [i_6] [1] [i_4] [1] [i_2] = ((/* implicit */unsigned long long int) max((((long long int) max((((/* implicit */long long int) arr_21 [i_2] [i_2] [i_4] [i_5] [i_6 + 1] [i_6 + 1])), (arr_11 [i_2] [i_4] [i_6 - 1])))), (max((((/* implicit */long long int) 512378021U)), (-5244538981986169032LL)))));
                                var_20 = ((/* implicit */short) min((min((min((((/* implicit */unsigned long long int) arr_23 [i_2] [i_2] [i_4] [i_4] [9LL] [i_6])), (arr_8 [i_6 + 1] [i_5]))), (((/* implicit */unsigned long long int) min((arr_11 [i_6] [i_4] [i_4]), (((/* implicit */long long int) arr_3 [i_6] [i_6] [i_6]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_13 [i_3] [i_4] [i_6])), (arr_12 [i_5] [i_5] [i_5])))) / (((((/* implicit */_Bool) arr_2 [i_4] [i_5] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_5 - 1] [i_6]))) : (arr_11 [i_6] [i_6] [i_6]))))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1782158133710699857LL)) ? (-1782158133710699869LL) : (((/* implicit */long long int) 3491289803U)))), (((/* implicit */long long int) ((unsigned char) arr_11 [i_6] [i_2 - 2] [i_2 - 2])))))) ? (((/* implicit */int) max(((unsigned char)14), (((/* implicit */unsigned char) ((arr_20 [i_3] [i_4] [i_5] [i_6]) <= (((/* implicit */long long int) 512378019U)))))))) : (((/* implicit */int) ((((arr_23 [i_2 - 2] [10] [i_3] [i_4] [i_5] [10]) & (((/* implicit */long long int) arr_3 [i_2] [i_2] [i_4])))) != (((/* implicit */long long int) min((3782589275U), (512378023U)))))))));
                                var_22 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) <= (-5866060670214609210LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
    {
        arr_28 [i_7] = ((arr_26 [i_7]) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [(unsigned short)7]))) < (arr_26 [i_7]))))));
        var_23 = ((/* implicit */_Bool) arr_26 [i_7]);
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_27 [i_7]))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                {
                    {
                        arr_39 [i_8] [13] [13] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_8] [i_8])) ? (arr_33 [i_9] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_30 [i_8] [i_10]))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)221))) <= (-1782158133710699857LL))))));
                    }
                } 
            } 
        } 
        var_25 -= ((((/* implicit */_Bool) (short)4369)) || (((/* implicit */_Bool) -5244538981986169040LL)));
        /* LoopSeq 2 */
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            arr_43 [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) ((unsigned int) arr_31 [(_Bool)1] [i_12]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)91))) : (arr_33 [i_8] [i_8]));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned short i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    for (unsigned short i_15 = 2; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_26 -= ((/* implicit */signed char) ((-5244538981986169046LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)155)))));
                            var_27 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_40 [i_15]) != (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_14]))))))) <= (arr_26 [i_14 + 1])));
                            var_28 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_12] [i_12])) ? (((/* implicit */long long int) arr_38 [i_14] [i_14 - 2] [i_13] [i_12] [i_12])) : (((long long int) arr_50 [i_8] [i_8] [i_8] [i_8] [(unsigned short)10] [i_8]))));
                        }
                    } 
                } 
            } 
            arr_54 [i_8] [i_8] &= ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_8] [i_8] [14U] [i_8] [i_12] [i_12]))) == (arr_34 [i_12]))));
        }
        for (unsigned int i_16 = 1; i_16 < 14; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                for (unsigned char i_18 = 2; i_18 < 16; i_18 += 2) 
                {
                    {
                        arr_64 [(unsigned short)12] [i_16] [i_18] = ((/* implicit */long long int) ((arr_38 [i_8] [i_16] [i_17] [i_8] [i_8]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [(_Bool)1] [i_18] [i_17] [i_17] [i_8] [i_8])))));
                        var_29 += ((/* implicit */unsigned int) ((unsigned char) 512378013U));
                        arr_65 [13LL] [i_16] [i_16] [2U] [i_18 - 1] = ((/* implicit */unsigned int) arr_52 [(short)12] [i_18] [(short)12] [i_17] [(short)12] [(short)12] [i_8]);
                        arr_66 [2LL] [i_16] [i_18] [i_18] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8] [i_8] [i_17] [(unsigned short)6]))) / (((((/* implicit */_Bool) arr_40 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_8] [0LL] [i_8] [i_17] [i_18] [i_16]))) : (arr_38 [i_8] [i_16] [i_17] [(signed char)8] [(_Bool)1])))));
                    }
                } 
            } 
            arr_67 [i_8] &= ((/* implicit */int) ((((((/* implicit */unsigned int) arr_42 [i_8] [i_16])) / (arr_26 [i_8]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_16])))));
            var_30 -= ((/* implicit */short) ((unsigned short) 7703730397976127241LL));
        }
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_59 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8] [i_8]))) : (arr_59 [i_8] [i_8] [i_8] [i_8]))))));
    }
    for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_20 = 0; i_20 < 18; i_20 += 2) 
        {
            for (unsigned short i_21 = 0; i_21 < 18; i_21 += 2) 
            {
                for (long long int i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    {
                        arr_79 [i_19] [i_20] [(signed char)6] [i_20] = ((/* implicit */long long int) arr_45 [i_21] [i_22]);
                        arr_80 [i_20] [i_20] [(signed char)5] [i_20] [i_20] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) || (((/* implicit */_Bool) 2403204201U))));
                        arr_81 [i_20] [i_22] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (-1782158133710699847LL)));
                    }
                } 
            } 
        } 
        arr_82 [i_19] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_61 [i_19] [i_19])), (arr_71 [i_19] [i_19] [i_19]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_68 [(signed char)17] [(signed char)17]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_19] [(short)12]))) < (arr_76 [i_19] [i_19]))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)15))) : (-5244538981986169032LL))))))));
    }
    /* LoopSeq 2 */
    for (int i_23 = 3; i_23 < 14; i_23 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_24 = 2; i_24 < 13; i_24 += 2) 
        {
            for (int i_25 = 2; i_25 < 12; i_25 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 2; i_26 < 14; i_26 += 2) 
                    {
                        for (unsigned int i_27 = 1; i_27 < 13; i_27 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */int) arr_53 [i_23 - 2] [i_23] [i_24] [i_24] [i_23 - 2] [i_27 + 2])) == (min((((/* implicit */int) arr_88 [i_23 - 1] [i_23 - 2] [i_25 - 1])), (arr_78 [i_24 - 1] [i_24 + 2]))))))));
                                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)3)), ((short)-20032)))), (min((5244538981986169032LL), (((/* implicit */long long int) arr_88 [i_23] [11ULL] [i_27])))))))));
                                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((arr_34 [i_23]) >= (((/* implicit */long long int) ((/* implicit */int) (short)4831)))))), (max((arr_94 [i_25] [i_25] [i_25] [i_26 - 1] [i_27]), (arr_41 [i_23] [(unsigned char)14]))))))) % (min((((arr_76 [i_23] [i_23]) >> (((/* implicit */int) arr_56 [i_24] [i_23])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_27] [i_27 - 1] [i_27] [i_27])) ? (arr_95 [7LL] [i_24] [(unsigned char)2] [i_26] [i_27]) : (arr_90 [i_27 + 2] [i_24]))))))));
                                arr_97 [i_27] [i_27] [i_26] [i_25] [i_24] [i_23] = ((/* implicit */unsigned char) ((-8572706498866032115LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)3832)))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((signed char) arr_59 [i_23] [i_23] [i_24] [i_25]))))) % (min((8572706498866032116LL), (((/* implicit */long long int) (unsigned char)74))))));
                }
            } 
        } 
        var_36 *= ((/* implicit */unsigned short) ((((5671829932666957758LL) >> (((((/* implicit */int) (unsigned char)228)) - (189))))) <= (((/* implicit */long long int) ((/* implicit */int) max((max((arr_53 [(unsigned char)4] [i_23 - 2] [i_23] [i_23] [i_23] [i_23]), (arr_35 [i_23] [i_23]))), (((6553353106857511363LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)69)))))))))));
    }
    for (signed char i_28 = 0; i_28 < 10; i_28 += 2) 
    {
        arr_100 [i_28] [i_28] = ((/* implicit */long long int) arr_78 [i_28] [(unsigned short)12]);
        /* LoopNest 3 */
        for (short i_29 = 0; i_29 < 10; i_29 += 2) 
        {
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                for (unsigned char i_31 = 0; i_31 < 10; i_31 += 2) 
                {
                    {
                        arr_111 [i_28] [i_28] [i_28] [i_28] [i_28] [1] = max((min((((/* implicit */unsigned int) (unsigned char)169)), (512378021U))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_63 [i_28] [i_29] [i_29] [i_30] [3LL] [i_31])) ? (((/* implicit */int) arr_7 [i_28])) : (((/* implicit */int) arr_73 [i_30] [i_31])))), (((((/* implicit */_Bool) arr_14 [i_28] [i_30])) ? (((/* implicit */int) arr_32 [i_30] [i_29] [i_28])) : (((/* implicit */int) arr_85 [i_30]))))))));
                        var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) min((-6242607974025595942LL), (7040260123690805326LL))))));
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) max((((((/* implicit */_Bool) arr_21 [i_28] [6] [i_30] [i_31] [i_30] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_88 [i_29] [i_29] [i_29]))) : (arr_24 [i_28] [i_28] [i_30] [i_28] [i_28]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_49 [i_28] [i_30] [17U] [i_30] [i_31])) - (((/* implicit */int) arr_0 [i_31]))))) ? (((((/* implicit */_Bool) arr_99 [i_31] [i_31])) ? (arr_60 [i_28] [12LL] [i_28] [9]) : (((/* implicit */long long int) ((/* implicit */int) arr_89 [0] [i_30]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_103 [i_29] [i_30] [0])) ? (((/* implicit */int) arr_72 [i_30])) : (((/* implicit */int) arr_104 [i_28] [i_29] [i_31])))))))))))));
                        arr_112 [i_28] [i_31] [i_29] [i_30] |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [(unsigned short)11] [i_30])) ? (arr_38 [i_29] [i_29] [i_30] [i_29] [i_29]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_29])))))), (arr_107 [i_31] [i_30] [(unsigned char)8] [(unsigned char)8])))) ? (((/* implicit */int) min((arr_49 [i_28] [i_28] [i_29] [i_30] [i_31]), (arr_49 [i_28] [i_29] [i_29] [i_30] [i_31])))) : (((/* implicit */int) ((signed char) (short)20032)))));
                    }
                } 
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) (short)-4832)), (5244538981986169036LL))), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (var_17))))));
}
