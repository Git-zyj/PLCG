/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51140
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) arr_8 [i_0] [i_1 - 1]))));
                                var_12 = ((/* implicit */signed char) (((+(arr_0 [i_1 - 1]))) + ((-(arr_0 [i_1 - 1])))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) arr_3 [9LL]))))) - (((arr_10 [2] [i_1]) ? (((/* implicit */long long int) arr_8 [i_1] [i_0])) : (var_7)))))) - (var_10)));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                {
                    var_14 = ((/* implicit */_Bool) (~((-9223372036854775807LL - 1LL))));
                    var_15 = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_5]);
                    arr_15 [(unsigned char)7] [i_5] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned int) var_5);
                }
                for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_4 [i_0] [i_1 - 1] [(short)3]), (((/* implicit */unsigned int) arr_2 [i_6]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) >= (arr_8 [i_0] [i_0]))))));
                    var_17 = ((((/* implicit */int) ((((/* implicit */int) arr_17 [i_6] [i_1 - 1] [i_0])) == (((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) << ((((+(min((((/* implicit */long long int) var_3)), (var_7))))) + (7455147582874230751LL))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                arr_24 [i_8] [i_7] [i_6] [i_1 - 1] [i_8] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_20 [i_8] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_8])))) ? (((/* implicit */int) ((arr_0 [6ULL]) > (((/* implicit */int) arr_10 [i_8] [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [13] [i_6] [i_0])))))))))));
                                var_18 += ((/* implicit */long long int) ((_Bool) arr_0 [i_0]));
                                var_19 *= ((/* implicit */long long int) (((+(((arr_8 [i_0] [i_8]) << (((var_1) - (2834176299698106104LL))))))) - ((-(var_3)))));
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max(((~(((long long int) (-9223372036854775807LL - 1LL))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2279914213U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (2015053076U)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [i_1 - 1] [i_9] [i_9]))));
                    var_22 = ((/* implicit */int) arr_26 [i_0]);
                }
                arr_27 [i_0] [i_0] = ((max((arr_23 [i_1] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (_Bool)1)))) / (((unsigned int) var_8)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (long long int i_11 = 0; i_11 < 16; i_11 += 4) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                {
                    var_23 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(arr_29 [11U] [i_10])))) ? (((((/* implicit */_Bool) arr_36 [i_10] [i_11] [i_11] [2ULL])) ? (arr_30 [i_11]) : (((/* implicit */unsigned long long int) arr_32 [i_11] [i_10] [i_12])))) : (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_34 [i_11]))))))));
                    var_24 = ((/* implicit */long long int) arr_29 [i_10] [i_10]);
                    var_25 = min((var_1), (((/* implicit */long long int) min((arr_34 [i_10]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
    } 
    var_26 -= ((/* implicit */unsigned char) var_10);
    var_27 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
}
