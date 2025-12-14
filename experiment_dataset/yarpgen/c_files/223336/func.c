/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223336
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
    var_14 &= ((/* implicit */_Bool) ((((/* implicit */int) var_6)) / ((-(((/* implicit */int) (unsigned char)15))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((-(((/* implicit */int) arr_4 [i_0])))) : (((/* implicit */int) (_Bool)0))));
        }
        arr_6 [16LL] [i_0] = ((/* implicit */long long int) ((arr_2 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
        arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)15))) : (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */int) arr_3 [i_0]);
        var_17 += ((/* implicit */unsigned char) (((_Bool)1) ? ((+(((/* implicit */int) (short)-9)))) : (((/* implicit */int) (unsigned char)5))));
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_18 += ((/* implicit */long long int) (-((~(((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_9 [i_2] [i_2]))))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (1686249544U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [(unsigned char)15])))))))) ? ((+(((((/* implicit */_Bool) (short)-6283)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30824))) : (2940558713U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)138))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2]))))) : (((/* implicit */int) arr_9 [i_2] [1LL]))))))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 6; i_3 += 2) 
    {
        var_20 = ((/* implicit */int) (-(arr_2 [i_3])));
        var_21 += ((/* implicit */short) 5572202003154401272LL);
        var_22 = ((/* implicit */long long int) max((var_22), ((+(arr_0 [(_Bool)1] [i_3 - 1])))));
        arr_14 [i_3] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (0LL));
    }
    var_23 = ((/* implicit */short) min((((long long int) ((long long int) (_Bool)1))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) max(((unsigned char)154), ((unsigned char)15)))))))));
}
