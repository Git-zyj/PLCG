/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249361
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) arr_4 [i_2] [i_3 + 4]);
                            var_19 = ((/* implicit */_Bool) var_13);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                    {
                        {
                            arr_15 [i_0] = ((/* implicit */unsigned long long int) var_16);
                            arr_16 [i_0] [(_Bool)1] [i_4] [i_1] [i_4] = ((/* implicit */unsigned short) arr_7 [i_0] [i_1] [(short)8] [i_5 - 1]);
                            arr_17 [10LL] [3] [(unsigned short)8] [2U] [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 643718823237087728LL)), ((+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [12U] [i_4 + 3] [i_5]))) : (var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((-643718823237087729LL), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_6))))) >> (((((/* implicit */_Bool) 4279886942U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_18)))))))));
}
