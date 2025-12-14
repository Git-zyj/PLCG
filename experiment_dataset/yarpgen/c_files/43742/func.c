/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43742
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((((int) (~(((/* implicit */int) (short)32751))))), (((/* implicit */int) var_8))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(294989826530694457ULL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((short) ((((/* implicit */long long int) arr_3 [i_0])) / (-8013610800769964164LL)))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_19 = arr_6 [i_1];
        arr_8 [i_1 + 2] = ((/* implicit */short) arr_5 [i_1] [i_1]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned long long int) max(((short)4654), ((short)-4654)));
            /* LoopNest 2 */
            for (short i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((arr_12 [6LL] [6LL] [i_3 - 1] [i_4]) + (9223372036854775807LL))) << (((30) - (29))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_4]))))))))));
                        var_21 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4654))))) ? (min((arr_16 [i_1 - 2] [i_1] [3ULL] [3ULL] [i_4]), (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_2] [i_1]))))));
                    }
                } 
            } 
            arr_17 [i_1] [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (((9172245160732230553LL) >> ((((~(((/* implicit */int) (short)-4654)))) - (4605))))));
        }
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_0))));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_6] [(short)12])) ? (7161356389205997405ULL) : (((/* implicit */unsigned long long int) arr_12 [(signed char)8] [(signed char)8] [i_5] [i_5]))))) ? (((long long int) (short)-4654)) : (((/* implicit */long long int) ((((/* implicit */int) arr_14 [10] [i_5] [i_6 - 1] [i_6])) * (((/* implicit */int) (short)4654)))))));
            arr_26 [i_5] [i_5] |= var_2;
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)121))) : (18151754247178857159ULL)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_25 |= ((/* implicit */long long int) arr_15 [i_5]);
            var_26 = ((/* implicit */long long int) 2088905381902170073ULL);
        }
        var_27 = ((/* implicit */signed char) (short)-27919);
    }
    var_28 |= var_8;
    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && ((!(((/* implicit */_Bool) max((((/* implicit */int) var_10)), (var_6)))))))))));
}
