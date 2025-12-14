/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29309
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_4 [8LL] [17LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) ((((/* implicit */int) (unsigned char)206)) >= (((/* implicit */int) (unsigned char)8)))))));
            arr_5 [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) ((unsigned char) -3734147799108477577LL))), (((((/* implicit */unsigned long long int) arr_2 [(unsigned char)12])) % (arr_0 [i_0])))))));
            var_16 = ((/* implicit */unsigned char) max((((arr_2 [i_0]) ^ (arr_2 [i_0]))), (max((((/* implicit */long long int) var_14)), (arr_2 [i_1])))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            var_17 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [16LL]))) ^ (arr_2 [i_2])))) && (((/* implicit */_Bool) ((arr_0 [i_0]) << (((var_15) - (13463007167235231084ULL)))))))), ((_Bool)1)));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_13 [i_0] [i_2] [(unsigned char)8] [(unsigned char)12] [i_5]);
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_3 [i_3] [i_3]), (max((var_7), ((unsigned char)252)))))), (min((((10725493277998333651ULL) / (7301535904172540512ULL))), (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_3] [i_3] [(_Bool)1]), (var_8))))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) max((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_13 [i_0] [i_0] [17ULL] [i_0] [i_0])))), (((((/* implicit */_Bool) 6586119028061430779LL)) && (((/* implicit */_Bool) 6586119028061430766LL))))))) - (((/* implicit */int) max(((unsigned char)186), ((unsigned char)12))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_19 += ((/* implicit */unsigned char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_0] [i_7] [(unsigned char)7]))) - (arr_23 [(unsigned char)3] [i_2] [i_2])))));
                            var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_21 [i_7 + 4] [i_7 + 1])) > (((/* implicit */int) max((arr_13 [(unsigned char)13] [i_2] [i_2] [(unsigned char)13] [i_2]), (var_6)))))))));
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((min((arr_20 [i_0] [i_7 - 2] [i_2] [i_7 + 1]), (arr_20 [(_Bool)1] [i_7 + 1] [i_2] [i_7 - 1]))), (arr_20 [i_2] [i_7 - 1] [(unsigned char)11] [i_6]))))));
                            arr_27 [i_0] = ((/* implicit */unsigned char) max((arr_18 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(unsigned char)2] [i_7 - 1] [i_7 - 2] [(_Bool)1] [(unsigned char)14])) ? (((/* implicit */int) arr_13 [i_7] [i_7 - 2] [i_7 + 1] [(unsigned char)1] [i_7])) : (((/* implicit */int) arr_13 [i_2] [i_7 + 3] [i_7 + 4] [i_8] [i_8])))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */_Bool) var_15);
                var_23 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_7 [i_6] [i_6])))) ^ (((((/* implicit */int) arr_19 [(_Bool)1] [(_Bool)1] [i_0] [i_0])) & (((/* implicit */int) arr_17 [i_0]))))));
                var_24 += ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) && (((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
            for (unsigned char i_9 = 1; i_9 < 16; i_9 += 1) 
            {
                var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_24 [i_2] [5LL] [i_9 + 1] [5LL])) >> (((/* implicit */int) arr_24 [i_2] [i_9] [i_9 + 1] [3ULL])))) << (((/* implicit */int) max((arr_24 [i_2] [i_2] [i_9 + 1] [(_Bool)1]), (arr_24 [(_Bool)1] [i_0] [i_9 + 1] [i_9 + 1]))))));
                var_26 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_2] [i_0] [i_2])) ? (((/* implicit */int) arr_22 [i_9 - 1] [(_Bool)1] [i_9 - 1] [i_2])) : (((/* implicit */int) arr_22 [i_9 + 2] [i_9 + 2] [i_2] [i_9])))), (((/* implicit */int) min((var_7), (arr_22 [i_9 - 1] [i_2] [i_9 + 1] [i_2]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_10 = 1; i_10 < 17; i_10 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) arr_28 [i_9 - 1] [i_9]);
                    arr_35 [i_0] [9ULL] [i_9] [i_2] = ((unsigned char) arr_7 [i_9 + 2] [i_10 + 1]);
                }
                for (unsigned char i_11 = 1; i_11 < 17; i_11 += 1) /* same iter space */
                {
                    var_28 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_24 [i_0] [(unsigned char)15] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_2] [(unsigned char)8] [i_11]))) : (max((((/* implicit */long long int) var_8)), (arr_25 [(unsigned char)17] [i_9 - 1]))))) % (((/* implicit */long long int) max((((/* implicit */int) arr_20 [10ULL] [i_2] [(unsigned char)13] [i_11])), ((+(((/* implicit */int) arr_11 [i_0] [12ULL] [i_9 - 1] [i_9 - 1])))))))));
                    var_29 += ((((/* implicit */int) (unsigned char)6)) == ((+(((/* implicit */int) ((unsigned char) arr_33 [0ULL] [i_2] [0ULL] [11LL]))))));
                    var_30 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_13 [i_9] [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9 + 1]))))));
                    arr_38 [i_0] [i_2] [(unsigned char)8] [i_2] [i_2] [(unsigned char)4] |= max(((unsigned char)25), ((unsigned char)94));
                }
                arr_39 [i_9] [i_2] [i_9 + 1] [i_2] = ((/* implicit */unsigned char) (+(min((arr_6 [i_9 - 1] [i_9 + 2]), (arr_6 [i_9 + 2] [i_9 + 2])))));
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)232)))) * ((+(((/* implicit */int) (unsigned char)252))))));
                            var_32 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_42 [(unsigned char)10] [i_14] [(unsigned char)10] [i_14])) - (((/* implicit */int) arr_43 [i_0] [i_13] [8LL])))));
                        }
                    } 
                } 
                arr_49 [i_0] = arr_21 [i_0] [i_0];
                var_33 = arr_41 [(unsigned char)2] [(unsigned char)15];
                arr_50 [i_0] [6LL] [i_2] [(unsigned char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_12] [i_12] [i_12])) / (((/* implicit */int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (arr_28 [2ULL] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_2] [i_12])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                for (unsigned char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) min((max((arr_9 [i_0] [(unsigned char)2] [i_15]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)64)) * (((/* implicit */int) var_11)))))));
                        var_35 = (unsigned char)250;
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 2) 
        {
            var_36 = (unsigned char)183;
            var_37 = ((/* implicit */long long int) ((((/* implicit */int) arr_34 [i_17 - 1] [(unsigned char)5])) / (((/* implicit */int) arr_24 [i_17 + 4] [i_17] [i_17 + 4] [i_17 - 1]))));
        }
        var_38 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((unsigned char)205), (arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((arr_46 [i_0]), (arr_46 [i_0])))));
        var_39 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_0] [i_0])), (((arr_45 [i_0] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((arr_18 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_0]))))))))));
        var_40 += ((/* implicit */_Bool) max((min((arr_45 [i_0] [i_0] [i_0] [i_0]), (arr_45 [8LL] [8LL] [11LL] [8LL]))), (max((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0])))));
        var_41 *= max((((((/* implicit */_Bool) max((arr_12 [i_0] [15ULL]), ((unsigned char)0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_0] [i_0]))) : (var_12))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) * (((/* implicit */int) (unsigned char)35)))) / (((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned char i_18 = 1; i_18 < 23; i_18 += 2) 
    {
        var_42 = ((/* implicit */_Bool) var_9);
        arr_61 [i_18 + 1] = ((/* implicit */_Bool) min((((/* implicit */int) var_0)), (min((((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) var_0))))), (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_58 [i_18 + 2])) : (((/* implicit */int) arr_60 [i_18 + 2]))))))));
        /* LoopNest 3 */
        for (unsigned char i_19 = 3; i_19 < 22; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 22; i_20 += 3) 
            {
                for (unsigned char i_21 = 0; i_21 < 25; i_21 += 3) 
                {
                    {
                        arr_72 [i_18] [i_19] [i_21] [i_19] = ((/* implicit */_Bool) arr_59 [i_19 - 3]);
                        var_43 = ((/* implicit */long long int) arr_70 [i_18 + 2] [i_19] [i_18 + 2] [(unsigned char)14] [i_19] [i_19 - 2]);
                        var_44 -= var_8;
                    }
                } 
            } 
        } 
    }
    var_45 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                {
                    var_46 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_68 [16LL] [i_22] [(unsigned char)22] [i_24])) <= (((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_7))))))))) != (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [i_22] [i_22] [i_22] [i_22])) && (((/* implicit */_Bool) arr_65 [i_22] [i_22] [(unsigned char)3] [i_22]))))), (arr_66 [i_22] [i_22] [(unsigned char)22] [i_22])))));
                    var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) arr_68 [i_22] [(_Bool)1] [i_24] [i_24]))));
                    var_48 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_66 [i_22] [i_23] [i_23 - 1] [i_23])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_77 [i_22] [i_22]))))) : (max((arr_66 [i_22] [i_23] [i_23 - 1] [i_23]), (((/* implicit */long long int) arr_75 [i_22])))))));
                    var_49 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)249))));
                }
            } 
        } 
    } 
    var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_10))))) * (((((/* implicit */int) (unsigned char)25)) | (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_3)))))))));
}
