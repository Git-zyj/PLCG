/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36738
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
    var_19 = ((/* implicit */int) ((((/* implicit */long long int) var_10)) & (max((3763919996809355612LL), (((/* implicit */long long int) (unsigned short)34027))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (0ULL)));
        var_21 = ((short) (signed char)-70);
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_6))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1])) >> (0ULL)));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [7] [i_1] [11U] [i_4] = ((/* implicit */short) arr_4 [i_2] [i_3]);
                        arr_16 [i_1] [i_1] [i_4] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_11 [i_1]))));
                    }
                } 
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1] [i_1 + 1])) * (((/* implicit */int) arr_4 [i_1] [i_1 - 2]))));
        var_23 -= ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1])) ? (arr_6 [4ULL]) : (arr_6 [(short)12]));
    }
    for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) /* same iter space */
    {
        var_24 |= ((/* implicit */unsigned short) (short)-12514);
        var_25 = ((/* implicit */int) max((var_25), (min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((unsigned char) min((var_9), (((/* implicit */unsigned int) var_8))))))))));
    }
}
