/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34400
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
    var_11 = ((/* implicit */unsigned long long int) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0])) * (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3]))));
                        arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_8 [i_0]));
                        var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_13 = ((/* implicit */_Bool) (~(var_10)));
            var_14 = ((/* implicit */unsigned long long int) ((short) 16766080273951628942ULL));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    {
                        arr_18 [i_0] [i_0 + 2] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (!((_Bool)1))));
                        var_15 = ((/* implicit */short) (-(((/* implicit */int) max((var_8), (arr_8 [i_0 - 1]))))));
                        arr_19 [i_0] [i_4] [i_5] [i_6] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5175420913592616381ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) : (arr_12 [i_0 + 3] [i_6])))));
                    }
                } 
            } 
            var_16 ^= ((/* implicit */_Bool) (-(arr_11 [(short)8])));
            arr_20 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0] [i_4] [i_4]) : (arr_7 [i_0] [i_0 + 1] [i_4]))), (((/* implicit */unsigned long long int) ((short) var_6)))));
        }
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            arr_23 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_7 [i_0] [i_0] [i_7])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_17 [i_0] [i_0] [1ULL] [i_0]))))) : (arr_12 [i_0] [i_7]))) == ((~(arr_13 [i_0] [i_0])))));
            arr_24 [i_0] [i_0] = ((short) ((_Bool) arr_4 [i_0 - 1] [i_0 + 1]));
            arr_25 [i_0] [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_7] [i_0 + 3])) ? (arr_4 [i_7] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((15249749127111314432ULL) <= (max((((/* implicit */unsigned long long int) var_1)), (arr_14 [i_0] [i_0])))))) >> ((((+(15511454113735734615ULL))) - (15511454113735734600ULL)))));
        arr_27 [2ULL] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_11 [8ULL]))), ((-(((/* implicit */int) (_Bool)1))))));
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0])))))) <= (max((var_10), (((/* implicit */unsigned long long int) var_1))))))) == (((/* implicit */int) ((short) min((((/* implicit */short) var_5)), (var_4)))))));
    }
}
