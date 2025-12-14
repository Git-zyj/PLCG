/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214191
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_2 [i_1 + 1] [i_1 - 3] [i_1]) + (2147483647))) >> (((min((arr_3 [i_1] [i_2]), (var_9))) + (7495671288244293202LL)))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 3])) ? (arr_1 [i_1 - 3]) : (arr_1 [i_1 - 1]))) : (min((((var_6) / (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_0] [i_1] [i_0])))))));
                    var_21 |= ((/* implicit */unsigned long long int) (~(max(((-(arr_2 [i_0] [i_1] [i_0]))), (arr_0 [i_0])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        var_22 = ((/* implicit */short) ((int) arr_3 [i_1 - 3] [i_1 - 3]));
                        var_23 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [8ULL])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_1] [i_0] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-9655))))))));
                        var_24 = ((((/* implicit */unsigned long long int) arr_7 [i_1 - 3] [i_1 - 3] [i_1 + 1] [i_2])) - (arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1 - 1]));
                    }
                    for (long long int i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483633)) ^ (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) 16383)) <= (arr_3 [i_0] [i_4])))), (min((((/* implicit */unsigned long long int) 3332413335666781466LL)), (arr_14 [9] [i_1] [i_1] [i_1] [i_1])))))));
                        var_26 = ((/* implicit */unsigned long long int) var_12);
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_11))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_4 [1ULL] [1ULL] [i_1] [i_0])))) - (arr_10 [i_0] [i_1 - 1] [i_1] [i_2] [i_4 - 1]))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_1 [i_1 - 2]) + (arr_1 [i_1 + 1])))) ? (((/* implicit */long long int) (+((+(arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0])))))) : (min((((/* implicit */long long int) ((int) arr_10 [i_0] [i_1] [i_2] [i_2] [i_4 + 1]))), (arr_7 [i_1 + 1] [i_2] [i_4 - 1] [i_1 + 1])))));
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
    var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
}
