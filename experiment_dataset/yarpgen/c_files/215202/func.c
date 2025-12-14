/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215202
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
    var_14 ^= ((/* implicit */long long int) (~((~(max((((/* implicit */unsigned long long int) var_2)), (15216477780539517311ULL)))))));
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) (unsigned char)104))))) ? (((long long int) (-(((/* implicit */int) var_13))))) : (max((max((((/* implicit */long long int) var_5)), (var_11))), (((/* implicit */long long int) var_9))))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) max((((short) min((var_11), (((/* implicit */long long int) (unsigned char)1))))), (((short) max((var_8), (((/* implicit */unsigned long long int) (short)-9926)))))));
        arr_4 [i_0] = max((min((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (arr_3 [i_0 - 2]))), (((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned short) arr_1 [i_0 + 1] [i_0])), (var_4))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-11180)))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_11))));
    }
    for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
    {
        var_18 -= ((/* implicit */unsigned char) ((unsigned short) ((long long int) arr_0 [i_1 - 2])));
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned char) arr_1 [i_1 - 1] [i_1 - 2]))), ((~(arr_3 [i_1 - 2])))));
    }
    for (int i_2 = 3; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (1784109288286979190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2 + 1] [i_2 - 3]))))), ((~((~(arr_3 [i_2])))))));
        var_21 = ((/* implicit */unsigned long long int) var_6);
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_0 [i_2 + 1]), (((/* implicit */unsigned short) arr_7 [i_2 - 3]))))), ((+(((/* implicit */int) arr_0 [i_2 - 3]))))));
        arr_10 [i_2] = ((/* implicit */int) max((max((var_10), (((/* implicit */long long int) 1808453799)))), (((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (-3358602161298559388LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1])))))));
        var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) ((arr_9 [i_2]) == (((/* implicit */unsigned long long int) var_5))))))) >= (max((((/* implicit */int) min((arr_0 [i_2]), (((/* implicit */unsigned short) (short)-27037))))), (((((/* implicit */int) (unsigned short)33900)) >> (((((/* implicit */int) arr_7 [i_2])) - (25135)))))))));
    }
    for (int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */unsigned char) min((arr_13 [i_3 - 1]), ((+(arr_13 [i_3 + 1])))));
        arr_16 [i_3] = ((arr_9 [i_3]) << (((((/* implicit */int) ((short) arr_13 [i_3 - 2]))) - (24907))));
        arr_17 [i_3] = ((/* implicit */unsigned short) (~(arr_13 [i_3 - 1])));
    }
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */unsigned long long int) arr_2 [i_4]);
        /* LoopSeq 4 */
        for (long long int i_5 = 3; i_5 < 12; i_5 += 1) /* same iter space */
        {
            arr_23 [i_5 - 2] [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((arr_12 [i_5 - 2]) | (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) max((min((arr_21 [i_4]), (((/* implicit */unsigned short) (short)11180)))), (((/* implicit */unsigned short) arr_1 [i_4] [i_4]))))))));
            arr_24 [i_4] [i_5] = ((/* implicit */unsigned char) arr_0 [i_5 - 3]);
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min(((unsigned short)34779), (((/* implicit */unsigned short) arr_7 [i_5])))), (arr_0 [i_4])))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_0)))))))));
        }
        for (long long int i_6 = 3; i_6 < 12; i_6 += 1) /* same iter space */
        {
            arr_27 [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_4])), ((+(((/* implicit */int) (short)-18249))))));
            var_25 = ((/* implicit */unsigned long long int) arr_11 [i_6]);
            var_26 ^= (short)-11181;
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                var_27 -= ((/* implicit */unsigned short) ((short) arr_22 [i_6 - 3] [i_6 - 3] [i_6 - 2]));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((unsigned long long int) (-(arr_13 [i_6 + 1]))))));
                    var_29 -= ((/* implicit */short) -1370477676389648693LL);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6]))) - (arr_2 [i_4])))) - (var_1)));
                    arr_32 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) : (((((/* implicit */_Bool) (short)11228)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6]))) : (arr_12 [i_6])))));
                    var_31 ^= ((/* implicit */unsigned long long int) (~(var_10)));
                }
                for (short i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (arr_3 [i_7])));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        var_33 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_7)) ? (arr_19 [i_7]) : (((/* implicit */unsigned long long int) arr_34 [i_4] [i_6] [i_6] [i_6] [i_6]))))));
                        arr_37 [i_4] [i_4] [i_6] [i_9] [i_10] = ((/* implicit */unsigned short) var_11);
                        var_34 = ((/* implicit */short) (+(arr_30 [i_4] [i_6 - 3] [i_6 - 3] [i_7] [i_7] [i_7])));
                    }
                }
                var_35 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_6 - 2] [i_6] [i_6] [i_6] [i_6] [i_6 + 1]))));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_6])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_4] [i_6] [i_7] [i_4] [i_4] [i_7]))));
            }
            for (unsigned long long int i_11 = 4; i_11 < 10; i_11 += 4) 
            {
                arr_41 [i_4] [i_6] [i_6 - 3] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (short)-27029)), (max((((/* implicit */unsigned long long int) arr_18 [i_4])), (min((16243200350325604985ULL), (((/* implicit */unsigned long long int) arr_33 [i_4] [i_6] [i_6]))))))));
                var_38 = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) var_13)), (arr_13 [i_11 + 2])))));
                var_39 = ((/* implicit */short) (((~(max((var_8), (((/* implicit */unsigned long long int) arr_11 [i_6])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((unsigned short) arr_29 [i_6]))) : (((/* implicit */int) arr_31 [i_6] [i_6])))))));
            }
        }
        /* vectorizable */
        for (long long int i_12 = 3; i_12 < 12; i_12 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) (((-(arr_3 [i_12]))) <= (((/* implicit */unsigned long long int) var_5)))))));
            var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_11 [(unsigned short)14])))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned char)2])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) >= (arr_19 [i_4]))))));
            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) (!(((/* implicit */_Bool) var_13)))))));
            var_43 = ((((/* implicit */_Bool) arr_28 [12LL] [i_12 + 1] [i_4])) ? (arr_12 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_12 - 3] [i_12 - 3]))));
        }
        for (int i_13 = 1; i_13 < 11; i_13 += 1) 
        {
            var_44 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)19614))))))));
            var_45 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) -1248802769)), (min((((/* implicit */unsigned long long int) arr_7 [i_13 + 1])), (var_7))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        var_46 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_4] [i_4] [i_4])) % (((/* implicit */int) arr_22 [i_4] [i_4] [i_4]))))) > (min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_4))))), (min((var_1), (((/* implicit */unsigned long long int) -787813616))))))));
        arr_47 [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)43)), (arr_22 [i_4] [i_4] [i_4])))) ? (((((/* implicit */_Bool) (~(arr_13 [i_4])))) ? (arr_13 [i_4]) : (((/* implicit */unsigned long long int) (~(var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43)))));
    }
    for (unsigned short i_14 = 0; i_14 < 13; i_14 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_15 = 3; i_15 < 9; i_15 += 1) 
        {
            var_47 = ((/* implicit */unsigned char) min((((long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14]))) - (var_10)))));
            var_48 = ((/* implicit */unsigned char) (-(-140241917)));
            arr_52 [i_15] [i_15] [i_14] = ((/* implicit */int) (-(arr_3 [i_14])));
        }
        /* vectorizable */
        for (long long int i_16 = 1; i_16 < 12; i_16 += 1) 
        {
            arr_56 [i_14] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) 2057987928))));
            var_49 ^= ((/* implicit */short) ((((/* implicit */int) arr_31 [(unsigned short)0] [i_16 + 1])) >> (((((/* implicit */int) (unsigned char)255)) - (242)))));
            var_50 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_16] [i_16] [i_16 - 1]))) > (var_2)));
        }
        var_51 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((~(var_11))), (min((var_2), (((/* implicit */long long int) arr_45 [i_14]))))))), (var_7)));
        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) arr_46 [i_14] [i_14]))));
    }
}
