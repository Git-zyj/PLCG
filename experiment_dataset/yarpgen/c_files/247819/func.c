/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247819
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
    var_15 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_16 += ((/* implicit */signed char) (((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_0 - 1])))) & (((/* implicit */int) arr_7 [i_3] [i_1] [i_1] [i_0 + 4]))));
                        var_17 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0 - 2])))), (min((((/* implicit */int) arr_2 [i_1])), (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned short)11234)) : (((/* implicit */int) (unsigned char)159))))))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [i_0 + 4])), (max(((+(arr_0 [i_0] [i_0]))), (((arr_0 [i_0] [i_0]) - (15606954926595668098ULL)))))));
        var_19 = ((/* implicit */long long int) 11854233184895532304ULL);
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_20 = ((/* implicit */signed char) 3075840875U);
        arr_14 [i_4] = ((/* implicit */_Bool) arr_1 [i_4]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_5] [i_5 + 1] = ((/* implicit */signed char) arr_0 [i_4] [i_4]);
                    var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21657))));
                    arr_22 [i_4 + 2] [i_4] [i_6] = ((/* implicit */unsigned char) arr_8 [i_4] [i_4] [i_4]);
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((var_8) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_4]))))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned short) max(((unsigned char)129), (((/* implicit */unsigned char) (_Bool)1))))), (arr_24 [i_7])));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned int) (+((~(arr_13 [(signed char)10] [i_7])))));
        arr_27 [i_7] = ((/* implicit */unsigned short) var_5);
        /* LoopNest 3 */
        for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                for (signed char i_10 = 3; i_10 < 9; i_10 += 2) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_7]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            arr_39 [i_8] [i_8] [i_8] [(signed char)3] [i_8] [i_10] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)159))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            arr_42 [i_7] [i_10] = ((/* implicit */signed char) var_1);
                            var_26 *= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) & (var_10)));
                            var_27 += ((/* implicit */short) max((((/* implicit */unsigned short) max((arr_23 [i_7]), (arr_23 [i_12])))), (var_11)));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 3; i_13 < 9; i_13 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (arr_0 [(unsigned short)16] [i_8])));
                            var_29 = ((/* implicit */int) var_10);
                            var_30 = ((/* implicit */_Bool) 7171053609241758717LL);
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_14] [i_10] [i_10] [i_10 - 3])) ? (((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_10 + 1])) : (((/* implicit */int) arr_18 [17LL] [17LL] [i_14] [i_10 + 1])))))));
                            var_32 ^= ((/* implicit */signed char) ((var_5) ? (((/* implicit */int) arr_2 [i_10 + 1])) : (((/* implicit */int) arr_2 [i_10 - 2]))));
                            var_33 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) -7171053609241758706LL)) ? (((/* implicit */int) arr_16 [i_10] [i_10])) : (((/* implicit */int) var_6))))));
                        }
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) var_2))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
    {
        arr_51 [i_15] [i_15] = arr_17 [i_15] [i_15];
        var_35 += ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) - (((/* implicit */int) arr_48 [(signed char)2]))));
        /* LoopNest 3 */
        for (signed char i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            for (unsigned char i_17 = 1; i_17 < 8; i_17 += 2) 
            {
                for (unsigned int i_18 = 3; i_18 < 6; i_18 += 2) 
                {
                    {
                        arr_58 [i_15] [i_15] [i_15] [i_18] = ((arr_45 [i_15] [i_16] [i_17] [i_18]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37004))));
                        arr_59 [i_15] [i_15] [i_17] [i_18 - 1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_15])) / (((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15] [(unsigned char)9] [i_15] [i_15]))));
                    }
                } 
            } 
        } 
    }
}
