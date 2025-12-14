/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208521
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_10 *= (~((+(var_1))));
        var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (unsigned short)19))))), (arr_1 [i_0])));
    }
    var_12 *= ((/* implicit */unsigned short) (!(((((/* implicit */long long int) max((var_5), (((/* implicit */int) var_3))))) <= (var_6)))));
    /* LoopNest 3 */
    for (signed char i_1 = 2; i_1 < 22; i_1 += 4) 
    {
        for (unsigned short i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                {
                    arr_10 [i_3] |= var_9;
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_13 *= ((/* implicit */_Bool) max((((int) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [21U] [21U] [10LL] [15LL])))))), (((/* implicit */int) var_8))));
                        var_14 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32889)) ? (((/* implicit */unsigned int) var_5)) : (1U)))) ? (1U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5315670251006662825LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)32)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [(_Bool)1] [(unsigned short)9] [(unsigned short)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))) ? (((unsigned int) 8256297835375224255LL)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)32642))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508)))))) ? (((long long int) 3278570176878126239ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))))))));
                        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2696131432U)) - (((((/* implicit */_Bool) 16LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 4) /* same iter space */
                    {
                        arr_20 [i_1] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) (_Bool)1);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) arr_6 [i_2] [i_2] [i_2]);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((arr_13 [i_1] [i_2 + 2] [i_6] [i_7]) * (((/* implicit */long long int) ((var_1) & (0U)))))))));
                        }
                    }
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned char) (+(((((/* implicit */_Bool) arr_24 [i_1] [i_2] [i_1] [i_8] [i_3] [i_1])) ? (arr_22 [i_8] [i_2] [i_8] [4U] [i_8]) : (var_1)))))))));
                        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_7))))) : (min((arr_13 [i_1] [i_1 + 1] [i_1] [i_1]), (var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_1 - 1] [i_1] [i_1 - 1]), (arr_9 [i_1] [18U] [18U] [i_2])))) && (((/* implicit */_Bool) var_1)))))));
                    }
                    arr_28 [i_2] [i_2] [i_2] = (+(((((/* implicit */_Bool) 13LL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)28)))));
                }
            } 
        } 
    } 
}
