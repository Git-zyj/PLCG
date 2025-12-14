/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19712
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61075))))) & (arr_3 [i_0] [i_0] [i_0]))))));
                arr_6 [i_0] [4] [i_1] = (-(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3] [i_0])) && (((/* implicit */_Bool) 1614456047))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (int i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            {
                                var_15 *= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned char)16)))) || ((_Bool)0)));
                                var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                                var_17 *= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_2 [2U] [(unsigned short)14])), (arr_3 [5U] [i_3 + 1] [i_3 + 1])));
                                arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] [(short)5] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)8192)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(0U)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                arr_25 [(short)2] [i_3] [i_7] [(_Bool)1] [i_7] = ((/* implicit */signed char) var_11);
                                var_18 = ((/* implicit */unsigned int) arr_13 [i_3] [2LL] [i_3]);
                                arr_26 [i_3] [12ULL] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) var_7);
                                arr_27 [i_2] [i_2] [i_3] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) << ((((+(((/* implicit */int) arr_1 [i_2])))) - (73)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_9 = 1; i_9 < 9; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 7; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        for (long long int i_13 = 4; i_13 < 9; i_13 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? ((+(arr_17 [i_9] [i_10] [i_9] [i_12 - 2] [4] [i_11]))) : (((/* implicit */unsigned long long int) ((int) var_13))))))));
                                var_20 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_36 [i_13] [2] [i_9])), (((((/* implicit */_Bool) (unsigned char)239)) ? (var_8) : (((/* implicit */unsigned long long int) -1741201118))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */signed char) var_8);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)66)))) ? (arr_17 [12U] [i_9] [(_Bool)0] [i_9] [i_9] [12U]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_11 [8ULL] [8ULL] [i_9])))))))))));
    }
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((var_3) >= (((/* implicit */int) var_7)))))));
}
