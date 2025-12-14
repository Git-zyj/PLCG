/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196045
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
    var_12 = ((/* implicit */unsigned int) (-(var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    arr_6 [(_Bool)1] [i_2] = ((/* implicit */int) var_5);
                    var_13 = ((/* implicit */signed char) var_8);
                    var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (((((/* implicit */_Bool) (unsigned char)142)) ? (var_3) : (var_8)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967295U)) & ((~(arr_8 [i_0] [i_2] [i_2] [i_3] [i_4])))));
                                arr_15 [i_2] [2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [10ULL] [i_4])) <= (((/* implicit */int) var_9))));
                                arr_16 [i_0] [i_1] [i_2] [(signed char)5] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_1] [(unsigned char)11] [9LL])) ? (((/* implicit */int) arr_2 [i_2] [4ULL])) : (var_11)))) ? (((unsigned long long int) var_11)) : (((/* implicit */unsigned long long int) 4294967295U))));
                                var_15 = ((/* implicit */int) arr_5 [i_1] [i_2] [i_3] [3LL]);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_10 [i_2] [i_1] [11ULL] [i_2]) : ((-(0ULL)))));
                }
                for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) arr_0 [i_5]);
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-1))))), ((+(((/* implicit */int) arr_3 [i_5 + 2] [i_5 + 2] [i_5 + 1]))))));
                    var_18 = (+(((/* implicit */int) (unsigned short)60894)));
                    arr_20 [i_0] [i_1] [i_1] [i_5 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_19 [i_0] [i_5 + 2] [i_5 - 1] [10U]))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_19 [i_0] [i_5 + 2] [i_5] [12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) var_9)))))));
                }
                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_11 [i_0] [i_0] [i_0] [i_0] [(signed char)12] [(signed char)6] [i_1]))))));
            }
        } 
    } 
}
