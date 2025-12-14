/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24274
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_18 = 1395530915U;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */unsigned long long int) (((~(((((/* implicit */int) var_5)) >> (((2899436371U) - (2899436365U))))))) | (((((/* implicit */int) var_10)) >> (((arr_4 [i_2 + 3] [9LL] [9LL]) - (13713909258089593532ULL)))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_4 [i_2 - 1] [i_2] [i_2]))) ^ (arr_7 [i_2 - 1] [i_2] [i_2 + 1])));
                    var_21 = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        var_22 += ((/* implicit */unsigned short) var_17);
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_0 [i_5 + 1]))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_7 = 4; i_7 < 8; i_7 += 3) 
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_5] = (+(arr_4 [i_5 + 2] [i_7 + 1] [i_7]));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_10))));
                        var_25 = ((/* implicit */unsigned short) ((long long int) arr_17 [i_4] [i_5 + 1] [i_4] [i_7 - 2] [i_7] [(unsigned char)7]));
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5 - 1] [5LL] [i_5]))));
                    }
                    for (int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        arr_24 [i_5] [i_4] [(unsigned char)5] [i_5] [i_4] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_3] [i_4] [i_8 - 2]))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_8))));
                        arr_25 [i_3] [i_5] [4U] [i_8] = ((/* implicit */unsigned char) ((arr_20 [i_5 + 2] [1] [i_8 - 2] [i_8 - 1]) <= (arr_20 [i_8] [i_8 - 2] [i_8] [i_8 - 1])));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_29 [i_5] [i_4] [i_5 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) / (((1395530915U) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_28 ^= ((/* implicit */int) (+(arr_13 [i_9] [i_5] [i_4])));
                        var_29 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (1395530906U) : (2899436380U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_3] [i_5] [i_3] [i_5 + 1] [i_9])))));
                        arr_30 [i_5] [i_9] [3] [3] [i_9] [3] = ((/* implicit */long long int) ((unsigned short) arr_17 [i_5 - 1] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [10U]));
                    }
                    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((arr_22 [i_5 + 1]) << (((((var_11) >> (((((/* implicit */int) var_8)) - (187))))) - (427295887104ULL)))));
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) arr_28 [i_5 - 1] [i_5 - 1] [i_5] [i_5]));
                    }
                    arr_35 [i_3] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_5 - 1]))));
                }
            } 
        } 
        var_32 = (!(((/* implicit */_Bool) arr_31 [(unsigned char)2] [i_3] [i_3] [i_3] [i_3])));
    }
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_38 [i_11]))));
        /* LoopSeq 2 */
        for (int i_12 = 3; i_12 < 20; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (int i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        {
                            arr_51 [i_12] [i_11] [(signed char)1] [i_14 + 2] [i_15] [i_12] = ((/* implicit */unsigned char) 1395530909U);
                            var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) ((arr_50 [i_15] [i_14] [i_15] [i_13] [i_15] [i_12] [i_11]) - (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_48 [i_12] [i_12]) : (((/* implicit */int) var_4))))) - (min((((/* implicit */unsigned long long int) var_12)), (var_14))))))))));
                            var_34 = ((/* implicit */_Bool) arr_47 [i_12 - 1] [i_12]);
                            arr_52 [i_15] [i_14] [i_13] [i_12] [i_15] |= ((max((((/* implicit */unsigned long long int) 1395530895U)), (arr_50 [i_15] [i_15] [i_15] [i_14 + 2] [i_15] [i_14] [i_13]))) == ((-(arr_50 [i_14] [i_14] [i_15] [i_14] [i_15] [i_14] [i_12]))));
                            arr_53 [i_12] = ((/* implicit */unsigned short) (((~(arr_48 [i_12 + 4] [i_12 + 1]))) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 2899436379U)) & (var_0)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_16 = 1; i_16 < 23; i_16 += 4) 
            {
                for (long long int i_17 = 2; i_17 < 21; i_17 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) min((arr_41 [i_12 + 4]), ((+(((/* implicit */int) arr_38 [i_16 - 1]))))));
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) var_15))) + (arr_46 [i_11] [i_17] [i_12] [i_17] [i_17 + 3] [i_12 + 4])));
                        arr_60 [i_12] [i_12] [i_16 + 1] [i_12] = ((/* implicit */unsigned char) max((((2899436381U) / (2899436391U))), (1395530916U)));
                    }
                } 
            } 
            arr_61 [i_12] [i_12] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? ((+(var_14))) : (((/* implicit */unsigned long long int) arr_47 [i_12] [i_12]))))));
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_12 + 4] [i_12 - 1] [i_12 - 1] [i_12] [i_12 + 4] [i_12 - 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12 + 3] [i_12 - 3] [i_12 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2899436384U))))) : (((/* implicit */int) arr_40 [i_12 + 4] [i_12 - 3] [i_12 + 3])))))));
        }
        for (unsigned int i_18 = 0; i_18 < 24; i_18 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        {
                            arr_71 [i_18] [i_20] [i_18] [i_18] = ((/* implicit */int) ((long long int) (-(var_13))));
                            arr_72 [i_11] [i_18] [15ULL] [i_20] [i_18] = ((/* implicit */unsigned long long int) var_15);
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((unsigned char) arr_56 [(unsigned char)2]))))))));
            }
            for (unsigned short i_22 = 2; i_22 < 23; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 1) 
                {
                    for (unsigned long long int i_24 = 3; i_24 < 23; i_24 += 1) 
                    {
                        {
                            arr_82 [11LL] [10] [i_18] [i_18] [i_11] = ((/* implicit */_Bool) (~(2899436386U)));
                            var_39 = ((/* implicit */unsigned short) var_13);
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) var_8))));
                            arr_83 [i_23] [i_18] = ((/* implicit */int) var_9);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_25 = 1; i_25 < 22; i_25 += 4) 
                {
                    for (int i_26 = 1; i_26 < 23; i_26 += 3) 
                    {
                        {
                            var_41 ^= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_77 [i_22 + 1] [i_22 + 1] [i_25 + 1] [i_25 + 1])) && (((/* implicit */_Bool) var_12)))))));
                            var_42 += ((/* implicit */unsigned char) (~(arr_68 [i_26 - 1] [8ULL] [i_25 - 1] [22])));
                        }
                    } 
                } 
                arr_89 [i_18] [i_18] = ((/* implicit */int) ((1395530903U) != (1395530918U)));
                /* LoopSeq 1 */
                for (unsigned int i_27 = 3; i_27 < 20; i_27 += 3) 
                {
                    var_43 = var_3;
                    arr_92 [i_27] [i_18] [i_18] [i_27] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2899436384U))));
                }
                /* LoopNest 2 */
                for (unsigned int i_28 = 1; i_28 < 23; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 24; i_29 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned char) arr_65 [i_11] [i_11] [i_11] [i_18]);
                            var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_29] [i_28 - 1] [i_11] [i_11]))) ^ (1395530893U)))))) ? ((+(((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_18] [i_18] [i_22]))))))) : ((((-(var_11))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10)))))))));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 2899436381U)) + (((var_14) + (((/* implicit */unsigned long long int) 2899436391U))))));
                            var_47 = ((/* implicit */unsigned short) arr_68 [i_11] [i_18] [8] [i_22]);
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1395530914U)) ? (1395530906U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_93 [i_18]))))) != (1395530943U)))))));
            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_55 [i_18])), (1395530888U))))));
        }
        var_50 = ((/* implicit */unsigned char) ((max((arr_57 [i_11] [12ULL] [i_11] [i_11] [i_11]), (((/* implicit */int) arr_40 [i_11] [i_11] [i_11])))) & (((/* implicit */int) arr_38 [i_11]))));
        arr_98 [i_11] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) arr_45 [i_11] [i_11] [i_11] [2LL] [i_11] [i_11]))), (var_10)));
    }
    /* LoopNest 2 */
    for (unsigned int i_30 = 0; i_30 < 23; i_30 += 4) 
    {
        for (int i_31 = 2; i_31 < 21; i_31 += 1) 
        {
            {
                arr_105 [i_30] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_30]))) : (2899436383U))) * ((+(2899436372U)))))) / (max((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) arr_47 [i_31] [i_30])))), (((/* implicit */unsigned long long int) arr_49 [i_31 + 1] [i_31 + 1] [i_31 - 2] [i_31 - 1] [i_31 - 1] [i_30]))))));
                arr_106 [i_30] [i_31] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2899436375U)) ? (2899436380U) : (min((2899436401U), (2899436392U)))));
            }
        } 
    } 
    var_51 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_3) & (((/* implicit */int) var_4))))))))));
}
