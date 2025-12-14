/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22468
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
    var_16 = var_4;
    var_17 = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) 1555125312U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_8))))))));
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)41706)) << (((7115263179385293502LL) - (7115263179385293492LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [15LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_3 [i_0 - 1])))) ? (((/* implicit */long long int) var_1)) : (((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0 + 1]) != (arr_1 [i_0 + 1]))))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) ((unsigned int) -991556325));
                            var_21 = ((/* implicit */int) var_10);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 ^= var_8;
}
