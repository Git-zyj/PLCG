/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213815
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
    var_11 = ((/* implicit */unsigned int) max(((unsigned short)15872), (((/* implicit */unsigned short) (signed char)96))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (unsigned short)15882)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49667))) : (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)61532)) < (((/* implicit */int) (unsigned short)49691))))))))));
        var_13 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6645414669435136047ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) var_4)))) : (min((arr_0 [i_0] [(signed char)3]), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) -5900113944308265656LL))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) (unsigned short)15845))))))) : (((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2912762041U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-2513))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_3 [i_1 + 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_2 [i_1 + 1])))))))) - (((min((((/* implicit */unsigned int) (unsigned short)48210)), (var_1))) >> (((/* implicit */int) ((signed char) 2269409289253235719ULL)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                arr_16 [i_4] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_9 [(unsigned short)7]))))) ? (((int) var_8)) : ((+(((/* implicit */int) arr_1 [i_2]))))))), (((long long int) ((var_10) / (((/* implicit */int) (short)15533)))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (var_1) : (2912762018U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_1 + 2]))))))))));
                            }
                        } 
                    } 
                    arr_17 [i_3] [i_2] [(short)14] = ((/* implicit */short) ((_Bool) ((((unsigned long long int) 1382205256U)) - (((((/* implicit */_Bool) arr_3 [i_1])) ? (8632034013268209901ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))))));
                }
            } 
        } 
    }
}
