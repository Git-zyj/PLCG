/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216710
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
    var_19 = min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_1)))), (max(((-(var_17))), (((/* implicit */unsigned long long int) max((var_3), (var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0 + 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_2] [i_2 - 1] [i_0 + 1] [(unsigned short)12])) != (var_1))))) : (((-5895002728746626324LL) % (((/* implicit */long long int) (-2147483647 - 1)))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)34766)) - (((/* implicit */int) (unsigned short)58275))))) ? (((/* implicit */unsigned int) min(((+(arr_9 [i_0 + 1] [i_0 + 1]))), (((/* implicit */int) arr_8 [i_0 - 2] [8U] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 1]))))) : ((-(((3090894347U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57344)))))))));
                        }
                    } 
                } 
                arr_10 [(short)3] [(short)3] [(short)3] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -130409901499557644LL)) ? (((/* implicit */int) arr_8 [(_Bool)1] [13] [i_0] [i_1] [i_1 - 1] [0LL])) : (((/* implicit */int) var_16))))) ? (268435456) : (max((arr_3 [i_0] [i_1 - 1] [i_0]), (arr_7 [i_1] [i_0 - 1]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_5 [i_1] [i_1 + 1] [(unsigned short)11] [i_0 - 2]))));
            }
        } 
    } 
    var_23 = var_3;
}
