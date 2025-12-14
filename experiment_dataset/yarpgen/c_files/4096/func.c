/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4096
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
    var_10 &= var_4;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)80)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (min((var_0), (((/* implicit */unsigned int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 8; i_3 += 4) 
                {
                    {
                        var_12 -= ((/* implicit */unsigned char) ((unsigned int) max((min((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_0 + 1] [i_1] [i_2] [i_3]))), (arr_1 [i_2]))));
                        var_13 = ((/* implicit */short) max(((unsigned char)136), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230)))))))))));
                        var_14 = (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) / (2497619943U))));
                        arr_9 [(short)0] [i_1] [i_1 - 2] [i_0] [i_3] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 2])) ? (arr_5 [i_0] [i_1 + 1] [i_2] [i_3 + 1]) : (arr_5 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_3 [i_0])))) / (((((/* implicit */int) (short)-3710)) + (((/* implicit */int) (short)-1069))))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_15 |= ((/* implicit */signed char) ((((var_0) + (2719683110U))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)12]))) : (arr_11 [14LL] [(short)12])))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned short i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((arr_14 [i_4]) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) 0ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        arr_21 [i_4] [12U] [i_4] [i_7] = ((/* implicit */long long int) ((var_9) << (((var_1) - (1654913950U)))));
                        var_17 = ((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_4] [i_6 + 2] [i_7])) ? (var_3) : (((/* implicit */long long int) arr_16 [i_4] [i_6 - 1] [i_6])));
                        var_18 = ((/* implicit */_Bool) ((arr_14 [i_4]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_14 [i_4]))));
                    }
                } 
            } 
        } 
        arr_22 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_14 [i_4]))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */short) var_8)), (((short) var_7)))))));
}
