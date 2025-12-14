/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236676
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((arr_1 [i_0 - 1] [i_0]) << (((min((-8), (8))) + (12)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -25)), (18146734707656212021ULL)))) ? (((((/* implicit */int) (_Bool)0)) << (((arr_1 [i_0] [(_Bool)1]) - (2298516116U))))) : (((int) (_Bool)1)))) <= (((/* implicit */int) ((unsigned char) max(((signed char)(-127 - 1)), (arr_2 [i_0 + 1])))))));
        arr_5 [i_0 - 1] [(short)21] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (((((/* implicit */int) (unsigned char)13)) - (((/* implicit */int) arr_2 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_10 [i_1] = ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_1]));
        var_19 += ((/* implicit */_Bool) arr_7 [i_1 + 1]);
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        arr_13 [i_2] [(unsigned char)19] = ((/* implicit */short) 300009366053339587ULL);
        var_20 += ((/* implicit */unsigned char) ((((arr_9 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2])))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56887))) : (arr_9 [i_2])));
                    var_22 = ((/* implicit */short) ((arr_6 [i_4]) - (arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) (((_Bool)1) ? (2147483647) : (((/* implicit */int) (_Bool)1))));
                                var_24 = ((((/* implicit */int) arr_8 [i_5 + 1])) - (((/* implicit */int) arr_8 [i_5 + 2])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_27 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_6 [i_7])), (arr_9 [i_7]))), (((/* implicit */unsigned int) (signed char)-126))))) ? (((/* implicit */unsigned int) -352091078)) : (arr_9 [i_7])));
        arr_28 [i_7] [i_7] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned short)45891)), (5667475833271638684LL))) - (((((/* implicit */_Bool) arr_7 [i_7])) ? (-2LL) : (5324327563557372421LL)))));
    }
}
