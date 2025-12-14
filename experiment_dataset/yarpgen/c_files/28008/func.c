/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28008
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
    var_14 = ((/* implicit */unsigned char) var_7);
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)255)))) <= (((((((/* implicit */_Bool) 7034007137014986972LL)) || (((/* implicit */_Bool) 1299360817)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_4)))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_16 = var_6;
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_17 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) % (arr_1 [i_0])))));
            var_18 ^= ((/* implicit */unsigned long long int) (+(-2943827077100047673LL)));
        }
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_4 [i_2] [(unsigned short)10] [i_4])))))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((2943827077100047672LL) | (((/* implicit */long long int) var_1)))))));
                    var_21 ^= ((/* implicit */long long int) (!(var_11)));
                }
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                {
                    arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) max((min((arr_5 [i_0]), (arr_5 [i_3]))), (((/* implicit */long long int) ((-2943827077100047673LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23))))))));
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */long long int) var_13);
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((unsigned char) arr_6 [7])))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [(signed char)21]), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_5]))))) ? (((((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3]))) : (8759015374409410860ULL))) % (((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */unsigned long long int) (+((~(-2976409080778601671LL))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (+(5337343002595400888ULL))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_20 [i_0] [19U] [i_0] [i_5] [(signed char)10] = (((!(((/* implicit */_Bool) -15LL)))) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)157))));
                        var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2] [0LL])) || (((/* implicit */_Bool) arr_2 [i_2] [i_3])))))) % (arr_8 [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_23 [i_0] [i_2] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [14LL] [i_0] [i_0])) ? (13109401071114150742ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [18LL] [i_2] [i_2])))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_13 [i_0] [(_Bool)1] [(_Bool)1]))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_28 = max((2554805804592415047LL), (((/* implicit */long long int) arr_19 [i_0] [i_2] [i_3] [(unsigned short)10] [i_0] [(unsigned short)18])));
                        var_29 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((var_5) >= (17840462469317152039ULL)))) > (max(((-2147483647 - 1)), (((/* implicit */int) var_13))))))) - (((/* implicit */int) var_4))));
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 3) /* same iter space */
                {
                    arr_30 [(unsigned char)20] [i_2] [i_2] [i_2] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_25 [i_3])) && (((/* implicit */_Bool) var_12)))) ? (((long long int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (_Bool)1))))) || (((/* implicit */_Bool) (signed char)-64))))))));
                    var_30 = ((/* implicit */signed char) 1346296905005289378LL);
                    var_31 = ((/* implicit */signed char) (+(var_6)));
                }
                for (unsigned int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    var_32 = ((/* implicit */unsigned int) (-(((5183911426234917009ULL) >> (((((/* implicit */int) var_2)) & (((/* implicit */int) var_12))))))));
                    arr_34 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) (short)-26024);
                }
                arr_35 [i_0] [i_0] [10LL] = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-64))))));
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) var_11))));
            }
            for (short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                arr_39 [i_0] [i_2] [i_0] = ((((((/* implicit */int) ((arr_29 [5ULL]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))))) + (((/* implicit */int) (unsigned short)12534)))) != (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) && (((/* implicit */_Bool) (unsigned short)64485))))));
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (!(((_Bool) ((((/* implicit */_Bool) arr_29 [i_0])) ? (arr_38 [i_0] [i_0] [i_0] [13ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))))));
            }
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((((/* implicit */int) ((((/* implicit */_Bool) 2870768332908941273LL)) || (((/* implicit */_Bool) arr_25 [(unsigned short)1]))))) >> (((((/* implicit */_Bool) 272678883688448LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (272678883688448LL))))))))));
            var_36 ^= ((/* implicit */long long int) 2808912047570956394ULL);
        }
    }
}
