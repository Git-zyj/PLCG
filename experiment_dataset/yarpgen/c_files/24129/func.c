/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24129
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
    var_13 = ((/* implicit */unsigned short) var_6);
    var_14 = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))) != (25ULL))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1023))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551610ULL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)165)) & (1827946592))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (1827946592)))) >= (max((((/* implicit */unsigned long long int) var_3)), (var_5))))))) >= (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (short)28399))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(arr_5 [i_0] [i_1] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (var_9))))), (((((/* implicit */_Bool) 2026862358)) ? (((/* implicit */unsigned long long int) 5777228489716460202LL)) : (5ULL)))));
                            arr_13 [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) arr_3 [i_0 - 1] [i_3]));
                            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [i_3] [i_1] [i_2])) ? (arr_7 [i_3] [i_1] [i_2]) : (arr_7 [i_3] [i_1] [i_2]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_1 + 1] [i_2] [i_2] [i_3])))))))));
                            var_18 = ((/* implicit */int) arr_1 [i_0]);
                            var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (var_5))), (((/* implicit */unsigned long long int) (unsigned char)212))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2305843009213693952ULL)) ? (-1537765636) : (-1827946604)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_1])), (arr_11 [i_0] [i_0] [i_1] [i_1]))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)165)), (63U)))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_0 - 1])))))))));
            }
        } 
    } 
}
