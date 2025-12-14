/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49049
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
    var_15 = ((/* implicit */signed char) ((var_6) ^ (((/* implicit */long long int) var_5))));
    var_16 = ((/* implicit */int) (unsigned char)250);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) + (arr_2 [i_0] [(signed char)18])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) arr_9 [i_1]))));
                        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (3501609820U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0])) > (((/* implicit */int) var_9))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((arr_11 [i_0] [i_3] [i_0] [i_1] [i_3] [i_3]) > (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
                        var_20 = ((/* implicit */int) (+(arr_8 [i_0] [i_1])));
                    }
                    arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)31116))) / (var_8)))) : (arr_7 [i_0] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_2 + 2] [i_2 + 2] [i_2 - 3])) <= (arr_12 [i_0] [i_2] [i_2 + 2] [i_0]))))));
                    var_21 = ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)6] [i_2])) ? (((/* implicit */int) arr_0 [(signed char)0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1] [i_0]))))) <= (((((/* implicit */_Bool) 1117635745U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (arr_9 [i_0]))))) ? (((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6)))))))) : (((((/* implicit */_Bool) ((arr_8 [15ULL] [i_1]) - (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2 + 2]))))) ? ((-(arr_9 [(unsigned char)3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((!(var_12))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), ((((-(1968293211992796077ULL))) >> (((var_0) + (1249242492))))))))));
}
