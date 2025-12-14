/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226101
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
    var_11 = ((/* implicit */signed char) (-((((!(var_4))) ? (max((2704449385612811198ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) var_9))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0])) : (arr_2 [i_0]))) < (((/* implicit */int) var_10))));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -7806257839413901604LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((long long int) arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_5 [i_1 - 1])) / (((/* implicit */int) ((unsigned short) (unsigned short)55341)))))));
        arr_7 [i_1] = ((/* implicit */signed char) var_6);
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            {
                                arr_18 [(signed char)8] [i_1] [i_4 - 2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1 - 1] [(signed char)5])), ((unsigned short)34153)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 15742294688096740410ULL)) ? (15742294688096740420ULL) : (15742294688096740418ULL)))))))) : ((+(max((((/* implicit */long long int) (_Bool)1)), (arr_10 [i_1] [i_2] [4LL])))))));
                                var_14 ^= ((/* implicit */long long int) ((var_4) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5]))) - (15742294688096740434ULL))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (14122232764916850945ULL))), (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1 + 1] [i_2] [i_4 + 2]))))));
                                arr_19 [i_1 + 1] [i_1] [i_1 + 1] [i_4 - 2] [i_5] = max((((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (11617239973173382433ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [i_4])))))), (((/* implicit */unsigned long long int) -3456649312046163726LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            arr_24 [i_1 - 1] [i_1] [i_1 - 1] [i_6] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (15742294688096740424ULL) : (15742294688096740423ULL))) / (((/* implicit */unsigned long long int) ((-5130219563570096495LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-11))))))));
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2704449385612811197ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)120))) : (arr_14 [i_1 - 1] [5LL] [i_3] [i_6])));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(var_4))))) | (arr_25 [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_6] [i_1] [i_8])));
                            var_18 = ((/* implicit */long long int) ((var_7) | (((/* implicit */unsigned long long int) var_8))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17265))))) - ((+(((/* implicit */int) var_1))))));
                        }
                        var_20 += ((/* implicit */signed char) (-(max((((/* implicit */long long int) arr_16 [i_3] [i_3] [i_3] [i_3] [i_1 + 1] [i_3])), (arr_9 [i_1] [i_3] [i_1 - 1])))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 5427996414861042597LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) : (2704449385612811186ULL))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_0 [i_1]))))));
                            var_22 = ((/* implicit */signed char) (unsigned short)25301);
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_10 [i_1] [i_1 + 1] [i_1])))) / ((-(var_7)))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [6LL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_2] [i_3] [i_6]))) : (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)13)))))));
                            var_25 = var_8;
                        }
                    }
                    arr_34 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1]) : (9223372036854775807LL))))) ? (((/* implicit */long long int) ((int) (unsigned short)51527))) : (min((((/* implicit */long long int) (signed char)-76)), (max((arr_17 [i_1] [i_2] [i_3] [i_1]), (((/* implicit */long long int) (_Bool)1))))))));
                    arr_35 [i_1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */signed char) max((((unsigned long long int) arr_11 [i_3] [i_1] [i_1] [i_1 + 1])), (((/* implicit */unsigned long long int) min((min(((unsigned short)55252), (((/* implicit */unsigned short) var_4)))), (((/* implicit */unsigned short) arr_5 [(unsigned short)5])))))));
                }
            } 
        } 
        var_27 = ((/* implicit */signed char) (-(((unsigned long long int) arr_0 [i_1]))));
        var_28 = ((/* implicit */signed char) (~(max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) arr_23 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1]))))));
    }
    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
    {
        arr_40 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_4))))), ((-(var_9)))))) ? (((long long int) ((((/* implicit */unsigned long long int) 4167868936413627926LL)) / (1581929580998022421ULL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55247)) ? (8592172295519737921LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? ((+(arr_37 [i_11] [(_Bool)1]))) : (var_8)))));
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
        var_30 = ((/* implicit */unsigned short) (signed char)101);
    }
}
