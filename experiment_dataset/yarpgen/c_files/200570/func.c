/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200570
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
    var_15 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        arr_3 [i_0] [(short)5] = min((((/* implicit */unsigned long long int) ((_Bool) ((_Bool) -2059175509)))), ((+(((17592183947264ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        arr_4 [8ULL] = 17592183947258ULL;
        var_16 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (short)32313)) ? (((/* implicit */int) (unsigned short)49152)) : (((/* implicit */int) (short)32308)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((min((0LL), (-8LL))), (max((((/* implicit */long long int) var_2)), (5LL)))))) ? (17592183947264ULL) : (((/* implicit */unsigned long long int) max((arr_10 [i_0 - 2] [i_0 + 1] [i_2 + 1]), (((/* implicit */long long int) var_11)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 7; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)49134))))))), (29ULL)))));
                                arr_18 [(short)7] [2LL] [(unsigned short)0] [(short)7] = ((/* implicit */short) var_7);
                                arr_19 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16383)) ? (((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_0]))) : (18446726481525604328ULL))) : (((/* implicit */unsigned long long int) arr_12 [i_3 + 3] [i_1] [i_2 - 1] [i_0 - 2]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32289)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */int) arr_5 [i_3] [i_4])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_1] [i_2])) + (10882))) - (10))))) : (((/* implicit */int) min((((/* implicit */short) var_1)), (arr_15 [i_0] [i_1] [i_3]))))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_11)))), (min((18446726481525604358ULL), (((/* implicit */unsigned long long int) -988355081)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) var_8);
                                arr_24 [i_0] = ((/* implicit */long long int) arr_7 [(short)4] [(short)4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned short) (_Bool)1);
        arr_29 [i_7] = ((((/* implicit */int) arr_27 [i_7])) == ((((_Bool)1) ? (((/* implicit */int) (unsigned short)12150)) : (((/* implicit */int) arr_27 [i_7])))));
        arr_30 [i_7] = ((/* implicit */short) var_1);
        var_19 *= ((/* implicit */unsigned long long int) (-(2681002713782701863LL)));
    }
    for (long long int i_8 = 2; i_8 < 7; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
            {
                {
                    var_20 ^= ((/* implicit */int) var_6);
                    arr_42 [(short)7] [(short)7] [(short)7] [i_10 - 1] = ((/* implicit */long long int) arr_25 [i_8 + 2]);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((unsigned long long int) 17592183947258ULL));
        var_22 = ((/* implicit */unsigned char) max((min((((/* implicit */short) var_12)), (arr_5 [i_8 + 2] [i_8 + 1]))), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16387)) && (((/* implicit */_Bool) arr_5 [i_8 + 2] [i_8 + 1])))))));
        var_23 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((1978829920235699054LL), (((/* implicit */long long int) arr_36 [i_8] [(_Bool)1])))))));
    }
    for (short i_11 = 1; i_11 < 15; i_11 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) ((_Bool) (signed char)99))), (var_13)))) >= ((-(((/* implicit */int) ((_Bool) (short)3862)))))));
        var_25 = ((/* implicit */int) ((max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) arr_43 [i_11 - 1])))))) > (((/* implicit */int) (!(arr_43 [i_11 - 1]))))));
    }
    var_26 = ((/* implicit */short) ((17292610340080754034ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))));
    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (~(((/* implicit */int) var_9)))))));
}
