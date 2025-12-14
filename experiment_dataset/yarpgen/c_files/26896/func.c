/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26896
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
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) (((+(2614593381213485374LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
    var_20 = ((/* implicit */unsigned short) ((((min((0ULL), (((/* implicit */unsigned long long int) -2813611141322354037LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : ((+(var_4)))))) : (((unsigned long long int) ((((/* implicit */_Bool) 2779503882U)) || (((/* implicit */_Bool) var_15)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_4 [i_0])), (max((0LL), (1658839121489615070LL))))) + (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_0] [i_0]))) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((var_2) / (((/* implicit */int) arr_2 [(unsigned char)21])))))))));
                var_22 ^= ((/* implicit */long long int) ((unsigned int) ((signed char) arr_7 [i_1] [i_1])));
            }
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) (unsigned char)123);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_12 [i_0] [i_1] [i_3] = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (arr_3 [i_0]));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3])))))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_0 [(signed char)21])) : (((/* implicit */int) (unsigned char)80))))) ? (((/* implicit */long long int) arr_9 [i_0])) : (arr_11 [i_0] [i_1] [i_3] [i_3] [i_4] [i_3])));
                }
                var_25 = ((9303117401565483152ULL) % (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */long long int) var_9)) : (3885098292782498571LL)))))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)8))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8432392295993609817LL))))))));
                /* LoopSeq 3 */
                for (long long int i_5 = 1; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] [(unsigned char)3] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_8 [i_5 - 1] [9LL] [9LL] [i_3])) ? (((/* implicit */unsigned long long int) arr_8 [18U] [18U] [i_3] [i_5])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-49))) + (var_12)))))));
                    var_26 = ((/* implicit */long long int) max((var_26), (((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5]))) - ((+(arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5] [i_5] [i_5 - 1])))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_1] [i_3] [i_5] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((int) var_0)));
                        var_27 = 7305376533755274453ULL;
                        arr_22 [i_6 - 1] [i_0] [i_0] [i_0] [i_0] = 987046668036775206LL;
                        var_28 |= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                    }
                    arr_23 [i_0] [(unsigned char)3] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) 11106579182358295953ULL));
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((arr_9 [i_0]), (arr_9 [i_0])));
                }
                for (long long int i_7 = 1; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_0] [i_0] [(signed char)7] [(unsigned char)8] [i_1] [i_0] = ((/* implicit */unsigned char) (!((((+(((/* implicit */int) (signed char)31)))) <= (((/* implicit */int) min((var_7), (var_15))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) 3642095557U);
                        arr_30 [(unsigned char)21] [i_1] [i_3] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)23);
                        var_30 = ((unsigned char) ((unsigned long long int) 4171674094202891784ULL));
                        var_31 = ((/* implicit */long long int) 0ULL);
                    }
                    for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
                    {
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((signed char) arr_3 [i_3]))) ? (((/* implicit */unsigned long long int) arr_11 [i_9 - 1] [i_7 - 1] [i_1] [i_3] [i_3] [i_1])) : (((unsigned long long int) (unsigned short)31)))))))));
                        arr_33 [i_9] [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_3] [i_0] [i_7 + 2] [i_7 + 2]);
                    }
                    /* vectorizable */
                    for (long long int i_10 = 3; i_10 < 22; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(arr_35 [i_10] [i_7] [i_0] [(unsigned char)14] [(unsigned char)14]))))));
                        var_34 ^= ((/* implicit */unsigned char) ((unsigned int) var_3));
                        arr_36 [i_7] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                    }
                    arr_37 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)255)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_7])) % (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_0 [i_1]))))) : ((~(562948879679488LL)))))));
                }
                /* vectorizable */
                for (long long int i_11 = 1; i_11 < 22; i_11 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((unsigned short) arr_7 [i_1] [i_0])))));
                    var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_28 [i_0] [i_1])))))));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 24; i_12 += 1) 
            {
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0]))));
                arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
            }
            var_38 = ((/* implicit */unsigned char) ((unsigned long long int) (+((+(2095316513))))));
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) (signed char)6))));
            var_40 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 178921127U)) ? (268433408ULL) : (((/* implicit */unsigned long long int) arr_20 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) 3172512512015923426ULL))))), (((/* implicit */int) max(((unsigned char)255), (((unsigned char) arr_11 [i_0] [20LL] [i_1] [i_0] [i_0] [i_0])))))));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
        {
            arr_48 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) var_9)) - (arr_20 [i_0] [i_0] [i_0] [i_0] [22] [22])))));
            var_41 = ((((min((var_13), (((/* implicit */unsigned long long int) arr_47 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 245189398U)) && (((/* implicit */_Bool) (unsigned short)41517)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */unsigned long long int) (~(arr_11 [i_0] [i_0] [i_13] [i_13] [i_13] [i_13])))), (((arr_38 [i_0] [i_0] [i_13] [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_0]))))))));
            arr_49 [i_0] = ((/* implicit */unsigned long long int) max((arr_47 [i_0]), (min((((/* implicit */unsigned int) var_1)), (arr_47 [i_0])))));
        }
        for (long long int i_14 = 0; i_14 < 24; i_14 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) var_5);
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                var_43 = max((arr_41 [i_0] [i_0] [i_15]), (((/* implicit */unsigned long long int) ((arr_51 [i_0]) / (arr_51 [i_0])))));
                arr_54 [i_0] [i_14] [i_15] [i_0] = ((long long int) ((((/* implicit */_Bool) arr_2 [i_15])) ? (137438953471ULL) : (((/* implicit */unsigned long long int) 7443483344494397228LL))));
                var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) max((((long long int) (-(((/* implicit */int) arr_0 [i_15]))))), (var_14))))));
            }
            var_45 = arr_3 [i_0];
            arr_55 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) (unsigned char)63))) : ((~(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) ((long long int) 3595043958764079690LL))) ? (((unsigned long long int) var_18)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        }
        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_50 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((arr_28 [i_0] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0])))))))));
        arr_56 [i_0] = var_11;
        var_47 ^= arr_10 [14ULL] [i_0] [(signed char)18] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 3) 
    {
        var_48 = ((/* implicit */long long int) ((arr_34 [i_16] [17LL] [i_16] [(signed char)3] [17LL] [i_16]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11289)))));
        var_49 += ((/* implicit */unsigned short) (~(35184372088824LL)));
        arr_59 [i_16] [(signed char)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (4871003044411896346ULL)))) || (((/* implicit */_Bool) arr_32 [i_16] [i_16] [i_16] [i_16]))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        arr_63 [(unsigned char)18] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3850808450699522133LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_20 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) / (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) arr_18 [i_17] [i_17] [i_17] [i_17])))))));
        arr_64 [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_52 [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_17]))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_25 [i_17] [i_17] [(signed char)9] [i_17])))));
    }
}
