/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240443
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
    for (long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_1] [i_2])) - (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 3] [i_2] [i_0 + 1]))));
                    var_20 |= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)220)) - (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        arr_10 [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_5 [i_2] [i_1] [(unsigned char)15]));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((long long int) 704933528)))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((short) arr_1 [i_4])))));
                        arr_13 [5ULL] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_0 + 1]))) : (4602678819172646912LL)));
                        var_23 = ((/* implicit */unsigned int) 35184372056064ULL);
                    }
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (arr_8 [i_0] [i_0 + 1] [(short)14] [i_1 + 1])));
                    var_25 += ((/* implicit */short) 18446708889337495552ULL);
                }
                for (unsigned int i_6 = 2; i_6 < 17; i_6 += 4) 
                {
                    var_26 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1 + 1] [i_0 + 1] [i_1])) ? (((/* implicit */long long int) arr_9 [i_0 - 3] [i_0 - 3] [(signed char)13] [i_1])) : (arr_16 [i_1]))));
                    var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)34))))), ((-(arr_17 [i_1 + 1] [i_1 + 1] [17LL] [i_0 - 2])))));
                }
                for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_1] [i_0] [(unsigned char)17] [i_1] = max((((/* implicit */long long int) (_Bool)1)), (7575299899609248776LL));
                                var_28 = ((/* implicit */long long int) ((int) (+(arr_27 [i_0] [i_0 - 3] [i_1 + 2] [i_7 + 4] [(unsigned char)3] [i_9 - 2]))));
                            }
                        } 
                    } 
                    arr_29 [15ULL] [i_1] [1U] = ((/* implicit */unsigned char) ((18446708889337495546ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((max((18446708889337495542ULL), (((/* implicit */unsigned long long int) 8384512U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6600713689852794533ULL)) ? (var_6) : (((/* implicit */long long int) arr_25 [0U]))))))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) 35184372056041ULL);
    var_31 = ((/* implicit */long long int) ((int) var_3));
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((_Bool) 5406304554445498984LL)))));
}
