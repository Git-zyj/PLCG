/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213360
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
    var_13 &= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) var_5)) ? (-1354603037) : (((/* implicit */int) var_12))))))));
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_9) << (((var_3) - (1803638882U))))))))), ((((!(((/* implicit */_Bool) (signed char)-89)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((arr_1 [8ULL]) != (((/* implicit */int) (!(((((/* implicit */unsigned int) arr_1 [(signed char)18])) < (var_9))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) (signed char)64)) - (64)))));
            var_16 = ((/* implicit */_Bool) (short)15360);
            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)0))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)109)) && (var_12))))));
            var_18 = ((/* implicit */unsigned int) (~(var_10)));
        }
        var_19 = ((/* implicit */long long int) var_12);
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_2]))) ? ((-(((/* implicit */int) arr_5 [i_2] [i_2])))) : (((/* implicit */int) ((_Bool) min((var_5), (var_0)))))));
        var_21 = ((/* implicit */unsigned char) var_6);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        arr_12 [(_Bool)1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_10 [i_3])) ? (var_7) : (((/* implicit */unsigned int) var_4))))));
        arr_13 [i_3] [i_3] = ((arr_10 [i_3]) >> (((((var_12) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-109)))) + (119))));
        var_22 = ((/* implicit */unsigned short) var_0);
        var_23 = ((/* implicit */int) 141860360151089974LL);
    }
    for (short i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        arr_17 [i_4] = ((((/* implicit */_Bool) 1354603018)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) arr_14 [i_4] [(_Bool)1]))))))) : (min((((/* implicit */unsigned int) arr_11 [i_4 + 1])), ((~(1023U))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_10 [i_4 + 1]))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_4] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [17] [i_4] [i_4])) > (((((/* implicit */int) (signed char)-122)) - (((/* implicit */int) (short)19232))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) ((unsigned int) var_9));
                        var_27 = ((/* implicit */unsigned short) var_6);
                    }
                } 
            } 
            arr_27 [i_4] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7770)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-89)))))) ? (((/* implicit */int) arr_5 [i_5] [i_5])) : ((~(((/* implicit */int) var_2))))));
            /* LoopNest 3 */
            for (short i_8 = 3; i_8 < 12; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    for (unsigned short i_10 = 3; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)99)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_4 - 1] [i_4] [i_4] [i_4] [(unsigned short)12] [i_4] [i_4 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0)))))));
                            var_29 = ((/* implicit */unsigned short) ((var_8) > (((/* implicit */unsigned int) ((var_4) % (((/* implicit */int) arr_22 [i_4])))))));
                            arr_37 [i_4] [i_5] = var_5;
                            arr_38 [i_4 + 1] [i_5] [i_4 + 1] [i_4 + 1] [i_4] [i_5] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(var_12))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))))) ? (((/* implicit */long long int) (-(arr_25 [i_8] [i_5] [(unsigned short)8] [i_9] [i_10])))) : (((long long int) (_Bool)1))));
                        }
                    } 
                } 
            } 
            arr_39 [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (arr_0 [i_4])));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            var_31 = ((/* implicit */unsigned int) ((unsigned short) arr_25 [i_4 - 1] [i_4 + 2] [i_4] [i_4] [i_4 + 1]));
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        arr_49 [i_4 + 2] [i_4 + 2] [i_13] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) var_12);
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_4 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_40 [i_4]))));
                        arr_50 [i_4] [i_4] [(_Bool)1] = ((/* implicit */long long int) (~((~(1354603037)))));
                    }
                } 
            } 
            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_4 - 1] [i_11]))));
            var_34 = ((/* implicit */unsigned short) arr_0 [i_4]);
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 12; i_14 += 4) /* same iter space */
        {
            var_35 = ((/* implicit */int) ((18446744073709551594ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14 + 2] [i_14] [i_4] [i_14 - 1])))));
            var_36 = ((_Bool) 1291353549U);
            arr_53 [i_4] [i_4] = ((/* implicit */int) arr_20 [i_4] [i_4]);
        }
        for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                for (unsigned short i_17 = 2; i_17 < 10; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                    {
                        {
                            var_37 = max(((~(((unsigned int) arr_16 [i_4])))), (((/* implicit */unsigned int) arr_48 [i_4] [i_4] [i_4] [9U])));
                            var_38 = ((/* implicit */long long int) max((((unsigned int) ((1291353549U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_4])))))), (((((/* implicit */_Bool) (((_Bool)0) ? (var_10) : (((/* implicit */long long int) var_7))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_16])))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_19 = 1; i_19 < 13; i_19 += 1) 
            {
                for (int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1159891219) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) < (arr_0 [i_20])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) != (var_6))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)420))))), (((/* implicit */long long int) ((_Bool) (_Bool)1)))))) : (((((arr_64 [i_4] [i_4 - 1]) >> (((((/* implicit */int) var_2)) - (47))))) ^ (((/* implicit */unsigned long long int) var_10))))));
                            var_40 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) var_4)) ^ (1259017356U)))))) ? (((/* implicit */int) arr_35 [i_21] [i_21] [i_21] [i_21] [6LL])) : (var_4)));
                        }
                    } 
                } 
            } 
            arr_70 [i_4] = ((/* implicit */unsigned short) var_6);
            arr_71 [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_26 [i_4] [i_4] [i_15 + 1] [i_4] [i_15] [i_4]);
        }
    }
}
