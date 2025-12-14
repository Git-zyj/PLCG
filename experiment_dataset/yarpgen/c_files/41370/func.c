/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41370
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
    var_12 += var_7;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) arr_0 [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */int) ((short) arr_0 [i_0]))) - (arr_6 [(_Bool)1] [i_1] [i_1]))))))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((int) (((!(((/* implicit */_Bool) 993415993U)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_3 [i_1])))) : (((/* implicit */int) (short)-4657))))))));
                arr_7 [(_Bool)1] |= ((/* implicit */int) ((short) arr_3 [i_0]));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)61319)) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_2)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        arr_10 [12] [i_2] = ((/* implicit */unsigned short) ((993415981U) ^ (((/* implicit */unsigned int) arr_8 [i_2]))));
        arr_11 [10] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_8 [i_2]) : (arr_9 [i_2]))));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 14; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    {
                        var_16 = (i_3 % 2 == 0) ? (((/* implicit */unsigned short) ((arr_9 [i_2 + 1]) << (((arr_12 [i_3 - 3] [i_3 + 1] [i_3]) - (450477460)))))) : (((/* implicit */unsigned short) ((arr_9 [i_2 + 1]) << (((((((arr_12 [i_3 - 3] [i_3 + 1] [i_3]) + (450477460))) + (1452773993))) - (14))))));
                        var_17 = ((/* implicit */short) arr_19 [2] [i_4] [2] [i_3] [i_2] [i_2]);
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) ((((_Bool) arr_17 [i_2 + 1] [i_2] [i_2] [(unsigned short)10] [i_2])) ? (arr_9 [i_2 + 1]) : (((int) arr_12 [i_2] [i_2] [i_2]))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((arr_16 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2]) << (((arr_16 [(unsigned short)10] [(short)10] [3U] [i_2 - 2] [i_2] [i_2]) - (4534488361849118899LL))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (arr_3 [i_6])))) ? (((((/* implicit */_Bool) (unsigned short)26809)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [11] [i_6] [11] [9LL]))) : (arr_16 [i_6] [i_6] [i_6] [i_6] [6U] [i_6]))) : (((/* implicit */long long int) arr_5 [i_6] [(_Bool)1] [i_6]))));
        /* LoopSeq 1 */
        for (int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            arr_26 [i_6] [i_6] [i_7] = ((/* implicit */short) ((unsigned short) arr_15 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_6]));
            arr_27 [i_6] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_7 - 1])) ? (2011466369) : (arr_12 [i_7 + 1] [i_7] [i_7])));
        }
        var_21 = ((/* implicit */long long int) arr_6 [i_6] [i_6] [i_6]);
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
    {
        arr_32 [i_8] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)31)))));
        var_22 *= ((/* implicit */unsigned short) arr_1 [(short)5] [i_8]);
    }
}
