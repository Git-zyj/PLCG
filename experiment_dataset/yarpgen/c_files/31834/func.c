/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31834
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) ((var_18) < (var_18)))) ^ (((/* implicit */int) (!(var_15))))))) && (((/* implicit */_Bool) (-((+(var_18)))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) 9007199252643840ULL)) ? (((((/* implicit */int) (signed char)-27)) - (arr_1 [i_0]))) : (((((/* implicit */int) (signed char)-27)) / (((/* implicit */int) (_Bool)1)))))) + (2147483647))) >> (((/* implicit */int) var_11))));
        var_21 -= max((2729071637877904464ULL), (((((/* implicit */_Bool) arr_0 [0ULL])) ? (arr_0 [6LL]) : (((/* implicit */unsigned long long int) var_0)))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 1) 
    {
        arr_5 [i_1] [i_1 + 2] = ((/* implicit */signed char) max((((/* implicit */long long int) arr_4 [i_1])), (arr_3 [i_1])));
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(min((var_9), (((/* implicit */long long int) (_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((2683412420210398620ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) -593890934)) / (arr_3 [i_1])))) && (((/* implicit */_Bool) arr_3 [i_1])))))));
        arr_7 [i_1] = ((/* implicit */_Bool) (-((-(arr_3 [i_1])))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_10 [i_1 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [4] [i_1 + 2] [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 3]))) : (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 2])))));
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_17 [i_1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 593890956)) ? (3878274746344075408ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (var_18)));
                        arr_18 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1])) << (((((/* implicit */int) (signed char)77)) - (62)))))) < (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1])))))));
                        arr_19 [i_1] [i_2] [i_1] [i_2] = ((max((arr_9 [i_1 + 2] [i_1 + 2] [i_1 + 1]), (arr_9 [(signed char)4] [i_1 + 1] [i_1 + 2]))) != (min((arr_9 [i_1] [i_1 + 3] [i_1 + 3]), (((/* implicit */long long int) var_17)))));
                    }
                } 
            } 
        }
    }
    for (int i_5 = 1; i_5 < 18; i_5 += 2) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_20 [i_5 + 1])))) ? (min((((15717672435831647128ULL) - (((/* implicit */unsigned long long int) arr_21 [i_5])))), (max((arr_20 [13ULL]), (arr_20 [i_5]))))) : (max((arr_20 [i_5 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)106)) << (((arr_21 [i_5]) - (1327591127))))))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5 + 1])) ? (min((((/* implicit */unsigned long long int) arr_23 [i_6])), (15763331653499152980ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_20 [i_5])))))) ? (var_5) : (((((/* implicit */unsigned long long int) min((-1667503147), (((/* implicit */int) var_7))))) % (var_18)))));
            var_23 *= ((/* implicit */_Bool) max((((2780964962248914610ULL) & (((/* implicit */unsigned long long int) arr_21 [i_5 + 2])))), (((/* implicit */unsigned long long int) min((-688463264), (-368843550))))));
        }
        var_24 *= ((((/* implicit */_Bool) ((unsigned long long int) arr_22 [i_5 + 1]))) && (((/* implicit */_Bool) ((arr_21 [i_5 + 1]) | (arr_21 [i_5 + 2])))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_8 = 2; i_8 < 13; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-125)) == (arr_25 [i_8 + 1] [i_8 - 1]))))));
                arr_34 [i_7] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-109))));
                arr_35 [i_7] [i_8] [(signed char)8] [i_9] = ((/* implicit */unsigned long long int) arr_28 [5ULL]);
            }
            for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                {
                    arr_40 [i_10] = ((signed char) (_Bool)0);
                    arr_41 [3LL] [i_7] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((int) ((((arr_29 [i_7]) + (9223372036854775807LL))) << (((((-1667503162) + (1667503173))) - (11))))));
                    var_26 = ((/* implicit */_Bool) ((-1667503147) * (((/* implicit */int) (_Bool)1))));
                }
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(arr_28 [i_8 + 1]))))));
                arr_42 [i_10] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8 - 1] [i_10] [i_8 - 1]))) % (1379940738625105590LL)));
                var_28 = arr_38 [i_8 - 2] [i_8 + 1] [i_8 + 1] [3ULL];
            }
            arr_43 [i_7] [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_29 [i_8])) ? (((/* implicit */int) arr_33 [i_7] [i_8] [i_7])) : (arr_27 [i_8]))));
            arr_44 [1ULL] = arr_21 [i_8];
        }
        /* vectorizable */
        for (long long int i_12 = 3; i_12 < 14; i_12 += 1) /* same iter space */
        {
            arr_47 [i_12] [i_12 - 2] = 15123277701089596400ULL;
            arr_48 [i_7] [i_12] [i_12] = ((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (arr_25 [i_7] [i_12]) : (-1241014836));
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))));
                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((arr_31 [i_12 - 3]) | (arr_31 [i_12 - 3]))))));
            }
            for (int i_14 = 3; i_14 < 12; i_14 += 3) 
            {
                arr_53 [i_7] [i_12] [(_Bool)1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_7] [i_12 - 3])) || (((/* implicit */_Bool) arr_26 [8LL] [i_12 - 3]))));
                arr_54 [i_12 - 1] [i_12] [i_12] [(signed char)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_12 + 1] [i_14 + 1])) ? (((/* implicit */int) ((_Bool) var_13))) : (((/* implicit */int) (!((_Bool)1))))));
                arr_55 [(_Bool)1] [i_12] [i_12] [i_14] |= ((/* implicit */signed char) (-(((/* implicit */int) arr_49 [12LL]))));
            }
        }
        for (long long int i_15 = 3; i_15 < 14; i_15 += 1) /* same iter space */
        {
            var_31 += ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */int) arr_37 [6ULL] [i_15] [(_Bool)0] [i_15])) << (((var_4) - (8683524693213312619LL)))))), (((arr_32 [(_Bool)1] [i_15] [i_7]) ? (arr_29 [i_7]) : (arr_28 [i_7]))))) < (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 1) 
            {
                arr_62 [i_16] = ((/* implicit */unsigned long long int) arr_61 [i_16] [i_16]);
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (+(((((_Bool) 33507325)) ? (arr_52 [i_15 + 1] [i_15] [i_16] [i_16]) : (((/* implicit */long long int) arr_58 [i_7] [6ULL] [i_16] [i_15 - 3])))))))));
                var_33 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((var_13), (var_13)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_56 [i_7] [i_15]))))) : (arr_20 [i_7])))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_17 = 2; i_17 < 14; i_17 += 1) 
                {
                    arr_65 [(signed char)6] [(signed char)6] [(signed char)6] [i_17] [i_17 - 2] |= ((/* implicit */signed char) var_6);
                    arr_66 [i_7] [i_15] [i_16] [i_16] [i_15 + 1] = ((/* implicit */long long int) arr_49 [i_16]);
                    arr_67 [i_16] [i_16] = ((/* implicit */signed char) ((arr_50 [i_15 + 1] [i_15] [i_16] [i_16]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
                for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    arr_71 [i_16] [i_16] [i_18] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7])) << (((/* implicit */int) arr_33 [i_7] [i_7] [i_18]))))))) ? (((/* implicit */unsigned long long int) (-((~(var_9)))))) : (((((/* implicit */unsigned long long int) var_13)) & (((unsigned long long int) var_6))))));
                    var_34 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(2729071637877904490ULL))))))));
                    arr_72 [i_16] = ((/* implicit */unsigned long long int) var_9);
                    var_35 -= max((((/* implicit */long long int) (~(((/* implicit */int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_7] [i_15 - 2] [i_18]))))))))), (-3825813646565499284LL));
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) arr_59 [i_15 - 1]))));
                }
            }
            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_68 [i_7] [12] [i_15 - 2] [12ULL])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_68 [i_7] [(signed char)2] [i_15 - 2] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_68 [i_7] [(_Bool)1] [i_15 - 2] [i_15]))))));
            arr_73 [i_7] = ((/* implicit */unsigned long long int) var_4);
        }
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 2) 
            {
                {
                    arr_81 [i_7] = -229342954075176636LL;
                    arr_82 [i_20] = var_2;
                }
            } 
        } 
        arr_83 [i_7] [i_7] = ((/* implicit */long long int) ((max((((/* implicit */long long int) 517736262)), (((8725936873073669576LL) & (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [i_7]))))))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_51 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_7]))))))))))));
    }
}
