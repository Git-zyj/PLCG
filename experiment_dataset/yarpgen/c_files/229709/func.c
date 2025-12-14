/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229709
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((var_9), (((/* implicit */short) arr_0 [i_0] [i_0]))))), ((-(9151314442816847872LL))))))));
        var_13 = ((/* implicit */unsigned long long int) min((9151314442816847856LL), (((/* implicit */long long int) (_Bool)1))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (-9151314442816847851LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */long long int) arr_3 [15] [15]))))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((arr_1 [i_0]), (((unsigned long long int) 9151314442816847856LL))))));
        var_15 = ((/* implicit */unsigned long long int) (signed char)103);
        var_16 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [i_0])), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned char)15]))))))), (max((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))) == (18446744073709551593ULL))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) var_7);
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_6 [4LL] [4LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))));
            var_19 = ((/* implicit */unsigned char) 4390120516184770695ULL);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2])) ? (arr_1 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_1 - 2] [i_1 - 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) << (((/* implicit */int) (_Bool)1)))))));
            var_21 = ((/* implicit */unsigned long long int) var_7);
            arr_13 [16ULL] [16ULL] = max((((((_Bool) arr_5 [(unsigned short)16] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_7 [(signed char)15])) & (((/* implicit */int) (short)371))))) : (min((9151314442816847872LL), (((/* implicit */long long int) var_9)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 2])) + (((/* implicit */int) arr_8 [i_1 + 2] [i_1 - 2]))))));
        }
        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
        {
            var_22 = ((/* implicit */_Bool) max((arr_6 [i_4 + 3] [i_1 + 1]), (((/* implicit */unsigned long long int) ((long long int) var_4)))));
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1] [4LL] [(signed char)17]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) ? (arr_9 [i_1 + 1] [i_4 + 2] [(unsigned char)15]) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)404))) == (var_2)))) | (((/* implicit */int) var_3))))))))));
        }
        for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_5 + 2])) ? (arr_9 [18LL] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))), (((/* implicit */unsigned int) arr_17 [(signed char)18] [2U] [(unsigned short)10])))))));
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_8), (((/* implicit */unsigned short) (unsigned char)249)))))));
            var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (arr_9 [(_Bool)0] [5LL] [7ULL])))) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)13] [(unsigned short)13])) ? (((/* implicit */int) arr_3 [6] [19])) : (((/* implicit */int) arr_5 [(signed char)4] [9])))) : (arr_17 [12ULL] [i_1] [i_1])))));
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_9 [3U] [i_1 - 1] [(unsigned char)19])) ? (((/* implicit */unsigned long long int) arr_14 [17U] [i_1 - 1] [i_1 - 1])) : (17917687910964559478ULL))) < (((/* implicit */unsigned long long int) (~(var_5))))));
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) 8344835774644053533ULL)) ? (((unsigned long long int) ((((/* implicit */int) (unsigned short)61530)) < (((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0LL)) ? (arr_1 [i_1]) : (arr_6 [(unsigned char)4] [(unsigned char)4])))))))))));
                arr_22 [(unsigned short)18] [(unsigned short)18] [14U] [(unsigned short)18] |= ((/* implicit */short) ((long long int) (((+(((/* implicit */int) (short)384)))) | ((-(((/* implicit */int) var_4)))))));
                var_28 = ((/* implicit */unsigned int) (((~(arr_19 [i_5]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [9])))));
            }
        }
    }
    for (unsigned char i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) ((max((5238396259294053979LL), (((/* implicit */long long int) arr_2 [i_7 + 2])))) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7 + 2])))));
        arr_26 [19LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(arr_0 [(unsigned char)9] [(unsigned short)0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [5U]))) : (arr_6 [(short)1] [i_7 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_11 [21LL] [17U]))))) <= (((long long int) arr_6 [i_7] [i_7])))))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_19 [i_7 + 1])))));
        var_30 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((arr_6 [i_7] [(signed char)11]), (((/* implicit */unsigned long long int) arr_23 [i_7] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_7 + 2] [i_7 + 2]))) : ((+(-9151314442816847861LL)))))));
    }
    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_10 = 2; i_10 < 20; i_10 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    arr_38 [(short)10] [i_9] [i_9] [(short)10] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_15 [i_8])) >= (((/* implicit */int) arr_24 [i_9] [i_9])))) ? ((+(((/* implicit */int) arr_15 [i_8])))) : (((/* implicit */int) var_4))));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_25 [i_11])), (var_2))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_32 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_30 [i_9 + 2]))))) ? ((+(-8331485242888214647LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_30 [i_9 + 2]), (arr_30 [i_9 - 1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_23 [5LL] [5LL]))));
                        arr_43 [i_9] [i_8] [5U] [i_8] [i_9] = ((/* implicit */unsigned int) ((arr_21 [(unsigned short)1] [10ULL] [0ULL] [10ULL]) << (((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_9 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_16 [(unsigned char)16] [14U] [(short)15]))))) : (((/* implicit */int) var_4))))));
                        arr_44 [i_9] [4U] [(unsigned short)20] [(unsigned short)20] = ((/* implicit */signed char) (unsigned char)240);
                    }
                    for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) arr_25 [i_8]);
                        arr_47 [(_Bool)1] [(short)5] [i_9] [i_9] [(signed char)5] [(signed char)5] = ((((/* implicit */_Bool) max((((unsigned long long int) arr_41 [i_9] [13LL] [i_9] [i_9] [(signed char)15])), (((/* implicit */unsigned long long int) arr_42 [i_9] [i_9] [i_14] [(_Bool)1] [i_9] [(unsigned char)0] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [(unsigned short)8] [i_9] [(unsigned short)8] [i_9 + 2])) || (((/* implicit */_Bool) arr_24 [i_8 - 1] [i_8]))))) : (((/* implicit */int) arr_33 [6LL] [i_8])));
                        var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_8 - 2] [i_10 + 2] [i_9 + 2])) && (((/* implicit */_Bool) arr_23 [i_8 - 2] [(unsigned char)11])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (signed char)-29)))))))) : ((-(((/* implicit */int) var_4))))));
                        var_36 = ((/* implicit */unsigned char) var_5);
                    }
                    arr_48 [(unsigned short)4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned short)16])) ? (-8331485242888214647LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
                    var_37 |= ((/* implicit */unsigned long long int) arr_37 [(unsigned short)6] [(unsigned char)11] [13LL] [13LL] [(unsigned char)11] [7LL]);
                    var_38 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_10 [(short)19] [(short)19]))))) ? (min((arr_21 [i_8] [17LL] [17ULL] [i_8]), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                }
                for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) min((arr_6 [(unsigned short)7] [(unsigned short)7]), (((/* implicit */unsigned long long int) arr_29 [i_8 - 1])))))));
                    arr_52 [(_Bool)1] [i_9] [(unsigned short)18] [(_Bool)1] [i_9] [i_8] = ((/* implicit */int) 18446744073709551611ULL);
                    var_40 = ((/* implicit */unsigned short) var_2);
                }
                arr_53 [i_9] = (i_9 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((arr_4 [(short)21] [1ULL]) + (2147483647))) >> (((arr_41 [i_9] [10U] [16ULL] [(short)0] [(short)2]) - (8961277552420520980ULL))))))) ? (((((/* implicit */_Bool) -8674134478783522643LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8] [(unsigned short)5] [i_9]))) : ((+(arr_32 [16LL] [16LL] [(_Bool)1]))))) : (((unsigned int) arr_17 [i_8 - 1] [(_Bool)1] [i_8 - 1]))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((arr_4 [(short)21] [1ULL]) + (2147483647))) >> (((((arr_41 [i_9] [10U] [16ULL] [(short)0] [(short)2]) - (8961277552420520980ULL))) - (11216087924138264049ULL))))))) ? (((((/* implicit */_Bool) -8674134478783522643LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8] [(unsigned short)5] [i_9]))) : ((+(arr_32 [16LL] [16LL] [(_Bool)1]))))) : (((unsigned int) arr_17 [i_8 - 1] [(_Bool)1] [i_8 - 1])))));
            }
            for (long long int i_16 = 0; i_16 < 22; i_16 += 4) /* same iter space */
            {
                var_41 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_4 [i_8 + 2] [i_9 - 2]) - (arr_4 [i_8 + 1] [i_9 + 1])))), (18446744073709551615ULL)));
                var_42 = ((/* implicit */int) ((((max((arr_41 [i_9] [i_9] [i_9] [15] [15]), (((/* implicit */unsigned long long int) arr_23 [i_8] [i_8])))) >> (((((/* implicit */int) (unsigned short)28239)) - (28193))))) | (((/* implicit */unsigned long long int) ((int) -670961184)))));
                var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_33 [i_8] [(_Bool)1]))) ? (((/* implicit */long long int) arr_9 [i_8] [i_9 - 1] [i_8 - 1])) : (min((((/* implicit */long long int) (signed char)-62)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_8] [i_16] [10LL] [10LL]))) : ((-(arr_1 [(unsigned char)1]))))))));
            }
            /* vectorizable */
            for (long long int i_17 = 0; i_17 < 22; i_17 += 4) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_58 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [11ULL] [20]))) : (((((/* implicit */_Bool) arr_19 [19LL])) ? (arr_41 [i_9] [(unsigned char)9] [i_9] [(unsigned char)21] [i_9]) : (arr_56 [i_8] [i_9] [i_9] [i_9])))));
                var_45 = ((/* implicit */unsigned int) arr_25 [i_17]);
                var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) ((((((/* implicit */unsigned long long int) -9151314442816847851LL)) | (arr_6 [i_8] [i_8]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                var_47 = ((/* implicit */unsigned short) arr_4 [i_8] [i_8]);
            }
            /* vectorizable */
            for (unsigned short i_18 = 2; i_18 < 21; i_18 += 3) 
            {
                var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_8 + 2] [(unsigned char)12] [7U] [i_8 + 2]))));
                var_49 = ((/* implicit */unsigned int) arr_45 [20LL] [(unsigned char)14] [20LL] [(_Bool)1] [13ULL] [(_Bool)1] [17LL]);
                var_50 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_51 [i_9 + 2] [i_9 + 2] [i_9] [i_9 + 2] [i_9]))));
                /* LoopSeq 3 */
                for (unsigned char i_19 = 1; i_19 < 20; i_19 += 3) 
                {
                    var_51 = ((/* implicit */unsigned short) ((unsigned int) arr_39 [i_8 - 1] [i_18 - 1]));
                    var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_18 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_56 [(unsigned short)13] [i_9] [i_18 - 2] [i_18 - 2])));
                    var_53 = ((/* implicit */unsigned short) ((arr_14 [i_18 - 2] [(short)15] [i_19 + 1]) - (arr_14 [i_18 + 1] [i_18 + 1] [i_19 + 1])));
                    var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((_Bool) arr_49 [(short)8] [i_9 - 1] [(signed char)17] [i_9 - 1])))));
                    arr_65 [9] [9] [9] [9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_9 [(unsigned short)15] [(signed char)6] [(unsigned short)9])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 70368744177663ULL)) || (((/* implicit */_Bool) arr_3 [i_8] [9LL]))))) : (((/* implicit */int) var_8))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (unsigned char)0))));
                    /* LoopSeq 2 */
                    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        var_56 = ((/* implicit */signed char) (~(((/* implicit */int) arr_50 [i_9 + 2] [i_9] [(unsigned char)2] [(unsigned char)2]))));
                        var_57 = ((/* implicit */int) max((var_57), (((/* implicit */int) arr_24 [i_8] [20]))));
                        var_58 = ((/* implicit */_Bool) var_7);
                        var_59 = ((/* implicit */short) arr_64 [1] [(_Bool)1] [1] [6U] [2]);
                    }
                    for (signed char i_22 = 1; i_22 < 18; i_22 += 4) 
                    {
                        var_60 = ((/* implicit */unsigned char) min((var_60), (((/* implicit */unsigned char) ((signed char) (unsigned char)195)))));
                        var_61 -= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (arr_69 [14LL] [14LL])));
                    }
                    arr_73 [i_9] [(unsigned char)5] [19] [3ULL] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) (!(arr_10 [i_8 + 2] [i_9 + 2])));
                    var_62 ^= ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [14] [(short)1] [i_8]))));
                }
                for (long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    var_63 = ((/* implicit */unsigned char) arr_51 [2U] [9] [i_9] [9] [9]);
                    var_64 = ((/* implicit */int) min((var_64), (((((/* implicit */int) arr_34 [i_8] [i_8 + 2] [i_8] [(_Bool)1])) * (((/* implicit */int) arr_34 [16LL] [i_8 - 2] [16LL] [16LL]))))));
                    var_65 = ((/* implicit */unsigned long long int) arr_62 [i_8] [i_9] [18U] [(unsigned short)20] [18U] [21LL]);
                    var_66 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                }
            }
            var_67 = ((/* implicit */int) min((((unsigned int) arr_55 [i_8] [i_9] [i_8] [i_9])), (6U)));
            var_68 = ((/* implicit */long long int) arr_19 [i_9 + 2]);
            arr_76 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned long long int) arr_40 [i_8] [(unsigned short)6] [(unsigned char)12] [(signed char)16] [(_Bool)1])) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (-1045977374) : (((/* implicit */int) arr_39 [14] [i_8])))))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (arr_72 [(short)2] [2U] [(unsigned char)7] [(short)2] [2U] [(unsigned char)19])))) : (((/* implicit */unsigned long long int) (~(arr_14 [(_Bool)1] [i_8] [i_8]))))));
            arr_77 [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_49 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1]), (arr_49 [i_8] [i_8 + 2] [i_8 - 2] [(_Bool)1]))))));
        }
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            var_69 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) arr_1 [i_8 - 1])))));
            var_70 = ((/* implicit */signed char) min((var_70), (((/* implicit */signed char) (unsigned short)22988))));
        }
        var_71 = (short)384;
        var_72 = ((/* implicit */unsigned char) max((var_72), (((/* implicit */unsigned char) arr_46 [i_8] [i_8] [14LL]))));
        var_73 = ((/* implicit */unsigned short) max(((+(-1045977392))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_57 [i_8] [(unsigned char)8] [(unsigned short)20])))))))));
        var_74 = ((/* implicit */long long int) max((var_74), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_42 [14U] [12U] [12U] [12U] [(unsigned short)12] [12U] [12U])))))) & (((/* implicit */int) ((signed char) arr_21 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8 + 2]))))))));
    }
    var_75 = ((/* implicit */int) ((unsigned char) var_7));
    var_76 = var_6;
    var_77 = var_3;
}
