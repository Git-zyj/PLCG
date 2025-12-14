/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202409
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            arr_6 [i_0] [(_Bool)1] [(_Bool)0] &= ((/* implicit */signed char) (~(-1653506783)));
            var_15 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) + (arr_0 [i_1 + 1])));
            var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)17))));
        }
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_7 [i_2]) : (((/* implicit */long long int) 0U)))));
                    var_18 = ((/* implicit */unsigned char) (signed char)-61);
                }
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        var_19 &= ((/* implicit */unsigned short) (unsigned char)0);
        arr_15 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_14))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_20 &= arr_16 [i_5];
        var_21 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_18 [i_5]))));
    }
    var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) + ((~(((/* implicit */int) (_Bool)0))))))), (var_9)));
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
    {
        for (unsigned int i_7 = 2; i_7 < 17; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_32 [i_6] [i_6] [i_8] [i_8] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned char) (unsigned char)2))), (-4684499467632477817LL)));
                                var_23 &= ((/* implicit */unsigned int) -2018733585);
                                var_24 = ((/* implicit */unsigned int) (signed char)27);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_25 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_11)) % (arr_20 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_6])) ? (-1653506783) : (((/* implicit */int) arr_18 [i_11]))))) : (max((arr_11 [i_7]), (arr_25 [i_7] [i_8] [i_11] [(_Bool)1]))))))));
                        var_26 -= ((/* implicit */unsigned char) min((((unsigned long long int) (-2147483647 - 1))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -6642887157561247061LL)))))));
                    }
                    for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                    {
                        var_27 &= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((arr_30 [i_6] [i_6] [i_7 + 2] [2] [i_8] [16U]), (var_4)))), (arr_23 [i_7 + 2]))), (((/* implicit */unsigned long long int) (!(arr_24 [i_8] [(unsigned char)6] [i_8] [19ULL]))))));
                        arr_40 [i_6] [i_7] [i_7 - 1] [(short)1] [i_12] = ((/* implicit */unsigned int) max((max((arr_20 [i_6] [i_6]), (arr_20 [i_7] [i_7 - 2]))), (max((((/* implicit */long long int) (unsigned char)255)), (arr_20 [i_7 + 3] [i_6])))));
                    }
                }
            } 
        } 
    } 
}
