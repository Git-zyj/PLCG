/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242191
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
    for (short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(max((arr_1 [i_0] [i_0]), (((/* implicit */int) (short)128))))))) ? ((((+(((/* implicit */int) arr_0 [i_0])))) / (((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0])))))) : (((((/* implicit */int) arr_0 [i_0])) - (arr_1 [i_0 - 1] [i_0])))));
                arr_5 [i_1] [8LL] [i_0] &= ((/* implicit */int) arr_3 [i_0]);
                arr_6 [i_1] [i_1] [(short)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)6] [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) ((/* implicit */int) (short)-1573))))))) : (((((/* implicit */_Bool) arr_2 [14] [i_0 + 1])) ? (arr_2 [(_Bool)1] [i_0 + 1]) : (arr_2 [6U] [i_0 + 1])))));
                arr_7 [0U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) * (0U)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [(short)14] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) == (arr_2 [i_0] [i_3])))) > (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1])))))) & (((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned int) arr_1 [i_0] [i_0])) : (arr_2 [i_0] [i_0 + 1])))));
                            arr_14 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) 4294967295U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = max((((/* implicit */short) (!(var_7)))), (var_14));
}
