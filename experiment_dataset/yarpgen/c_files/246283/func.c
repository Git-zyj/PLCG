/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246283
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
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) >> ((((~(((long long int) var_3)))) + (14142LL)))));
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_3] [i_0] = ((/* implicit */short) ((_Bool) (_Bool)0));
                        arr_14 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (-5434505243670615125LL))))), (((((((/* implicit */_Bool) 14485471619213300239ULL)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2 + 1] [i_3])) : (var_0))) / (((/* implicit */unsigned long long int) max((-5434505243670615125LL), (((/* implicit */long long int) -1198165693)))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1145736824)) ? (max((var_5), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) ((unsigned int) var_2)))))) ? (((/* implicit */int) ((unsigned short) (+(14757783314736681462ULL))))) : (max(((~(-1198165693))), (((/* implicit */int) (short)27038))))));
        arr_15 [22ULL] = ((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10)))) > (14757783314736681458ULL)))), (var_1)));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) (short)27038)))));
        arr_19 [i_4] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (14757783314736681458ULL)))) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_4])) * (((/* implicit */int) var_8))))))));
    }
    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_14 += ((/* implicit */long long int) (~(-1237411801)));
        arr_22 [i_5] [i_5] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)40890))));
    }
    for (signed char i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */short) (unsigned short)65531);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)194))));
            var_17 = ((/* implicit */_Bool) (short)19971);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (short)-27038))))))));
        }
        /* vectorizable */
        for (long long int i_8 = 3; i_8 < 17; i_8 += 1) 
        {
            var_19 = ((long long int) ((((/* implicit */_Bool) -9223372036854775784LL)) && (((/* implicit */_Bool) (short)27026))));
            arr_30 [i_6] [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 2703782810479136578LL)) ? (-2572515988821824148LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_6])))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (unsigned char)93))));
        }
        arr_31 [i_6] = ((/* implicit */_Bool) (-((-(((arr_29 [i_6] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
        var_21 = ((/* implicit */_Bool) 18234035777579875394ULL);
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((min((((/* implicit */int) arr_5 [i_6] [i_6] [i_6])), (arr_27 [i_6] [i_6] [7ULL]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_6] [(unsigned char)0]))))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            {
                                arr_46 [i_9] [i_9] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) var_9))), (((long long int) var_5))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (var_0)))));
                                var_23 = ((/* implicit */short) ((unsigned int) ((unsigned int) max((((/* implicit */short) (unsigned char)59)), ((short)29482)))));
                                var_24 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1491926519)) ? (-1237411801) : (((/* implicit */int) (short)-32757))))) ? (((/* implicit */int) min((((/* implicit */short) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])), (var_11)))) : (((/* implicit */int) ((unsigned short) arr_38 [i_13] [i_13] [i_10])))))) ? (((/* implicit */long long int) ((max((var_7), (((/* implicit */int) arr_4 [i_12] [i_12] [i_9])))) * (((/* implicit */int) (unsigned short)54528))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) arr_32 [i_9 - 1])) : (min((arr_39 [i_11] [i_12]), (arr_11 [i_9 - 1] [i_9] [i_9]))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]), (arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1])))) ? (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_45 [i_9] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1])) : (((/* implicit */int) (short)27038))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_45 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_10] [i_9 - 1]))) + ((-9223372036854775807LL - 1LL))))));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            {
                                var_26 += (-9223372036854775807LL - 1LL);
                                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_9 - 1] [i_9] [i_9] [i_10])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
