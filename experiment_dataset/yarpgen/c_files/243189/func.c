/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243189
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        var_17 += ((/* implicit */long long int) ((unsigned char) arr_3 [i_0 - 1]));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_9 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_2 [i_0]));
            var_18 ^= ((/* implicit */int) ((long long int) arr_6 [i_0 - 1] [i_0 - 1]));
            var_19 = ((/* implicit */unsigned short) ((unsigned char) 0ULL));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_16 [i_2] [i_3] [i_4 + 1] = ((/* implicit */unsigned int) (-((+((~(((/* implicit */int) arr_11 [i_2]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_19 [i_3] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_5] [i_5])))))))));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [(_Bool)1] [i_2]))))), (max((((/* implicit */unsigned int) arr_21 [i_2] [i_3] [i_2] [i_6] [i_7])), (arr_22 [i_2] [i_3] [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_21 [i_2] [i_2] [(signed char)13] [(unsigned char)17] [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) arr_10 [i_2])) - (8753))))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_6])))))));
                            var_22 = ((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)32752)));
                            var_23 = ((/* implicit */_Bool) (~(min((33521664), (((/* implicit */int) (_Bool)1))))));
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)81)), ((short)15710)));
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)1921)) % (((/* implicit */int) (short)-20198))))));
                            var_26 = ((/* implicit */int) (+(max((arr_20 [i_4 - 1] [i_4 - 1] [i_3] [i_6] [i_3]), (arr_20 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_8])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_27 ^= (-(arr_25 [i_4 + 1] [i_4] [i_2] [i_2] [i_4] [i_4]));
                            arr_32 [i_6] = ((/* implicit */int) (~(arr_25 [(short)5] [i_3] [i_6] [i_6] [i_3] [i_2])));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_4 - 1] [21] [i_4 - 1] [i_4 + 1] [i_3] [(unsigned char)22] [i_3])) ? (((arr_20 [3] [i_3] [3] [i_6] [i_9]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(_Bool)1] [i_4 + 1]))))))));
                            arr_33 [i_2] [12LL] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6]))) / (arr_18 [i_2] [i_2] [i_2])))) ? (arr_22 [i_4 - 1] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned short)13] [12ULL] [i_4 + 1] [i_4 - 1] [i_4 + 1])))));
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_2] [9ULL] [9ULL])))));
                        }
                        arr_34 [i_2] [i_3] [(unsigned char)2] [0U] [i_6] [i_2] = ((/* implicit */signed char) (-((+((-(((/* implicit */int) (unsigned char)81))))))));
                        arr_35 [i_2] [i_2] [10] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_15 [i_6] [i_4 - 1] [i_2] [i_2])) ? (arr_15 [i_6] [i_4 - 1] [12] [i_2]) : (((/* implicit */int) (unsigned short)63614))))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_22 [i_2] [i_4 + 1] [i_4]), (max((arr_25 [i_10] [22U] [(_Bool)1] [i_2] [22U] [i_10]), (((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_4] [i_6] [i_2] [i_4] [i_2]))))))) && (((/* implicit */_Bool) max((arr_14 [9ULL] [9ULL] [9ULL]), (((/* implicit */unsigned int) arr_11 [i_6]))))))))));
                            var_31 -= ((/* implicit */signed char) max((arr_30 [i_2] [i_3] [i_6] [i_10]), (((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_3] [i_10] [i_4 + 1] [i_4 - 1] [i_10])) && (((/* implicit */_Bool) arr_25 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_10] [i_4 + 1] [i_6])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 1; i_11 < 20; i_11 += 1) 
                        {
                            arr_43 [i_2] [i_3] [i_4] [i_6] [i_6] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_24 [i_4 + 1] [i_6] [i_4 + 1] [i_6] [i_11 - 1] [i_11 + 4] [i_11 + 1]))))), (((unsigned long long int) arr_24 [i_4 + 1] [(_Bool)1] [i_4 + 1] [i_4 + 1] [(_Bool)1] [i_6] [i_11 - 1]))));
                            var_32 = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)132));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((arr_37 [i_2] [i_6] [i_6] [18LL] [18LL] [i_2]), (((/* implicit */unsigned char) arr_11 [i_11]))))))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3] [i_3]))) / (arr_40 [i_2] [i_3] [i_4 + 1] [i_6] [i_2] [i_2]))), (((/* implicit */unsigned long long int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2]))))))))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 21; i_12 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [(unsigned char)21] [i_3])), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [(unsigned char)15] [(_Bool)1] [(unsigned char)1]))) | (arr_40 [i_2] [12LL] [(short)18] [12LL] [i_6] [i_12])))))));
                            arr_47 [i_2] [i_3] [(_Bool)1] [i_2] [i_6] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_36 [i_6]))) || (((/* implicit */_Bool) arr_37 [18] [(short)5] [i_4] [(short)5] [18] [i_6])))))));
                            arr_48 [i_3] [i_12 + 2] [i_4 + 1] [6ULL] [i_6] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_38 [i_2] [i_2])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_10 [(unsigned char)9])) == (((int) arr_40 [i_2] [i_3] [19] [i_6] [i_6] [(unsigned char)7])))))));
                            var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2])))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            var_36 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_14] [i_14] [i_14])) ? (arr_40 [i_14] [i_14] [(unsigned short)8] [i_4] [i_14] [(unsigned char)22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [14] [14]))))))));
                            var_37 = ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_4 - 1]))));
                            arr_54 [i_2] [i_2] [i_2] [i_13] [i_14] = ((/* implicit */_Bool) (+(arr_53 [i_3] [i_13] [i_13])));
                        }
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
                        {
                            var_38 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_15] [i_15])))))));
                            var_39 = ((/* implicit */int) arr_18 [i_2] [i_4 + 1] [18ULL]);
                            var_40 = ((/* implicit */long long int) (-(((/* implicit */int) arr_44 [i_4 - 1] [i_13] [i_13] [i_13]))));
                        }
                        for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
                        {
                            var_41 = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_13] [i_13] [i_13] [i_13] [i_4] [i_4]));
                            arr_59 [i_2] [i_2] [i_13] [(unsigned short)14] [i_2] = ((/* implicit */int) ((arr_40 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_13] [i_4 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_4] [i_4 - 1] [i_4 - 1] [(unsigned char)10] [(unsigned char)10])))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            var_42 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_61 [(unsigned char)17] [i_4 - 1] [i_4 - 1])) >= (((/* implicit */int) arr_61 [i_4] [i_4 - 1] [i_4 - 1]))));
                            var_43 = ((/* implicit */signed char) arr_41 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [(_Bool)1]);
                        }
                        arr_62 [i_13] [i_13] [i_13] [i_13] = (i_13 % 2 == 0) ? (((((((arr_42 [i_13]) - (arr_60 [i_13] [i_2] [9] [12LL] [i_13]))) + (2147483647))) >> ((((~(arr_18 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21]))) + (3162844442354283359LL))))) : (((((((((arr_42 [i_13]) - (arr_60 [i_13] [i_2] [9] [12LL] [i_13]))) - (2147483647))) + (2147483647))) >> ((((~(arr_18 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21]))) + (3162844442354283359LL)))));
                    }
                    var_44 += ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_10 [i_4 - 1]), (arr_10 [i_4 - 1])))), ((-(((/* implicit */int) arr_10 [i_4 + 1]))))));
                    arr_63 [i_4] = ((/* implicit */signed char) arr_61 [i_2] [i_2] [i_4 + 1]);
                    var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_28 [i_2] [i_3]))))))) ? ((-(((/* implicit */int) min((arr_23 [i_2] [(unsigned char)16] [(unsigned char)16] [i_2] [i_2] [i_4 - 1] [0U]), (arr_23 [i_4] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)52585))))))));
                }
            } 
        } 
        var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2]))));
    }
    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
    {
        arr_66 [(_Bool)1] = ((/* implicit */_Bool) (~(1569343826093981333LL)));
        var_47 -= ((/* implicit */unsigned char) ((unsigned short) (-(((/* implicit */int) ((unsigned char) arr_12 [i_18] [11ULL] [i_18]))))));
        /* LoopNest 2 */
        for (int i_19 = 1; i_19 < 18; i_19 += 3) 
        {
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                {
                    arr_73 [i_18] [i_18] [i_19] [i_18] = ((/* implicit */unsigned char) max((max((((((/* implicit */int) arr_45 [i_18] [i_18] [i_18] [i_20])) * (((/* implicit */int) arr_23 [(unsigned char)3] [i_18] [i_19] [i_19] [i_19] [i_18] [i_18])))), (((int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_52 [i_20] [i_20] [i_19 + 1] [(unsigned short)9] [(unsigned short)9]), (((/* implicit */int) arr_68 [i_18] [i_19] [i_19]))))))))));
                    var_48 = ((/* implicit */unsigned char) (~((~(arr_22 [(short)1] [i_19 - 1] [i_19 - 1])))));
                }
            } 
        } 
        var_49 = ((/* implicit */int) max((var_49), (((/* implicit */int) max(((unsigned short)63597), ((unsigned short)63614))))));
    }
    var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((-8338395664525236939LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
