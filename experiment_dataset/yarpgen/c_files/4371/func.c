/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4371
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
    var_16 = ((/* implicit */long long int) 0ULL);
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 + 1]))))) <= (var_10)));
            arr_7 [(short)10] [(short)10] |= arr_5 [i_0] [i_1];
            var_17 |= min((15ULL), (((/* implicit */unsigned long long int) -3308873889360086278LL)));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) (short)-12825)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1]))))), (var_6))) / ((((!((_Bool)1))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_3 [i_1])))));
                            var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_3 + 1] [i_1 - 1]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3 + 1] [i_1 - 1])))))) ? (((long long int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_1 - 1] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0 + 2] [i_2])), (arr_3 [i_2]))))))))));
                        }
                        arr_14 [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_13)))) ? ((+(((((-3308873889360086261LL) + (9223372036854775807LL))) >> (((arr_12 [i_1] [i_3] [i_3] [(short)20] [i_3]) + (4525205389772549069LL))))))) : (var_15)));
                        var_20 = ((/* implicit */unsigned long long int) -2112915186944558568LL);
                        var_21 = ((/* implicit */long long int) (short)-7066);
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (short)4532))) >= (-3308873889360086274LL)))))) ^ (((((/* implicit */_Bool) 9214364837600034816LL)) ? (((/* implicit */int) (short)32640)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            arr_18 [i_5] = var_13;
            arr_19 [(_Bool)1] [(_Bool)1] &= ((/* implicit */_Bool) ((((/* implicit */int) ((arr_12 [(_Bool)1] [i_5] [i_5] [i_5] [i_5]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_5]))) != (-3308873889360086278LL))))));
            arr_20 [i_5] = ((/* implicit */short) ((arr_10 [i_0 + 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0 + 1]))) : (arr_8 [i_5] [i_0] [i_0] [i_5])));
        }
        arr_21 [i_0] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 288230376149614592LL)) ? (arr_15 [i_0 + 1] [i_0 + 2] [(_Bool)1]) : (arr_15 [i_0 + 1] [(_Bool)1] [0ULL]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-8282)) && (arr_13 [i_0 - 1] [i_0 + 2] [i_0] [i_0] [(short)6] [i_0] [i_0]))))));
    }
    var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) & (var_13)))))))));
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((_Bool) (_Bool)1))))))));
}
