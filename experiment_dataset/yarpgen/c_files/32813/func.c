/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32813
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
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 += ((/* implicit */signed char) (-(arr_5 [i_0 + 1])));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (signed char i_3 = 4; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 + 2])) == (((/* implicit */int) arr_4 [i_0 - 1])))))));
                            var_20 = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */long long int) max((arr_9 [i_2]), (((/* implicit */unsigned int) (unsigned short)65535))))), ((-(arr_3 [i_0]))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) (unsigned short)39857))))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0 - 1] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_2 [i_0])))) ? (((arr_3 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_12), (arr_4 [i_0])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [8U])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [4U] [(short)0] [i_0 - 1] [i_0]))))) ? (5779434800227910564ULL) : (((/* implicit */unsigned long long int) 2033156957))))));
                var_22 -= max((min((arr_10 [i_0 + 2] [(short)8] [i_0] [i_0]), (arr_10 [i_0 + 2] [10U] [i_0 + 2] [i_0]))), (((arr_10 [i_0 - 1] [4U] [i_0] [i_1]) && (((/* implicit */_Bool) arr_5 [i_1 - 1])))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) ((((min((((/* implicit */long long int) var_6)), (var_4))) % (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    var_24 = (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)51349)))))));
}
