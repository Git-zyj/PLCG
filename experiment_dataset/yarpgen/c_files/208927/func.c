/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208927
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_12 = ((long long int) ((long long int) var_10));
                    var_13 ^= ((/* implicit */short) var_7);
                    arr_6 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((short) ((short) var_11)));
                }
                /* LoopNest 3 */
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 21; i_5 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [(short)10] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((short) var_7)))));
                                var_14 = var_0;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 ^= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) ((short) var_11))))));
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            {
                arr_20 [i_6] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_0)))))) ? (var_5) : (var_2));
                arr_21 [i_6] [i_6] = ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17676))))) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))));
                arr_22 [i_6] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((int) var_2))))) : (((long long int) (-(var_11))))));
            }
        } 
    } 
}
