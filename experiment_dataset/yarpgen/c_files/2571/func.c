/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2571
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1813)) & (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6807)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        var_16 = ((/* implicit */int) arr_0 [i_0]);
        arr_5 [i_0] [4LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14864434871606040853ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58734)) || (((/* implicit */_Bool) (signed char)-48)))))) : (arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 3; i_3 < 12; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 10; i_4 += 1) 
                {
                    {
                        arr_16 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_9))))) <= (var_3)))), (var_6))))));
                    }
                } 
            } 
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned long long int) max((arr_6 [i_2]), (var_8)))))));
            var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)3805))))) ? (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_1] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_12))))) ? (var_1) : (((var_15) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)105)) / (((/* implicit */int) (signed char)-119)))))))));
            var_20 = ((/* implicit */unsigned short) ((int) ((_Bool) (signed char)119)));
        }
        for (short i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 2; i_7 < 12; i_7 += 2) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((arr_8 [i_1] [8ULL] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) (signed char)(-127 - 1))), (-1245363754))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 13; i_10 += 1) 
                    {
                        {
                            var_23 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_5] [i_5])) / (((/* implicit */int) var_11))))) ? (((max((((/* implicit */unsigned int) -1552360586)), (var_15))) * (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118)))));
                            var_24 = ((/* implicit */signed char) min((max((((/* implicit */short) arr_24 [i_10] [i_1] [i_1] [i_5])), (arr_15 [i_10] [i_1] [5ULL] [i_1] [5ULL]))), (((/* implicit */short) arr_24 [i_1] [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_7), (max((-1LL), (((/* implicit */long long int) (short)8785))))));
                var_26 = ((/* implicit */long long int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (unsigned short)32764)) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_5] [i_8]))))));
                arr_31 [i_1] = ((/* implicit */signed char) ((unsigned int) 18446744073709551596ULL));
                arr_32 [10ULL] [i_1] [i_1] [2LL] = ((/* implicit */unsigned char) var_7);
            }
        }
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 13; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) (+(arr_18 [i_11]))))));
                        arr_41 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((-1444551796) + (2147483647))) << (((((((/* implicit */int) (_Bool)1)) ^ (476015739))) - (476015738)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 4) 
            {
                {
                    arr_49 [i_1] = arr_47 [i_1] [i_1] [i_1];
                    arr_50 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) 1124800395214848ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
    {
        arr_53 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_16] [i_16] [1LL] [i_16] [i_16])) ? (arr_30 [i_16] [i_16] [4U] [i_16] [4U]) : (arr_30 [9ULL] [9ULL] [i_16] [i_16] [i_16])));
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((12130366266633595758ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12244))))))));
    }
    var_29 |= (-(((((/* implicit */_Bool) (+(17967967254917332060ULL)))) ? (((/* implicit */int) min((var_12), (var_5)))) : (((/* implicit */int) var_12)))));
    var_30 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
}
