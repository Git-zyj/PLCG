/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220678
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (var_5) : (((/* implicit */int) (short)-29989))))) ? (((((/* implicit */int) (short)7)) ^ (((/* implicit */int) var_2)))) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (short)7)) ? (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (short)-767)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (short)771))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 22; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))) : (arr_1 [i_0] [i_1]))) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_4 [i_0])))) + (36)))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-18134)) * (((/* implicit */int) (signed char)-5))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((((/* implicit */int) (unsigned short)13374)) >> (((((/* implicit */int) arr_4 [16U])) - (216))))) : ((-(((/* implicit */int) (short)-767))))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_11 -= ((/* implicit */unsigned char) (+(arr_6 [i_3 + 1] [i_3 + 1] [i_3])));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) -2510532276175408624LL)) ? (((/* implicit */int) arr_7 [(_Bool)0] [(short)6] [i_3 - 1])) : (((/* implicit */int) var_9)))))));
                    arr_13 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [3U])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 - 1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-18609)) % (2047)))));
                }
                for (int i_4 = 1; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    var_13 &= ((/* implicit */signed char) (unsigned short)39286);
                    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned short)4] [i_4])), (10518465226022459788ULL)))) ? (min((((/* implicit */unsigned long long int) arr_12 [i_4] [i_1] [2] [2])), (arr_11 [i_0] [15ULL]))) : (arr_5 [i_0] [i_4])))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)55)), ((short)-24948)))) : (((((arr_6 [i_0] [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) (short)-32757)) + (32778)))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_2 [0ULL]))), (((int) (short)785))))), ((-(arr_15 [i_1] [i_0] [i_4] [i_4 + 1])))));
                        var_16 = ((/* implicit */unsigned short) (signed char)85);
                        arr_19 [i_0] [11U] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10553211464604428100ULL)) ? (max((((/* implicit */unsigned long long int) min((arr_3 [i_0]), (arr_3 [i_0])))), (((unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_4] [(unsigned short)10])) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) var_3)))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) ((unsigned long long int) (short)511));
                        arr_22 [(signed char)12] [9ULL] [(signed char)12] [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)55)), ((short)767)));
                    }
                    for (signed char i_7 = 1; i_7 < 22; i_7 += 3) 
                    {
                        var_18 &= ((/* implicit */short) (+(13ULL)));
                        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)53872)) : (((/* implicit */int) (short)-27065))))), (min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_4] [i_7])), (arr_11 [i_1] [i_1]))))), (((max((10949496802307857689ULL), (((/* implicit */unsigned long long int) (unsigned short)45612)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(signed char)8] [i_1] [i_4] [(signed char)8] [i_7]))))))))));
                    }
                    arr_26 [i_0] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1])) ? (7497247271401693921ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [18]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_0] [i_0] [(signed char)4] [i_1] [i_4] [i_0]))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
                }
                /* vectorizable */
                for (int i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            {
                                arr_34 [i_0] [i_9] [i_8] [i_9] [2U] &= ((/* implicit */unsigned short) var_6);
                                arr_35 [12U] [i_10] [i_8] [i_8] [i_8] &= ((/* implicit */unsigned char) 3233516469U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 20; i_11 += 1) 
                    {
                        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                        {
                            {
                                var_20 &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_12] [i_12] [i_12] [i_12]))) | (arr_15 [i_0] [i_12] [i_0] [i_0]));
                                arr_41 [i_0] [i_1] [i_8 + 1] [i_0] [(short)13] = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
                            }
                        } 
                    } 
                    var_21 = (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (3233516464U))));
                }
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_11 [i_1] [i_0]), (arr_11 [(unsigned short)4] [i_0])))) ? (max((((/* implicit */unsigned long long int) arr_37 [i_0] [(unsigned short)20])), (((4983509910247193677ULL) | (((/* implicit */unsigned long long int) arr_39 [i_0] [20] [i_0] [i_1] [i_1])))))) : (max((arr_29 [(short)10] [i_1]), (arr_29 [10U] [i_1]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_7);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(max((797723405U), (((/* implicit */unsigned int) var_4))))))) ? (((var_7) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (200041717))) : (((/* implicit */int) max(((signed char)6), (((/* implicit */signed char) var_9))))))) : (((/* implicit */int) var_1))));
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-7)) ? (17179867136ULL) : (min((((/* implicit */unsigned long long int) min((var_0), (var_2)))), (min((((/* implicit */unsigned long long int) (short)-18611)), (var_6)))))));
}
