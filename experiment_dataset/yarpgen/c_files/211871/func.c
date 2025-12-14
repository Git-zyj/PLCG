/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211871
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((var_5) < (((/* implicit */unsigned long long int) var_2)))))));
    var_11 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(var_0))) : (((var_3) + (var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))));
            arr_6 [2U] = ((/* implicit */int) ((_Bool) arr_4 [i_0] [(_Bool)1]));
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10ULL]))))))));
        }
        var_14 = ((/* implicit */unsigned char) ((arr_4 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) || (var_6)))))));
        /* LoopSeq 4 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_9 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */int) arr_0 [i_0]))))) * (arr_3 [i_0]));
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(var_6)));
            var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) arr_2 [i_3]))));
            /* LoopSeq 2 */
            for (int i_4 = 3; i_4 < 21; i_4 += 3) /* same iter space */
            {
                var_17 |= ((((/* implicit */int) arr_11 [i_4 + 2] [i_4] [i_4 - 3])) / (((/* implicit */int) arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_0 [(signed char)19])) != (arr_8 [i_4] [i_4])))) != (((((/* implicit */int) (unsigned short)49943)) & (((/* implicit */int) (short)19713))))));
                            arr_22 [0] [(unsigned char)12] [i_4 + 1] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 - 1])) ? (((/* implicit */int) arr_14 [i_4] [(signed char)18] [i_4] [i_4 + 2])) : (((/* implicit */int) arr_15 [i_4]))));
                            arr_23 [i_6] [i_5] [i_4] [i_3] [i_0] = ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned int) arr_2 [i_0])))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [(signed char)6] [(signed char)6] [i_5] [i_6]))));
                            var_19 = (~(((/* implicit */int) arr_11 [i_4 + 1] [i_4] [i_3])));
                        }
                    } 
                } 
            }
            for (int i_7 = 3; i_7 < 21; i_7 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
                {
                    arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_8 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */int) var_7))))))));
                    /* LoopSeq 3 */
                    for (int i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        var_20 = (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) arr_24 [i_0])) | (arr_8 [i_0] [(signed char)6]))) : (arr_25 [i_8 + 1] [i_3] [i_7] [i_7]));
                        var_21 = ((/* implicit */unsigned char) arr_28 [i_7 - 3] [i_8 - 1] [i_7]);
                        var_22 += ((/* implicit */unsigned char) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7] [i_7 + 2] [i_8 - 1])))));
                        var_23 = ((/* implicit */int) max((var_23), (((((/* implicit */_Bool) arr_31 [i_0] [i_3] [i_7 + 1] [i_8] [i_7 + 1])) ? (((/* implicit */int) arr_31 [i_9] [i_8 + 2] [i_7 + 1] [i_3] [i_0])) : (((/* implicit */int) arr_31 [i_9] [i_8 - 1] [i_7] [i_3] [i_0]))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        arr_35 [i_7] [i_7 - 2] [i_10] = ((/* implicit */int) var_0);
                        var_24 = ((/* implicit */int) arr_16 [i_0] [i_3] [i_7] [i_7 + 1] [i_7] [i_10]);
                        var_25 += ((/* implicit */_Bool) var_0);
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_19 [i_0] [i_0] [i_7 - 3] [i_7 - 3])) / (((/* implicit */int) arr_24 [i_8])))) << (((((var_4) << (((var_3) - (7433883174555774741ULL))))) - (3623878627U)))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 += ((/* implicit */unsigned char) arr_18 [(unsigned short)15] [(signed char)20] [i_8 + 3]);
                        arr_38 [i_0] [i_3] [i_7 - 2] [i_8] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -8312193888455221922LL)) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (signed char)116))));
                        var_28 = ((/* implicit */int) min((var_28), (((arr_25 [i_7 - 2] [i_7 - 2] [i_7 + 1] [i_8 + 2]) - (arr_25 [i_7 + 2] [i_8] [i_7 + 2] [i_8 + 2])))));
                        var_29 |= ((/* implicit */long long int) arr_16 [i_3] [i_3] [i_8 + 2] [i_7] [i_3] [14]);
                    }
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        arr_43 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_7 + 1])) || (((/* implicit */_Bool) arr_32 [i_13]))));
                        var_30 = ((/* implicit */_Bool) ((unsigned short) arr_25 [i_3] [i_3] [i_7 - 3] [i_13]));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((long long int) (short)16960)))));
                    }
                    var_32 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_3]))))) / (((long long int) arr_0 [(unsigned char)1]))));
                    arr_44 [i_0] [i_3] [8] [i_3] |= ((/* implicit */short) arr_17 [(_Bool)1]);
                }
                arr_45 [(_Bool)1] [i_0] [i_7] [5] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7] [i_7 - 1]))) + (var_3)));
                var_33 = ((/* implicit */int) ((signed char) arr_41 [i_7] [i_7 - 1] [i_7] [i_0] [i_0] [i_0]));
                var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) arr_19 [20] [i_7] [i_7] [i_7]))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_48 [i_0] [i_3] [i_7 - 1] [i_7] [i_14] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_15 [i_7]))))) + (((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (((/* implicit */int) arr_12 [10LL])) : (((/* implicit */int) arr_47 [i_7] [i_7] [i_7] [i_14]))))));
                    var_35 += ((/* implicit */unsigned char) (~(3662071748U)));
                }
            }
            var_36 = ((/* implicit */int) ((arr_28 [i_0] [i_3] [i_3]) != (arr_28 [i_0] [i_3] [i_3])));
            var_37 = ((/* implicit */unsigned int) ((arr_42 [i_0] [10ULL] [i_0] [i_3] [i_3]) % (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [14LL])))));
            var_38 += ((/* implicit */_Bool) ((((/* implicit */int) (short)-16961)) % (-153692418)));
        }
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_8 [i_0] [i_0])) : (((var_2) / (var_2))))))));
            var_40 = ((/* implicit */_Bool) (+(((arr_41 [i_15] [(signed char)2] [(_Bool)1] [i_15] [i_15] [i_15]) ^ (((/* implicit */int) arr_47 [i_15] [22] [i_0] [i_0]))))));
            var_41 ^= (!(((/* implicit */_Bool) arr_0 [i_0])));
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [i_15] [i_15])) | ((+(((/* implicit */int) var_7)))))))));
        }
        for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_43 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_16] [i_0])) && (((/* implicit */_Bool) (~(var_5))))));
                arr_55 [i_16] [i_0] [i_16] [i_16] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_16]))) - (var_0))) + (((/* implicit */unsigned long long int) var_2))));
            }
            for (int i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                arr_59 [i_18] [i_18] |= ((/* implicit */unsigned int) ((arr_17 [i_0]) <= (((/* implicit */unsigned long long int) arr_26 [i_18] [i_16] [i_18]))));
                /* LoopSeq 3 */
                for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) 
                {
                    var_44 &= ((/* implicit */_Bool) ((arr_21 [i_0] [i_16] [i_18] [i_19]) ? (((arr_4 [i_16] [i_16]) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) var_4))));
                    var_45 = ((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [19] [i_18]))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) arr_40 [i_0] [i_18] [i_18])))))));
                    arr_62 [i_0] [(_Bool)1] [i_16] [i_16] [i_0] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_31 [i_0] [i_0] [(short)1] [i_18] [(unsigned short)9]))) | (var_1)));
                }
                for (long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                {
                    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) (+(arr_25 [i_16] [i_16] [i_20] [i_20]))))));
                    var_48 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [19] [19] [i_20])) ? (((/* implicit */int) arr_56 [i_20] [i_18] [i_16])) : (((/* implicit */int) arr_56 [i_0] [i_16] [i_20]))));
                }
                for (unsigned short i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    var_49 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) var_8))))));
                    var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) var_5))));
                    var_51 &= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)106)) & (((/* implicit */int) (signed char)-117))));
                }
                var_52 = ((((/* implicit */int) var_7)) / (arr_33 [i_18]));
                var_53 |= ((int) arr_34 [i_18] [i_18] [i_18] [i_18] [i_18]);
            }
            var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) ((((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_0]))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)19713)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)121))))))))));
        }
    }
    for (unsigned short i_22 = 4; i_22 < 10; i_22 += 2) 
    {
        var_55 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-111)) % (((/* implicit */int) (signed char)-1))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16958))) : (18ULL))))) % (((/* implicit */unsigned long long int) 1279213070))));
        var_56 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2))) | (((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) var_6)))))))) : (((((/* implicit */_Bool) arr_54 [i_22 - 1] [i_22 - 1] [i_22])) ? (min((var_8), (((/* implicit */unsigned long long int) arr_53 [i_22] [i_22] [i_22] [i_22])))) : (((/* implicit */unsigned long long int) ((int) var_3)))))));
        var_57 = ((/* implicit */unsigned char) min((((/* implicit */short) ((signed char) arr_24 [i_22 - 3]))), (arr_7 [11LL] [i_22] [i_22 + 1])));
        arr_70 [(_Bool)1] = (~(((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_68 [i_22 - 3]))) > (var_8))), (arr_52 [3ULL] [i_22] [(unsigned char)18])))));
    }
}
