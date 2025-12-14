/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42432
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (883808470391940657ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (min((var_16), (((/* implicit */long long int) var_13)))))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))));
    var_20 = ((/* implicit */int) ((var_9) * (((/* implicit */long long int) ((/* implicit */int) min((var_17), (((/* implicit */unsigned char) var_4))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) (+(17562935603317610964ULL)));
                                var_22 = ((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_2] [i_2] [i_5] [i_5] [i_2 + 1])) - (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2 - 1] [i_1] [i_2 - 2])) - (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5] [i_1] [i_2 - 2]))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_18)))) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (((arr_8 [2LL] [i_1] [i_1] [i_1] [i_1] [i_1]) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28894))))))) << (((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_5])))) + (arr_7 [i_0] [i_0] [i_1] [i_2] [(unsigned char)5] [i_5]))) - (7419445156872170801LL))))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_9))));
                        arr_14 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */signed char) arr_10 [i_5]);
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_6 = 1; i_6 < 20; i_6 += 2) 
    {
        arr_18 [i_6 + 1] &= ((/* implicit */signed char) arr_15 [i_6]);
        arr_19 [i_6 + 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_18))))) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) (signed char)2)) : (((((/* implicit */_Bool) arr_17 [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6 - 1])) : (((/* implicit */int) arr_17 [i_6 + 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    arr_30 [i_7] [i_8 + 1] [i_9] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7 + 1]))));
                    var_26 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_8 - 1])) < (((/* implicit */int) arr_17 [i_8 + 1]))));
                    var_27 &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-3))) : (var_5))));
                }
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((arr_20 [i_7] [i_7 + 2]) - (378233797))))))));
                var_29 += ((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_8 + 1] [i_7 + 1]))));
                var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) 0U))));
            }
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (signed char)15))));
            arr_31 [i_7] [(unsigned char)19] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7 + 2])) ? (((/* implicit */int) arr_25 [i_8 - 1] [i_8 - 1] [i_8 - 1])) : (((/* implicit */int) var_14))));
            var_32 = ((/* implicit */_Bool) arr_16 [(unsigned short)3]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_34 [i_7 + 2] [0] = ((/* implicit */unsigned long long int) (-(arr_32 [i_11] [i_11] [i_7 + 1])));
            arr_35 [i_11] [i_7] = ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_23 [i_7] [i_11])));
            arr_36 [i_7] [i_7 - 1] [i_7 + 1] = ((((/* implicit */_Bool) var_17)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7]))));
        }
        /* LoopSeq 1 */
        for (short i_12 = 2; i_12 < 20; i_12 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_33 |= ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [i_12 + 1] [i_12 - 2]))));
                arr_42 [i_12] [i_13] = ((/* implicit */int) arr_24 [i_7] [i_12 - 1]);
                /* LoopSeq 3 */
                for (int i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7 + 1] [i_7 - 1] [i_12 + 1]))) > (17562935603317610967ULL));
                    /* LoopSeq 3 */
                    for (signed char i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        arr_50 [i_7] [i_12] [i_13] [i_14] [i_15 + 2] &= ((/* implicit */unsigned int) arr_22 [i_7 - 1]);
                        arr_51 [i_7 - 1] [i_12 - 1] [i_7] [i_15 + 2] [3] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_7 - 1] [i_12 - 2] [i_12 - 2] [i_7 - 1]))));
                        arr_52 [i_15 + 1] [i_12] [i_13] [i_14] [10ULL] [12U] = ((((/* implicit */int) arr_44 [i_12 - 2] [i_12 - 1] [i_12 + 1])) * (((/* implicit */int) (signed char)46)));
                        arr_53 [i_7 + 2] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_44 [i_7] [i_15] [i_13])))));
                        arr_54 [i_15] [i_13] = ((/* implicit */unsigned char) var_5);
                    }
                    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
                    {
                        arr_59 [i_7 + 1] [(unsigned char)20] [i_13] [(unsigned char)17] [i_14] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_44 [i_7 + 2] [i_7 - 1] [i_7 - 1]))));
                        arr_60 [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_15))) + (arr_48 [i_7 + 1] [i_16] [i_16])));
                        arr_61 [i_14] [i_12] [i_13] [i_14] [i_16] [(signed char)2] [i_12] |= ((/* implicit */unsigned long long int) (signed char)46);
                        var_35 |= (~(((((/* implicit */_Bool) var_5)) ? (var_16) : (3002014377261148336LL))));
                    }
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_12 - 1])) ? (arr_48 [i_7] [i_12 + 1] [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_64 [i_7] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_7 + 1] [i_7 - 1] [i_12 - 1] [i_13] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_57 [i_7 - 1] [i_7 - 1] [i_12 - 2] [i_12] [i_12]))));
                        var_37 |= ((/* implicit */unsigned long long int) ((arr_20 [i_7 + 1] [i_7 - 1]) >> (((arr_32 [i_7 - 1] [i_13] [i_17]) + (1267388308)))));
                        var_38 = ((/* implicit */short) (((+(arr_49 [i_7] [i_12] [i_17] [i_17] [i_17] [i_7]))) % (((/* implicit */int) arr_38 [i_7]))));
                    }
                    var_39 &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    arr_67 [i_7 + 1] [i_7] [i_7 + 1] [i_7] = ((/* implicit */unsigned long long int) (+(arr_20 [i_12 - 1] [i_12 - 1])));
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 21; i_19 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) ((unsigned long long int) arr_23 [i_12 + 1] [i_7 + 1]));
                        var_41 = ((/* implicit */long long int) ((_Bool) arr_55 [i_13] [i_12 - 1] [i_12 - 2] [i_12]));
                        arr_70 [i_7] [i_12] [i_18] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-24314)) / (var_1))) != ((+(((/* implicit */int) var_14))))));
                        var_42 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7 + 1]))) + (var_16)));
                    }
                    var_43 = ((((/* implicit */int) arr_39 [i_12])) > (65528));
                    var_44 += ((/* implicit */unsigned long long int) (short)-28894);
                }
                for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7 + 2])) ? (((/* implicit */int) arr_26 [i_12 + 1] [7LL] [i_7 - 1] [i_20])) : (((/* implicit */int) arr_26 [i_20] [i_13] [i_12 - 1] [i_7])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        arr_75 [i_7 + 1] [i_12 - 1] [i_12] [i_13] [i_13] [12] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_7 - 1])) ? (((/* implicit */int) arr_38 [i_7 + 1])) : (((/* implicit */int) arr_38 [i_7 + 2]))));
                        arr_76 [i_20] [i_20] [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) 3002014377261148341LL)) ? (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */int) arr_47 [i_7] [i_13] [i_20] [i_7 - 1] [(signed char)15] [i_21 - 1])))) : (arr_69 [i_7] [i_7] [(short)8] [i_7] [i_7 - 1] [i_12 - 2] [(unsigned char)5])));
                        var_46 |= ((_Bool) ((((/* implicit */_Bool) arr_49 [(_Bool)1] [i_12] [i_13] [i_20] [i_20] [i_21])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_25 [i_12] [i_13] [i_21]))));
                    }
                    for (signed char i_22 = 3; i_22 < 20; i_22 += 4) 
                    {
                        arr_81 [i_7 + 2] [i_7] [i_12] [i_13] [i_20] [i_13] = ((/* implicit */_Bool) (+(var_16)));
                        var_47 = ((var_9) & (((/* implicit */long long int) ((/* implicit */int) var_4))));
                    }
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 1) 
                    {
                        var_48 = ((/* implicit */_Bool) max((var_48), (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7 + 1] [i_12] [i_12] [i_12 - 1]))) == (3002014377261148339LL)))));
                        var_49 = ((/* implicit */int) var_5);
                    }
                    var_50 += ((/* implicit */int) var_7);
                }
                var_51 += ((/* implicit */signed char) arr_65 [i_7 - 1] [i_13] [18ULL] [i_12 - 2] [i_13] [i_13]);
            }
            for (unsigned long long int i_24 = 2; i_24 < 18; i_24 += 4) 
            {
                var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) (+(((/* implicit */int) var_10)))))));
                var_53 = ((/* implicit */unsigned short) var_16);
            }
            arr_87 [i_7] [i_7] [i_12] = ((/* implicit */_Bool) (+(var_2)));
        }
    }
}
