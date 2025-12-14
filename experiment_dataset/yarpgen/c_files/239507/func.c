/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239507
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
    var_18 = ((/* implicit */int) min((min((min((((/* implicit */long long int) var_14)), (var_15))), (((/* implicit */long long int) var_17)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned int) var_14)), (var_11))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */unsigned char) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned char) var_11);
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_12 [i_0 + 1] [i_3] = (+(((((/* implicit */int) arr_6 [i_3] [i_0 - 2] [15ULL] [i_0 - 1])) % (((/* implicit */int) arr_6 [i_2] [i_0 - 2] [i_0] [i_0])))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */unsigned int) ((int) var_0))), (min((var_2), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_13 [i_4 - 1]))) ? (arr_13 [i_4 - 2]) : (min((arr_13 [i_4 - 1]), (arr_13 [i_4 + 1]))))))));
        var_21 *= ((/* implicit */unsigned int) min((min((17600577387710023853ULL), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) var_13))));
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned int i_6 = 2; i_6 < 22; i_6 += 2) 
            {
                {
                    arr_23 [i_6] [i_5] [i_6] [i_6 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_14 [i_4 - 2] [(short)20])), (var_2))), (((/* implicit */unsigned int) ((arr_1 [(signed char)11]) ? (((/* implicit */int) arr_17 [8U] [8U])) : (((/* implicit */int) arr_1 [i_6 + 1])))))))) ? (min(((+(((/* implicit */int) arr_20 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_6])))), (((/* implicit */int) ((var_6) != (var_17)))))) : (min((((((/* implicit */_Bool) arr_20 [i_6] [i_5] [i_4] [i_4])) ? (arr_0 [i_4] [i_4]) : (var_6))), ((+(arr_15 [i_4] [i_5])))))));
                    arr_24 [i_6] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned char) ((min(((~(((/* implicit */int) (signed char)-14)))), (((((/* implicit */_Bool) arr_21 [(signed char)10] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))))) % (min((arr_11 [i_6 + 1] [i_4 - 2] [i_4 - 2] [i_4 + 1]), (arr_11 [i_6 - 1] [i_5] [i_6 + 1] [i_4 + 1])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 23; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_22 [i_4] [i_4] [i_4])))));
                        var_23 &= ((/* implicit */short) ((_Bool) var_11));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
                        arr_31 [(signed char)19] [(_Bool)1] [i_4 - 1] = ((/* implicit */long long int) var_12);
                    }
                }
            } 
        } 
    }
    for (int i_9 = 4; i_9 < 6; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 7; i_10 += 3) 
        {
            for (short i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                {
                    var_25 *= ((/* implicit */short) arr_39 [i_9] [i_9] [i_9]);
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) arr_37 [i_9])))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_9 + 1])) ? (arr_27 [i_9 + 4] [i_9 + 4] [i_9 + 1] [i_9 + 2]) : (((/* implicit */int) arr_34 [i_9 - 2] [i_9 - 1])))))))));
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_43 [8U] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -2076299532)) ? ((((!(((/* implicit */_Bool) arr_20 [4] [4] [4] [(unsigned char)18])))) ? (((/* implicit */int) ((signed char) var_14))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_25 [i_9] [(unsigned char)19]))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            var_29 *= ((/* implicit */unsigned int) min((min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_17 [i_9 - 1] [i_13]))))))), (((min((((/* implicit */int) var_10)), (var_17))) + (((/* implicit */int) ((var_0) != (((/* implicit */int) arr_28 [i_13] [9U] [i_13] [i_13] [i_13])))))))));
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_9] [i_13] [i_9] [i_9]))))) && (((/* implicit */_Bool) var_10))))))))));
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    {
                        arr_52 [i_15] [i_13] [i_15] = min((((/* implicit */unsigned int) ((((min((var_0), (arr_49 [i_9 - 4]))) + (2147483647))) >> (((arr_47 [i_9 + 4] [i_9 - 2]) - (8943615605893881793LL)))))), (((unsigned int) min((arr_47 [i_9 + 3] [(signed char)4]), (((/* implicit */long long int) var_1))))));
                        arr_53 [i_15] [i_13] = ((/* implicit */unsigned short) (~(arr_14 [i_9 - 4] [i_9 - 4])));
                        arr_54 [(signed char)5] [i_15] [i_14] [(signed char)3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) var_0))))) ? ((-(((/* implicit */int) arr_37 [9ULL])))) : (((/* implicit */int) var_9))))));
                    }
                } 
            } 
        }
        for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            arr_57 [i_16] [i_16] [i_9 + 1] = ((/* implicit */unsigned char) ((var_4) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [(signed char)1] [(signed char)1] [i_16])) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_51 [0LL] [i_9] [i_9] [i_9])))), ((!(((/* implicit */_Bool) var_6)))))))));
            arr_58 [i_16] = (+((+(((/* implicit */int) arr_45 [i_9 - 2])))));
        }
    }
    for (unsigned int i_17 = 1; i_17 < 9; i_17 += 2) 
    {
        arr_63 [i_17] [i_17 - 1] = (+(min((((((/* implicit */_Bool) var_8)) ? (arr_7 [i_17 - 1] [i_17 - 1] [i_17 - 1] [i_17]) : (((/* implicit */unsigned int) arr_11 [i_17] [i_17] [4] [i_17])))), (((/* implicit */unsigned int) (+(var_17)))))));
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_30 [i_17 + 2] [i_17 + 2] [i_17] [i_17 + 2] [i_17 + 2])) | (((/* implicit */int) arr_17 [(short)12] [(short)12])))))) ^ (72040001851883520ULL)));
    }
    var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
}
