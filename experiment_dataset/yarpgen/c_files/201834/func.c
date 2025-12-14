/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201834
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_11 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((1836842550) / ((~(arr_2 [i_1])))))) + (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1836842550))))), (min((((/* implicit */unsigned long long int) (unsigned short)17)), (10722606833647514010ULL)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [2] [i_3] [i_3]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_4 = 2; i_4 < 9; i_4 += 3) 
                        {
                            var_13 = ((5495910370062949141LL) ^ (((/* implicit */long long int) var_2)));
                            arr_11 [i_3] [i_3] [i_4] [i_3] [i_4] = ((/* implicit */int) (unsigned short)17);
                            var_14 = ((/* implicit */short) (~(-1LL)));
                            arr_12 [i_0] [i_1 + 2] [i_0] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1836842561))))));
                            arr_13 [i_4] [i_3] [i_1 + 2] = arr_2 [i_4];
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) var_2);
                            arr_16 [i_0] [i_0] [1LL] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_10 [i_1] [0LL] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 1])) && (((/* implicit */_Bool) var_4)));
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))));
                            arr_17 [i_0] [i_3] [i_2] [1] [i_0] [i_0] [i_0] = ((((/* implicit */int) var_9)) > (((/* implicit */int) arr_15 [i_1 - 1])));
                            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) (-(-634419191)));
                        }
                        for (unsigned int i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            var_17 = (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_3] [i_6 - 1])));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8)))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((arr_7 [i_1 + 1] [i_1 + 2]) ? (((((/* implicit */_Bool) 10LL)) ? (((/* implicit */long long int) -1836842575)) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))))))));
                            var_20 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_3] [i_2] [i_1 + 2]);
                        }
                        for (short i_7 = 2; i_7 < 7; i_7 += 4) 
                        {
                            arr_24 [i_0] [(_Bool)1] = ((/* implicit */int) (-(972078214594895665LL)));
                            arr_25 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */_Bool) arr_2 [i_0]);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2])) && (((/* implicit */_Bool) arr_19 [i_3] [i_2] [i_1]))));
                        }
                    }
                    arr_26 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) arr_20 [i_1 + 1] [i_1 + 2] [i_0] [i_1 + 1] [i_1 + 2])))));
                    var_22 = ((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_1] [i_1 - 1] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_23 += ((/* implicit */int) ((((/* implicit */_Bool) -972078214594895664LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65518))) : (35184338534400ULL)));
    var_24 = ((/* implicit */long long int) var_5);
    var_25 += ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) >= (var_2)));
}
