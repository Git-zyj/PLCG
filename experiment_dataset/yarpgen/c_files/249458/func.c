/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249458
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
    var_11 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_12 ^= (~(((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1])) ? (max((arr_3 [4U]), (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1])))) : ((-(((/* implicit */int) (signed char)-44)))))));
                arr_7 [i_0] [6ULL] [i_1] = ((/* implicit */_Bool) ((((arr_3 [i_0]) & (arr_3 [i_0]))) | ((+(arr_3 [i_0])))));
                var_13 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_2 [4U]))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 + 1]))));
                            var_14 = ((/* implicit */signed char) min(((-((+(((/* implicit */int) var_8)))))), (((/* implicit */int) ((max((((/* implicit */int) arr_1 [2LL])), (var_9))) >= (((/* implicit */int) ((-412509945) >= (((/* implicit */int) (short)14439))))))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 + 2] [i_3 - 3])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_2 - 2] [i_3 - 2])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_2 + 2] [i_3 + 1]))))) ? (((/* implicit */int) max((var_1), (arr_5 [i_1 - 1] [i_2 - 2] [i_3 - 3])))) : (((((((/* implicit */int) arr_5 [i_1 + 1] [i_2 - 2] [i_3 + 1])) + (2147483647))) << (((((/* implicit */int) arr_5 [i_1 - 1] [i_2 - 3] [i_3 - 1])) + (18)))))));
                            arr_14 [i_3 - 1] [i_0] [i_0] = ((/* implicit */signed char) 3245408657U);
                        }
                    } 
                } 
            }
        } 
    } 
}
