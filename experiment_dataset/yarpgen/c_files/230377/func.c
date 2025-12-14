/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230377
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
    var_10 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((4U) % (12U)))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((var_9) & (((/* implicit */unsigned long long int) 4294967286U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6778230023590133966LL)) ? (var_2) : (var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (short i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) 10U))));
                            var_12 = (((+(arr_1 [i_4 + 1]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))));
                        }
                    } 
                } 
                var_13 += ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) || (((/* implicit */_Bool) ((0ULL) ^ (arr_1 [i_0]))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_0 + 2] [i_2] [i_2 + 2]))));
                        var_16 = ((/* implicit */unsigned int) (-(var_4)));
                        var_17 -= ((/* implicit */unsigned long long int) ((unsigned int) 2U));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_0 - 2] [i_2] [i_2 + 4])) - (((/* implicit */int) var_1))));
                        var_19 = ((/* implicit */long long int) ((arr_19 [i_0] [i_2] [i_2 + 4] [i_0 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) >> (((arr_1 [i_2]) - (4518020104731766744ULL)))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) 
                    {
                        var_20 = ((unsigned long long int) arr_20 [i_2 + 2] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]);
                        var_21 = ((short) 18446744073709551612ULL);
                        var_22 = ((/* implicit */unsigned long long int) -7420114654572334211LL);
                    }
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2] [i_9])) && (((/* implicit */_Bool) var_7))));
                        var_24 = ((/* implicit */long long int) ((short) ((11U) <= (var_0))));
                    }
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5])) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) 10ULL)) ? (var_2) : (var_3))) : (4028649671U));
                }
                for (long long int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) ((0ULL) + (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        var_27 |= ((((((/* implicit */unsigned long long int) 2094678020U)) / (var_9))) / (((/* implicit */unsigned long long int) arr_22 [i_2 + 2] [i_10] [i_0 - 1] [i_0] [i_0 + 1] [i_10] [i_0 - 2])));
                        var_28 = ((/* implicit */unsigned long long int) arr_12 [i_2 + 3] [i_2] [i_1 + 1]);
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_0] [i_1 + 1] [i_2 + 2] [i_10] [i_11]) : (arr_10 [i_0] [5LL] [i_2 + 2] [i_10] [i_11]))))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2]))));
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_10] [i_2] [i_1 - 1]))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (~(arr_24 [i_0 + 2] [i_0 - 2] [i_0 - 2] [i_2] [i_2 + 2])));
                        var_33 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_1 - 4] [i_2 - 2] [i_10])) + (((/* implicit */int) arr_7 [i_0] [i_10] [i_1 - 1]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) ((short) arr_20 [i_2] [i_2 + 4] [i_2] [i_2 - 1] [i_1 - 2] [i_0 + 2] [i_0]));
                        var_35 |= ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_1] [i_2] [i_0 + 1] [i_1 - 2] [i_10]))));
                        var_36 = ((/* implicit */short) ((((/* implicit */int) arr_18 [i_13] [i_1 - 1] [i_1 - 1] [i_0 - 2] [i_1] [i_2 + 4])) < (((/* implicit */int) arr_6 [i_2 - 2] [i_13] [i_0 + 3]))));
                    }
                }
                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 1] [i_0] [8ULL])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 3] [i_1 - 4]))))))));
            }
            var_38 = ((/* implicit */unsigned int) ((short) 6015858617230649892ULL));
            var_39 += ((/* implicit */unsigned long long int) ((short) (~(1U))));
        }
        /* LoopSeq 2 */
        for (long long int i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) == (arr_25 [i_0 + 1] [i_15] [i_0 + 1]))))));
                var_41 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_14]))));
                var_42 = ((/* implicit */short) ((long long int) var_4));
            }
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_38 [i_0] [i_0] [i_0])) : (var_8))))))));
        }
        for (long long int i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 10; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */short) ((unsigned long long int) arr_7 [i_19] [i_19] [i_0 - 1]));
                            var_45 = ((/* implicit */unsigned long long int) ((short) var_6));
                        }
                    } 
                } 
            } 
            var_46 -= ((short) var_7);
        }
    }
}
