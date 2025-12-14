/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239924
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((_Bool) arr_0 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0]);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_15))));
        arr_6 [i_0] = ((/* implicit */short) ((_Bool) ((long long int) arr_3 [i_0] [i_0])));
    }
    for (unsigned int i_1 = 1; i_1 < 6; i_1 += 1) 
    {
        var_19 *= ((/* implicit */unsigned char) (short)-11090);
        var_20 = ((/* implicit */unsigned long long int) var_15);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) ((var_11) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) var_7))));
    }
    for (int i_2 = 1; i_2 < 9; i_2 += 3) 
    {
        arr_13 [i_2] = (+(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) max(((short)-11090), (((/* implicit */short) var_4))))) : (((/* implicit */int) ((_Bool) arr_2 [i_2]))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
        arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 2])) ^ (((/* implicit */int) arr_0 [3])))) & (((/* implicit */int) max((var_15), (var_15))))))) ? (min((((arr_12 [i_2] [i_2 + 1]) ? (5741743596340507307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2 + 2] [i_2 + 2])))));
    }
    /* LoopSeq 2 */
    for (short i_3 = 3; i_3 < 21; i_3 += 4) 
    {
        arr_18 [(signed char)6] |= ((/* implicit */int) (~(((((/* implicit */_Bool) -6901757786783591800LL)) ? (arr_16 [0U]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [12U])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            arr_23 [i_3] [i_3] = ((/* implicit */long long int) (((_Bool)1) ? (arr_16 [i_3]) : (arr_16 [i_3])));
            var_21 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_22 [i_4 + 1] [i_3 + 1]))));
            arr_24 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_3])) ? (arr_21 [i_4] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11084)))));
            arr_25 [i_3 - 3] [i_3] = ((/* implicit */long long int) arr_16 [i_3]);
        }
        for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
        {
            arr_29 [i_3] [i_3] = ((/* implicit */int) ((arr_17 [i_3]) ? ((~(min((arr_19 [i_3] [i_3] [i_5]), (((/* implicit */long long int) var_15)))))) : (((((/* implicit */_Bool) arr_27 [i_3 - 3])) ? (max((-6901757786783591813LL), (arr_19 [i_3] [i_3 + 1] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3]))))))))));
            arr_30 [i_3] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) var_10)), (((unsigned int) (short)-11069)))), (((/* implicit */unsigned int) (-(var_14))))));
        }
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            arr_33 [i_3] = ((/* implicit */unsigned char) arr_32 [i_3] [i_3]);
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1488399082)) ? ((+(((/* implicit */int) arr_32 [(signed char)5] [i_3])))) : (((/* implicit */int) arr_17 [i_3]))));
        }
        arr_34 [i_3] [i_3] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) arr_20 [i_3] [i_3 + 1] [i_3 - 2]))), ((-(arr_20 [i_3] [i_3 - 1] [i_3 - 2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_23 = ((/* implicit */unsigned int) arr_21 [i_7] [i_7]);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_7])) ? (arr_21 [i_7] [i_7]) : (arr_21 [i_7] [i_7])));
        var_25 *= ((/* implicit */short) ((arr_17 [20ULL]) ? (((/* implicit */int) arr_17 [(unsigned char)20])) : (((/* implicit */int) (short)-11105))));
    }
    var_26 = min((((/* implicit */unsigned long long int) var_1)), ((-(var_6))));
}
