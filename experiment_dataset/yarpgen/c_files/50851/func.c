/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50851
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) var_4))));
    var_11 |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_6))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16625))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (+(arr_2 [i_0])));
        arr_5 [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) arr_6 [i_1])))), (-2097152)));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-2097152))))));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)115)))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned long long int) 2097152);
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            var_13 -= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (4870857190555203228LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))));
            arr_15 [i_2] = ((/* implicit */unsigned int) arr_10 [i_3 + 2] [i_2]);
            arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) * (((/* implicit */int) (_Bool)0))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_3] [i_3 - 1]))) >= (var_3)))) << (((((((/* implicit */int) arr_14 [i_2] [12] [i_3])) / (((/* implicit */int) (signed char)118)))) + (197)))));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_15 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) && (((/* implicit */_Bool) arr_17 [i_2])))))) & (((arr_19 [8LL]) & (arr_19 [(signed char)12])))));
            arr_21 [i_4] [i_4] = ((/* implicit */long long int) ((signed char) 9223372036854775807LL));
            arr_22 [i_4] [(signed char)18] |= ((/* implicit */signed char) ((var_7) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [8LL] [(unsigned short)18])) ? (((/* implicit */int) arr_20 [i_4] [(_Bool)1] [i_2])) : (((/* implicit */int) arr_14 [i_2] [8U] [i_2])))))));
            var_16 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_20 [9U] [i_2] [i_2])) ? (arr_17 [i_2]) : (((/* implicit */unsigned int) 2097129))))));
            var_17 = ((unsigned long long int) arr_10 [i_4] [i_2]);
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_18 ^= ((/* implicit */_Bool) var_9);
            arr_25 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -164493864)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6124553444351770470LL)))) ? ((-(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 61927895575029617LL)) ? (((/* implicit */int) (unsigned short)23163)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
            arr_26 [8] = ((/* implicit */unsigned long long int) ((short) arr_19 [(short)12]));
            arr_27 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -164493864)) ? (9223372036854775807LL) : (-7330839163380431149LL)));
            arr_28 [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((signed char) -281742515));
        }
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) -164493887))));
    }
}
