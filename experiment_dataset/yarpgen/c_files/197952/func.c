/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197952
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((var_10) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))) != (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
        var_11 = ((((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_0))))) > (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((/* implicit */int) (_Bool)1))))));
    }
    for (short i_1 = 3; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_2] [i_1] [i_1 - 2] = ((((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (9097994047410463370LL))) != (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(short)14] [i_1] [i_3])) ^ (((/* implicit */int) (_Bool)1)))))))) >= (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_3)) - (32158))))) != (((((/* implicit */int) var_8)) << (((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))))))));
                        arr_13 [i_4] [i_1] [i_3] = ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))) | (1000012004U))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) | (((/* implicit */int) arr_8 [10U] [i_1] [i_3]))))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 3] [i_1] [(short)1])))))) >= (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) (short)14769)))))))));
                        arr_14 [i_1] [i_2] [i_2] [i_2] = (i_1 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_10 [i_1] [i_2] [i_1])) + (20356)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4])) | (((/* implicit */int) (_Bool)1))))))))) + (((((arr_5 [i_1] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [14LL]))) - (arr_11 [i_4] [10U] [7U] [i_2] [i_2] [i_1]))))))))) : (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((var_6) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_10 [i_1] [i_2] [i_1])) + (20356))) - (35976)))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_3] [i_4])) | (((/* implicit */int) (_Bool)1))))))))) + (((((arr_5 [i_1] [i_1] [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [14LL]))) - (arr_11 [i_4] [10U] [7U] [i_2] [i_2] [i_1])))))))));
                        var_12 = ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_6 [i_1 + 1]) && (((/* implicit */_Bool) var_0))))) * (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_7 [i_1] [(_Bool)1] [i_3] [i_4])))))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) && (arr_7 [(_Bool)1] [(_Bool)1] [i_3] [i_4])))) | (((((/* implicit */int) var_3)) + (((/* implicit */int) (short)-1))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_1] = ((((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [7LL])) || ((_Bool)1))) || (((var_5) || (((/* implicit */_Bool) var_2)))))) || (((((var_9) || (((/* implicit */_Bool) var_6)))) || (((arr_6 [i_1]) && (((/* implicit */_Bool) 1000012004U)))))));
        var_13 = ((/* implicit */long long int) ((((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) + (1356599883U))) - (((arr_3 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) >> (((((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) <= (((/* implicit */int) var_0))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (short)0)) && (((/* implicit */_Bool) var_6)))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_14 = ((((((/* implicit */long long int) ((/* implicit */int) var_0))) % (var_10))) >= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5]))) > (arr_3 [i_5]))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) (short)13))))) < (((((/* implicit */int) arr_9 [i_5] [i_5] [i_5])) ^ (((/* implicit */int) var_0))))));
        arr_19 [i_5] [i_5] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (1000012008U))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5]))) / (arr_11 [i_5] [i_5] [(short)3] [i_5] [i_5] [i_5])))));
    }
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_0)) + (1952)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_8)))))))) * (((((/* implicit */int) ((var_10) >= (var_7)))) - (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_6)))))))));
}
