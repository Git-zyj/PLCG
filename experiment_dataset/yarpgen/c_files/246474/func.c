/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246474
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_5))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0 - 1]))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_0), (arr_0 [i_0 - 1])));
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (short)-16313)), (var_8)))))) ? (((long long int) arr_2 [i_0])) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
        arr_4 [i_0 - 1] [15ULL] = var_9;
        var_13 = ((/* implicit */long long int) var_4);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_2))) / (((long long int) arr_6 [i_1] [i_1])))), (max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (arr_6 [i_1] [i_1])))), (var_8)))));
        arr_7 [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((arr_6 [i_1] [i_1]) & (arr_6 [i_1] [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) arr_6 [i_2] [i_2])) : (var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-16300)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (short)-16312)))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (signed char)-11))))));
        var_16 *= ((/* implicit */signed char) ((short) ((var_7) - (((/* implicit */unsigned long long int) 7361994375752887519LL)))));
        var_17 -= ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2]))) < (var_5)))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (((_Bool)1) ? ((~((-(2199023255551LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_6 [i_2] [i_2]) : (arr_9 [i_2]))))));
        var_18 *= ((/* implicit */_Bool) var_6);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
        {
            var_19 = ((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_3 - 1] [i_3])) ? (((/* implicit */long long int) ((unsigned int) -1))) : (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 2]))) / (var_10))));
            var_20 += var_7;
        }
        for (unsigned char i_5 = 2; i_5 < 21; i_5 += 3) 
        {
            arr_19 [i_5] [i_5 - 2] [i_3] = ((/* implicit */unsigned char) 7361994375752887497LL);
            var_21 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))) : (-2199023255548LL));
        }
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                {
                    var_22 = ((long long int) arr_20 [(short)10] [i_7] [i_7]);
                    arr_27 [i_6] [i_6] [i_7] = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
        var_23 -= ((/* implicit */int) ((var_2) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [i_3] [14ULL] [6LL])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3])) : (var_7)))));
    }
}
