/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241056
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */long long int) var_2);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) (~(((-6835636030135407745LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180)))))));
                            var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(var_6)))) ^ (((unsigned long long int) 128LL))))) ? ((~(((unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (+(((arr_10 [i_0] [i_1] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                            var_16 = ((/* implicit */unsigned short) ((unsigned char) max((arr_3 [i_3]), (arr_3 [i_3]))));
                            var_17 = ((/* implicit */int) var_12);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    arr_19 [i_4] [i_5] [i_5] [i_6] = ((/* implicit */long long int) (+(9538737092793010775ULL)));
                    arr_20 [i_5] = ((/* implicit */_Bool) var_11);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 1804874577)) ? (arr_17 [i_4] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (1LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_5]), (var_3))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) max((min((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))))), (((/* implicit */unsigned int) ((var_0) ^ (((/* implicit */int) (unsigned char)69))))))), (var_10)));
    /* LoopSeq 2 */
    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((/* implicit */short) (((-(((/* implicit */int) var_2)))) + ((-(((/* implicit */int) arr_21 [i_7]))))));
        /* LoopSeq 2 */
        for (long long int i_8 = 3; i_8 < 10; i_8 += 4) 
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9538737092793010763ULL)) ? (911005221) : (((/* implicit */int) (unsigned char)192))))) ? (((/* implicit */int) (unsigned char)137)) : (((((/* implicit */_Bool) 4294836224U)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (signed char)7))))));
            arr_26 [i_7] [i_7] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((unsigned short) (-(6937871686067901916ULL))))), (651603270U)));
        }
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((1429047298), (((/* implicit */int) (unsigned char)216)))))))))))));
            arr_29 [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) var_2);
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 13; i_10 += 1) 
            {
                for (signed char i_11 = 1; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_0) - (((/* implicit */int) var_2))))) ? (max((((/* implicit */int) (unsigned char)138)), (arr_30 [i_7] [i_10 - 1]))) : (arr_28 [0ULL]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 1; i_12 < 13; i_12 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_30 [i_9] [i_11 + 1]))));
                            var_24 = max((((/* implicit */unsigned int) var_4)), (max((arr_35 [i_12 + 1] [i_12] [7] [(short)5] [i_12] [i_12 - 1]), (arr_31 [i_7] [i_9] [i_7]))));
                        }
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) 1165245407U))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_11)) - ((~(((/* implicit */int) (unsigned char)248)))))), (((/* implicit */int) var_7))));
        }
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)39))) != (var_6))))))) - ((~((~(arr_10 [i_7] [i_7] [i_7]))))))))));
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 14; i_13 += 1) 
        {
            var_28 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_13] [i_13] [10LL] [i_13])), (arr_22 [i_13])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) : (min((arr_6 [i_7] [0ULL]), (((/* implicit */unsigned long long int) (signed char)58)))))));
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (+((~(min((var_3), (((/* implicit */unsigned int) var_7)))))))))));
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
        {
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((((/* implicit */_Bool) min((arr_2 [i_7]), (((/* implicit */unsigned char) (_Bool)1))))) ? (var_9) : (((/* implicit */long long int) (~(var_10)))))) != (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)14))))))))));
            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(arr_6 [i_7] [i_14]))))));
            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)93)), (9538737092793010757ULL)))) ? (((/* implicit */int) min((arr_1 [i_14]), (arr_1 [i_7])))) : (((/* implicit */int) arr_1 [i_14]))));
            arr_42 [i_7] [i_7] [(short)3] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) ^ (max((arr_7 [i_7] [i_14] [i_7] [i_14]), (((arr_7 [i_7] [i_14] [i_14] [(short)5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)100)))))))));
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 1; i_16 < 13; i_16 += 2) 
            {
                for (unsigned short i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    {
                        var_33 |= (-(max((var_9), (((/* implicit */long long int) (unsigned char)178)))));
                        var_34 = ((/* implicit */unsigned short) (~(var_9)));
                        arr_49 [i_7] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1925625686)))))) != (min((((arr_44 [i_7]) ^ (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (unsigned char)115))))));
                        var_35 = ((/* implicit */unsigned short) min((max((max((var_9), (((/* implicit */long long int) arr_39 [i_7])))), (((/* implicit */long long int) ((((/* implicit */_Bool) -513502690138996877LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) : (arr_7 [i_7] [i_15] [i_15] [(_Bool)1])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((2282689780U), (((/* implicit */unsigned int) (signed char)-24))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) ^ (2282689773U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        arr_50 [i_7] [i_7] [i_7] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_7] [i_15] [i_16 + 1])) ? (((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_7] [i_17]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_17]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (((unsigned long long int) ((unsigned char) arr_8 [i_7] [i_7])))));
                    }
                } 
            } 
            var_36 = ((/* implicit */int) ((((unsigned long long int) arr_8 [(unsigned char)14] [i_15])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 14; i_18 += 1) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_7)) != (arr_34 [i_18] [i_18] [i_18])))));
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_18]))) : (var_10)))) ? (min((((/* implicit */long long int) arr_2 [i_18])), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_18])) ? (((/* implicit */int) arr_2 [i_18])) : (((/* implicit */int) arr_2 [i_18])))))));
        var_39 = (((-(var_8))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_18] [i_18] [i_18]))))));
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            for (short i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                {
                    var_40 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) - (36028797018963967LL)));
                    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) max((-622997572), (((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */long long int) arr_56 [i_18] [4LL] [i_18])) : (((((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_11))))) ^ (((long long int) (signed char)35))))));
                    var_42 = ((/* implicit */unsigned long long int) (signed char)-1);
                }
            } 
        } 
    }
}
