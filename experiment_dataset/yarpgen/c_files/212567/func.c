/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212567
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-3434))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((max((1186305002102963414ULL), (17260439071606588201ULL))) % (((/* implicit */unsigned long long int) arr_6 [i_0 - 3] [i_0 - 3] [i_0 - 1]))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0]))))), (17260439071606588190ULL)));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) max(((+(17260439071606588181ULL))), (max((17260439071606588183ULL), (((/* implicit */unsigned long long int) var_7))))));
    }
    for (long long int i_3 = 3; i_3 < 13; i_3 += 2) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3])) / (((/* implicit */int) var_6))))), (((1186305002102963425ULL) ^ (((/* implicit */unsigned long long int) var_3)))))));
        arr_13 [i_3] [i_3] = ((/* implicit */signed char) ((max((17260439071606588180ULL), (17260439071606588190ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_3 - 1])))))));
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (unsigned short i_5 = 3; i_5 < 13; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_14 += ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (1186305002102963433ULL))) * (17260439071606588179ULL))));
                        var_15 = ((/* implicit */signed char) max((1186305002102963429ULL), (17260439071606588182ULL)));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 3) 
                        {
                            arr_26 [i_3] [i_3] [i_3] [12] [i_3] [i_7] = ((/* implicit */_Bool) max(((~(arr_2 [i_5 - 1]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (arr_2 [i_5 - 2]))))));
                            var_16 = ((/* implicit */int) (+((+(1186305002102963432ULL)))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_17 -= ((/* implicit */int) max((((/* implicit */long long int) max((arr_24 [i_3] [i_4] [i_6 + 1] [i_6] [i_5] [i_5 + 1] [i_6]), (((/* implicit */unsigned short) var_9))))), (var_8)));
                            var_18 -= ((/* implicit */signed char) var_4);
                            arr_30 [i_3] [i_3] [i_5] [i_6] [i_8] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1186305002102963401ULL)))))) * (arr_22 [i_3 - 2])))) ? (((/* implicit */long long int) ((int) arr_4 [i_3]))) : (arr_3 [i_5] [i_5] [i_5])));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_17 [i_4] [i_4] [i_4] [i_4])) | (1186305002102963401ULL)))) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))))) : (((/* implicit */long long int) arr_19 [i_6 - 2] [i_6 - 2] [i_6] [5]))))) == (max((((/* implicit */unsigned long long int) var_4)), (max((((/* implicit */unsigned long long int) arr_15 [i_3] [i_4] [i_3])), (1186305002102963433ULL))))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_20 = var_7;
            var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_6 [i_3] [4] [5ULL])) % (17260439071606588186ULL)));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_27 [i_3 - 1] [i_9] [i_9] [i_3 - 1] [i_9]))));
        }
    }
    /* vectorizable */
    for (long long int i_10 = 3; i_10 < 13; i_10 += 2) /* same iter space */
    {
        var_23 = 1186305002102963432ULL;
        /* LoopSeq 4 */
        for (long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) 17260439071606588190ULL))))));
            var_25 = ((/* implicit */signed char) ((1186305002102963401ULL) + (17260439071606588198ULL)));
            arr_39 [i_10] [i_11] [i_11] = ((/* implicit */long long int) arr_29 [i_10 + 1] [i_10] [i_11] [i_10] [i_11]);
        }
        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_10 + 1])) ? (((/* implicit */long long int) arr_43 [i_10 - 3] [i_12] [i_10])) : (arr_2 [i_12])));
            var_27 = ((/* implicit */unsigned short) ((int) arr_34 [i_10 - 1]));
            var_28 = ((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) var_2)) : (arr_17 [i_10] [i_10] [i_10 - 1] [i_10])))) : ((+(1186305002102963428ULL)))));
            var_29 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_36 [i_10])) : (((/* implicit */int) arr_34 [i_10])))));
        }
        for (int i_13 = 4; i_13 < 13; i_13 += 4) 
        {
            arr_46 [i_10] [i_13] [i_13] = (!(var_2));
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                {
                    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) arr_19 [i_10] [i_13 - 4] [i_10] [i_16])) != (var_3)))) | ((~(((/* implicit */int) arr_18 [8ULL] [8ULL] [i_14]))))));
                            arr_53 [i_10] = ((/* implicit */unsigned int) (-(arr_19 [i_10] [i_13 - 4] [i_13 - 4] [i_14])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 1; i_17 < 11; i_17 += 2) 
            {
                arr_56 [i_10] [i_13] = ((/* implicit */int) ((arr_3 [i_13 + 1] [i_13 + 1] [i_13 - 4]) | (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                var_31 = ((/* implicit */long long int) arr_55 [i_10] [i_10]);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_13 - 2] [i_13 - 2] [i_13 + 1])) ? (arr_45 [i_13 + 1] [i_13] [i_13 - 3]) : (((/* implicit */int) arr_55 [i_13 + 1] [i_13 - 3]))));
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((long long int) var_8)) % (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_17 + 1] [i_17 - 1] [i_17 + 3]))))))));
            }
            var_34 -= ((_Bool) var_10);
        }
        for (unsigned short i_18 = 1; i_18 < 13; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                for (int i_20 = 0; i_20 < 14; i_20 += 2) 
                {
                    {
                        var_35 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (arr_45 [i_10] [i_18] [i_18 + 1]) : (arr_45 [i_10] [i_18] [i_18 - 1])));
                        var_36 = ((/* implicit */unsigned char) var_2);
                        var_37 += ((17260439071606588209ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_10 + 1] [i_10] [i_19] [i_20] [i_10 - 2]))));
                        var_38 -= (~(((/* implicit */int) arr_55 [i_10] [i_18])));
                    }
                } 
            } 
            arr_65 [i_10] = (-(((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_5 [i_10] [i_10] [i_10])) - (32))))));
        }
        var_39 = ((/* implicit */int) 1186305002102963409ULL);
    }
}
