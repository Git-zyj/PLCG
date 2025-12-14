/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3348
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
    var_14 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) var_7);
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [(_Bool)1] [i_2] = ((/* implicit */signed char) (((~(arr_5 [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_18 [0] [i_4 - 1] [i_1] [(signed char)10] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_9);
                                arr_19 [9ULL] [9ULL] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
                                arr_20 [i_1] = ((/* implicit */signed char) var_0);
                                arr_21 [i_1] [i_1] [i_2] [i_2] [i_4] = (~(((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_8))))) ? ((~(var_5))) : (min((var_9), (arr_0 [4U] [4U]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                {
                    arr_24 [i_5] [(unsigned char)0] [i_0] = ((/* implicit */unsigned short) var_1);
                    arr_25 [10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_10)))));
                }
                arr_26 [i_1] = ((/* implicit */_Bool) var_1);
                arr_27 [i_1] [i_1] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_1]);
                arr_28 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((-(var_3))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [(unsigned char)3] [i_1] [(unsigned char)3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (var_6))))) : (min((arr_4 [i_1]), (((/* implicit */unsigned int) var_10))))))) : (var_1)));
            }
        } 
    } 
    var_15 = var_3;
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_2)))))), (max((((/* implicit */unsigned int) var_13)), ((-(var_2)))))));
}
