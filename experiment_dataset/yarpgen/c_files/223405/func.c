/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223405
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_12 |= ((/* implicit */long long int) (~((~(((var_2) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_1])))))));
                            arr_8 [i_0] [i_2] [i_2] [i_3] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1 - 1] [i_2] [i_3])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) - (max((var_9), (arr_5 [i_2] [i_1] [i_2]))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1 - 2]))))) ? (arr_6 [i_0] [i_0] [i_1] [i_2] [(unsigned short)8] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                            var_13 = ((/* implicit */long long int) ((((((/* implicit */int) ((short) var_5))) + (2147483647))) >> (((/* implicit */int) arr_3 [i_0] [i_0]))));
                            arr_9 [i_2] [i_1] [(_Bool)1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1] [i_2])) - ((-(((/* implicit */int) var_8))))))) ? (((unsigned long long int) (-(((/* implicit */int) var_6))))) : (arr_6 [i_2] [i_2] [i_2] [i_2] [i_0] [i_0]));
                        }
                    } 
                } 
                arr_10 [i_0] = (~(((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))) & (((arr_6 [i_1] [i_1 + 2] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [9ULL]))))))));
            }
        } 
    } 
    var_14 |= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (var_6)))) ? (((/* implicit */int) max((min((((/* implicit */unsigned short) var_2)), (var_1))), (((/* implicit */unsigned short) var_2))))) : (((/* implicit */int) min((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) var_4))))))));
    /* LoopSeq 1 */
    for (long long int i_4 = 2; i_4 < 12; i_4 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_2);
        arr_15 [i_4] = ((((((/* implicit */_Bool) max((arr_14 [i_4] [i_4]), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_10)) : (arr_13 [i_4]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))));
        var_16 = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned long long int) max((arr_14 [i_4 - 1] [i_4]), (((/* implicit */long long int) arr_11 [i_4]))))), (((((/* implicit */_Bool) var_11)) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4]))))))));
        arr_16 [i_4] = ((/* implicit */unsigned long long int) ((-4LL) - (6LL)));
    }
}
