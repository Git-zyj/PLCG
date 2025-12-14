/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230909
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
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */int) ((arr_0 [i_0]) == (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] [i_0] = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_2] [i_1]) : (((/* implicit */int) (_Bool)1)))))))), (min((((((/* implicit */_Bool) arr_2 [i_0])) ? (3041100192U) : (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) arr_0 [i_0])))));
                    arr_11 [i_0] [i_1] [i_0] [i_0] = max((arr_1 [i_1] [i_0]), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [(short)7] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_15 [i_0] = (~(((((((/* implicit */int) arr_14 [i_0] [10ULL] [i_0])) <= (var_4))) ? (((/* implicit */int) ((((/* implicit */int) (short)17716)) != (arr_4 [i_0])))) : (arr_4 [i_0]))));
            arr_16 [i_0] = ((/* implicit */short) arr_8 [i_0] [i_3] [i_0] [i_0]);
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 2; i_5 < 22; i_5 += 2) 
            {
                for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    {
                        var_11 += ((/* implicit */short) (~(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((unsigned int) var_3)))))));
                        var_12 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-107)) > (-314913510))))) * (min((1470305830U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)34345)))))))));
                        var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_10)) ? (arr_22 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (var_8) : (((/* implicit */int) (short)-17717)))))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_4])) ? ((+(2625373631411233018LL))) : (((/* implicit */long long int) 1402329580)))) == (((/* implicit */long long int) arr_20 [i_0] [i_0] [i_0] [i_4])))))));
            arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (1657509602604882734ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0]))))) || ((!(((/* implicit */_Bool) 1172613710U))))));
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((unsigned long long int) arr_20 [i_4] [i_0] [i_0] [i_0])), (((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_4])))))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */long long int) max(((-(max((((/* implicit */int) arr_5 [i_7] [i_7] [i_7])), (arr_26 [(_Bool)1] [i_7]))))), (((((/* implicit */_Bool) 1710075527U)) ? ((-(arr_26 [i_7] [i_7]))) : (((var_0) ? (((/* implicit */int) arr_7 [i_7] [(_Bool)1])) : (var_4)))))));
        var_16 ^= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_2))))));
        var_17 += ((/* implicit */int) (signed char)119);
        arr_30 [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-12087)), ((~(arr_17 [i_7] [4])))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_33 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((((!(var_1))) ? ((~(arr_1 [i_8] [i_8]))) : (max((((/* implicit */int) arr_13 [i_8])), (var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        var_18 = (~((-(((/* implicit */int) arr_25 [(signed char)10])))));
        arr_34 [i_8] = ((var_0) ? (2147483647) : (min(((-(arr_4 [i_8]))), ((+(arr_12 [i_8] [i_8]))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                {
                    var_19 ^= ((/* implicit */int) arr_21 [i_8] [i_9] [i_10]);
                    arr_39 [i_8] [i_8] = ((/* implicit */short) var_3);
                }
            } 
        } 
        var_20 = ((/* implicit */short) (((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21297))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 314913512)) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_25 [i_8]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8])) ? (3281642378639062836ULL) : (var_3)))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        arr_42 [i_11] = ((((/* implicit */_Bool) arr_41 [i_11])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)29551)));
        var_21 = ((/* implicit */_Bool) arr_41 [i_11]);
        var_22 *= ((((/* implicit */_Bool) arr_41 [i_11])) ? (arr_41 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
    }
}
