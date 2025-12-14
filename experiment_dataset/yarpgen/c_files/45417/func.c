/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45417
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_3] = ((/* implicit */short) (~(max((2511831754U), (((/* implicit */unsigned int) 1029033082))))));
                                var_10 = ((/* implicit */long long int) max((var_10), (max((((/* implicit */long long int) arr_4 [i_2])), (max((var_1), (((/* implicit */long long int) arr_11 [i_3 + 2] [i_1 - 1] [i_4 + 1]))))))));
                                arr_16 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */_Bool) (-(1029033082)));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_5 = 1; i_5 < 17; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_25 [i_5] [i_1] [i_1] = ((((/* implicit */_Bool) arr_8 [i_7 - 1])) ? (arr_8 [i_7 + 4]) : (((/* implicit */unsigned int) -2073582257)));
                                var_11 = ((/* implicit */_Bool) ((unsigned long long int) 4294967289U));
                                arr_26 [i_0] [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) arr_20 [i_7] [i_6] [i_5 - 1] [i_0]);
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_22 [i_1 + 1] [i_5 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [(short)0] [i_6] [i_5] [i_7])))));
                            }
                        } 
                    } 
                    var_12 = (+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */unsigned long long int) 397577801)) : (arr_1 [i_1 - 1]))))));
                }
                arr_28 [18ULL] [18ULL] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-112)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) && (((/* implicit */_Bool) arr_8 [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_7);
}
