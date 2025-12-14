/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243714
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
    var_16 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (var_6)));
                        var_18 ^= ((/* implicit */long long int) var_15);
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) var_6))));
                            arr_12 [i_0] [i_4 - 1] [(signed char)18] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (arr_10 [i_0] [i_3] [i_2] [i_1] [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_4 - 1] [0] [i_2] [(signed char)8] [i_1] [20U]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) max((max((arr_4 [i_1]), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) ((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_11 [(_Bool)1] [i_2] [i_3] [i_1] [i_3]))))))))));
                        }
                        for (signed char i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)103))))) ? (min((arr_4 [i_1]), (((/* implicit */unsigned int) (unsigned char)74)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) & (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_3] [i_2] [i_2] [i_1] [i_0]))) ^ (arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_7 [i_1] [i_3] [i_1] [i_1])), (var_6)))))))));
                            arr_18 [i_1] [i_1 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((var_10), (((/* implicit */short) var_6)))))))) ? ((-(((/* implicit */int) arr_16 [i_1 - 3] [13ULL] [i_1] [i_1 - 3] [i_1 - 1] [16ULL])))) : (((((/* implicit */_Bool) arr_6 [i_5] [i_1 + 1])) ? ((~(((/* implicit */int) arr_13 [i_5 - 4] [i_3] [i_2] [i_1] [(unsigned short)10] [(signed char)3] [4LL])))) : (((/* implicit */int) (unsigned char)104))))));
                            arr_19 [i_5] [i_1] [i_2] [i_1] [i_0] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((max((((((/* implicit */int) (signed char)17)) << (((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5 + 2])) - (152))))), ((~(((/* implicit */int) arr_16 [i_5] [i_3] [i_1 - 2] [i_2] [i_1 - 2] [(signed char)9])))))) >> (((max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_10)) + (((/* implicit */int) var_0)))))) - (17151)))))) : (((/* implicit */signed char) ((max((((((/* implicit */int) (signed char)17)) << (((((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_3] [i_5 + 2])) - (152))) + (76))))), ((~(((/* implicit */int) arr_16 [i_5] [i_3] [i_1 - 2] [i_2] [i_1 - 2] [(signed char)9])))))) >> (((max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_10)) + (((/* implicit */int) var_0)))))) - (17151))))));
                            arr_20 [i_0] [i_1] [i_1] [i_3] [(unsigned char)0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) << (((arr_1 [i_1] [i_5]) - (4172969425128070513LL))))) * (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_1])))))))), (arr_8 [i_1] [i_1] [(short)9] [i_3] [i_2] [i_3])));
                        }
                    }
                } 
            } 
        } 
    }
    var_20 = ((/* implicit */unsigned char) var_1);
}
