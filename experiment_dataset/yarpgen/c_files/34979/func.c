/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34979
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
    var_15 = ((/* implicit */unsigned int) var_14);
    var_16 += ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12452)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3])) < (((/* implicit */int) ((arr_2 [i_0] [i_1] [i_3]) || (((/* implicit */_Bool) arr_0 [i_3]))))))))));
                            arr_11 [i_0] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)12452)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12452))) : (18446744073709551589ULL))) : (var_11))) - (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (10425637958737070298ULL)))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (min((var_6), ((short)511)))));
                var_18 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) (_Bool)0)))))) >= (min((1852997090U), (((/* implicit */unsigned int) (short)-2024)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_13);
}
