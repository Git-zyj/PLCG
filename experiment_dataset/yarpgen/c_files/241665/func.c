/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241665
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
    var_17 = ((/* implicit */signed char) 336390148894521224ULL);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_16)))) : (min((arr_4 [i_0] [i_1 - 2]), (((/* implicit */long long int) arr_3 [i_1] [i_1 - 3]))))));
                            var_19 = ((/* implicit */unsigned short) 1073741823U);
                            var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_1 [i_0 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_0 [i_2])), (var_4))))) : (((((/* implicit */_Bool) arr_0 [9ULL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))) + (min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 - 4] [i_0])) ? (arr_4 [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))), (var_11)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-((~(((((/* implicit */int) arr_3 [7ULL] [7ULL])) / (arr_2 [i_0] [i_1] [i_0]))))))))));
                var_22 |= ((/* implicit */unsigned int) arr_3 [i_0 - 4] [i_1 - 3]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((_Bool) var_1));
    var_24 = ((/* implicit */unsigned short) 7485463091649968421ULL);
    var_25 = var_4;
}
