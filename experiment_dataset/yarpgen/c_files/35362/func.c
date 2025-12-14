/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35362
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
    var_10 = ((/* implicit */int) (-(((max((var_0), (((/* implicit */long long int) var_9)))) & (((/* implicit */long long int) var_9))))));
    var_11 = max((max((((/* implicit */long long int) var_8)), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) -707265390)) ? (((/* implicit */int) (unsigned char)41)) : (707265389)))));
    var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) arr_1 [i_0])))))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0 - 2] [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
                arr_4 [i_0] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1]))))));
                var_14 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) > (min((((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (((unsigned char) var_5)))))) > (var_0)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (var_1)))) % (((/* implicit */int) ((arr_9 [i_0] [i_1 - 1] [i_2] [i_3]) > (arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_3 + 1]))))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_6 [i_3] [i_1] [i_1] [i_0]);
                            arr_13 [i_0 - 1] [i_1 + 1] [i_1] [i_0 - 1] [i_1] [i_3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) (~(arr_0 [i_0 + 2] [i_1 - 1])))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (var_4)))) ? (var_5) : (((/* implicit */long long int) ((unsigned int) arr_6 [i_0] [i_1 - 1] [i_2] [i_3])))))));
                            var_16 = ((/* implicit */short) ((var_4) & (((/* implicit */int) arr_3 [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_7);
}
