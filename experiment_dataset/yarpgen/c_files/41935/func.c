/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41935
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_9))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1 + 2])) ? (-1) : (((/* implicit */int) var_8))))), (arr_1 [i_1 + 2])));
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 &= ((/* implicit */unsigned char) ((((_Bool) ((unsigned int) arr_10 [i_0] [(_Bool)1] [i_0] [i_3] [i_0] [i_3] [i_2]))) ? (((/* implicit */int) ((arr_7 [i_4] [i_4]) <= (((/* implicit */int) (unsigned short)48950))))) : ((+(((/* implicit */int) arr_6 [i_3]))))));
                                arr_12 [i_4] [i_1] [i_1 + 1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(unsigned short)3])) >> (((270264293U) - (270264277U)))));
                                var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)134)), ((unsigned short)16585))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 3; i_5 < 18; i_5 += 4) 
                {
                    var_16 |= ((/* implicit */unsigned long long int) arr_10 [i_5 + 2] [i_5] [5ULL] [i_1 + 2] [i_1] [i_0] [i_0]);
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_4 [15])))) * ((-(((/* implicit */int) (short)11664))))))) ? (((/* implicit */unsigned long long int) var_9)) : ((-(576460477425516544ULL)))));
                }
                for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_1] [i_1]))));
                    var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_0 [i_1]))));
                }
                arr_20 [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32767))) / (-4611686018427387904LL)));
                var_20 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (0) : (((/* implicit */int) arr_10 [16LL] [i_0] [i_0] [i_0] [(short)10] [i_0] [9])))), (min((((/* implicit */int) arr_3 [10LL])), (arr_13 [i_0] [i_1] [i_0])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_1 - 1] [i_1])) ? (arr_11 [i_1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]) : (((/* implicit */int) arr_16 [i_1] [i_1] [i_1 - 1] [(short)2]))))) : (((((/* implicit */_Bool) (unsigned short)12164)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-11685)))))) : (0U))));
            }
        } 
    } 
}
